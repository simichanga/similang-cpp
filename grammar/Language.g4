grammar Language;

program         : statement* EOF;
statement       : variableDeclaration
                | functionDeclaration
                | assignment
                | loopStatement
                | printStatement
                | returnStatement;

variableDeclaration
                : 'let' ID ':' type ';';
functionDeclaration
                : 'fn' ID '(' parameterList? ')' '->' type block;
assignment      : ID '=' expression ';';
loopStatement   : 'for' '(' assignment condition ';' assignment ')' block
                | 'while' '(' condition ')' block;
printStatement  : 'printf' '(' STRING (',' expression)* ')' ';';
returnStatement : 'return' expression ';';

block           : '{' statement* '}';
parameterList   : parameter (',' parameter)*;
parameter       : ID ':' type;
condition       : expression comparisonOp expression;
expression      : term ((ADD | SUB) term)*;
term            : factor ((MUL | DIV) factor)*;
factor          : ID
                | INT
                | FLOAT
                | '(' expression ')';

type            : 'int' | 'float' | 'str' | 'bool' | 'void';

comparisonOp    : '<' | '<=' | '>' | '>=' | '==' | '!=';
ADD             : '+';
SUB             : '-';
MUL             : '*';
DIV             : '/';

ID              : [a-zA-Z_][a-zA-Z_0-9]*;
INT             : [0-9]+;
FLOAT           : [0-9]+ '.' [0-9]+;
STRING          : '"' .*? '"';
WS              : [ \t\r\n]+ -> skip;
COMMENT         : '//' ~[\r\n]* -> skip;