
// Generated from grammar/Language.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LanguageParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LanguageParser.
 */
class  LanguageListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(LanguageParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(LanguageParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(LanguageParser::StatementContext *ctx) = 0;
  virtual void exitStatement(LanguageParser::StatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(LanguageParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(LanguageParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterFunctionDeclaration(LanguageParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(LanguageParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterAssignment(LanguageParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(LanguageParser::AssignmentContext *ctx) = 0;

  virtual void enterLoopStatement(LanguageParser::LoopStatementContext *ctx) = 0;
  virtual void exitLoopStatement(LanguageParser::LoopStatementContext *ctx) = 0;

  virtual void enterPrintStatement(LanguageParser::PrintStatementContext *ctx) = 0;
  virtual void exitPrintStatement(LanguageParser::PrintStatementContext *ctx) = 0;

  virtual void enterReturnStatement(LanguageParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(LanguageParser::ReturnStatementContext *ctx) = 0;

  virtual void enterBlock(LanguageParser::BlockContext *ctx) = 0;
  virtual void exitBlock(LanguageParser::BlockContext *ctx) = 0;

  virtual void enterParameterList(LanguageParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(LanguageParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(LanguageParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(LanguageParser::ParameterContext *ctx) = 0;

  virtual void enterCondition(LanguageParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(LanguageParser::ConditionContext *ctx) = 0;

  virtual void enterExpression(LanguageParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(LanguageParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(LanguageParser::TermContext *ctx) = 0;
  virtual void exitTerm(LanguageParser::TermContext *ctx) = 0;

  virtual void enterFactor(LanguageParser::FactorContext *ctx) = 0;
  virtual void exitFactor(LanguageParser::FactorContext *ctx) = 0;

  virtual void enterType(LanguageParser::TypeContext *ctx) = 0;
  virtual void exitType(LanguageParser::TypeContext *ctx) = 0;

  virtual void enterComparisonOp(LanguageParser::ComparisonOpContext *ctx) = 0;
  virtual void exitComparisonOp(LanguageParser::ComparisonOpContext *ctx) = 0;


};

