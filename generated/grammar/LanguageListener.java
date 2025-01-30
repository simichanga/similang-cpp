// Generated from Language.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link LanguageParser}.
 */
public interface LanguageListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link LanguageParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(LanguageParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(LanguageParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(LanguageParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(LanguageParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclaration(LanguageParser.VariableDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclaration(LanguageParser.VariableDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDeclaration(LanguageParser.FunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDeclaration(LanguageParser.FunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(LanguageParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(LanguageParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#loopStatement}.
	 * @param ctx the parse tree
	 */
	void enterLoopStatement(LanguageParser.LoopStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#loopStatement}.
	 * @param ctx the parse tree
	 */
	void exitLoopStatement(LanguageParser.LoopStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#printStatement}.
	 * @param ctx the parse tree
	 */
	void enterPrintStatement(LanguageParser.PrintStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#printStatement}.
	 * @param ctx the parse tree
	 */
	void exitPrintStatement(LanguageParser.PrintStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void enterReturnStatement(LanguageParser.ReturnStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void exitReturnStatement(LanguageParser.ReturnStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(LanguageParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(LanguageParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(LanguageParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(LanguageParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(LanguageParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(LanguageParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(LanguageParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(LanguageParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(LanguageParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(LanguageParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(LanguageParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(LanguageParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(LanguageParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(LanguageParser.FactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(LanguageParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(LanguageParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link LanguageParser#comparisonOp}.
	 * @param ctx the parse tree
	 */
	void enterComparisonOp(LanguageParser.ComparisonOpContext ctx);
	/**
	 * Exit a parse tree produced by {@link LanguageParser#comparisonOp}.
	 * @param ctx the parse tree
	 */
	void exitComparisonOp(LanguageParser.ComparisonOpContext ctx);
}