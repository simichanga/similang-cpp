#pragma once

class ProgramNode;
class StatementNode;
class VariableDeclarationNode;
class FunctionDeclarationNode;
class AssignmentNode;
class ExpressionNode;
class TermNode;
class FactorNode;

class ASTVisitor {
public:
    virtual ~ASTVisitor() = default;
    virtual void visit(ProgramNode& node) = 0;
    virtual void visit(StatementNode& node) = 0;
    virtual void visit(VariableDeclarationNode& node) = 0;
    virtual void visit(FunctionDeclarationNode& node) = 0;
    virtual void visit(AssignmentNode& node) = 0;
    virtual void visit(ExpressionNode& node) = 0;
    virtual void visit(TermNode& node) = 0;
    virtual void visit(FactorNode& node) = 0;
};