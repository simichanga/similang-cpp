
// Generated from grammar/Language.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LanguageListener.h"


/**
 * This class provides an empty implementation of LanguageListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LanguageBaseListener : public LanguageListener {
public:

  virtual void enterProgram(LanguageParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(LanguageParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(LanguageParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(LanguageParser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(LanguageParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(LanguageParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(LanguageParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(LanguageParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(LanguageParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(LanguageParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterLoopStatement(LanguageParser::LoopStatementContext * /*ctx*/) override { }
  virtual void exitLoopStatement(LanguageParser::LoopStatementContext * /*ctx*/) override { }

  virtual void enterPrintStatement(LanguageParser::PrintStatementContext * /*ctx*/) override { }
  virtual void exitPrintStatement(LanguageParser::PrintStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(LanguageParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(LanguageParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterBlock(LanguageParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(LanguageParser::BlockContext * /*ctx*/) override { }

  virtual void enterParameterList(LanguageParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(LanguageParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(LanguageParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(LanguageParser::ParameterContext * /*ctx*/) override { }

  virtual void enterCondition(LanguageParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(LanguageParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpression(LanguageParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(LanguageParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterTerm(LanguageParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(LanguageParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(LanguageParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(LanguageParser::FactorContext * /*ctx*/) override { }

  virtual void enterType(LanguageParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(LanguageParser::TypeContext * /*ctx*/) override { }

  virtual void enterComparisonOp(LanguageParser::ComparisonOpContext * /*ctx*/) override { }
  virtual void exitComparisonOp(LanguageParser::ComparisonOpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

