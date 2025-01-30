
// Generated from grammar/Language.g4 by ANTLR 4.13.2


#include "LanguageListener.h"

#include "LanguageParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LanguageParserStaticData final {
  LanguageParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LanguageParserStaticData(const LanguageParserStaticData&) = delete;
  LanguageParserStaticData(LanguageParserStaticData&&) = delete;
  LanguageParserStaticData& operator=(const LanguageParserStaticData&) = delete;
  LanguageParserStaticData& operator=(LanguageParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag languageParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LanguageParserStaticData> languageParserStaticData = nullptr;

void languageParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (languageParserStaticData != nullptr) {
    return;
  }
#else
  assert(languageParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LanguageParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "variableDeclaration", "functionDeclaration", 
      "assignment", "loopStatement", "printStatement", "returnStatement", 
      "block", "parameterList", "parameter", "condition", "expression", 
      "term", "factor", "type", "comparisonOp"
    },
    std::vector<std::string>{
      "", "'let'", "':'", "';'", "'fn'", "'('", "')'", "'->'", "'='", "'for'", 
      "'while'", "'printf'", "','", "'return'", "'{'", "'}'", "'int'", "'float'", 
      "'str'", "'bool'", "'void'", "'<'", "'<='", "'>'", "'>='", "'=='", 
      "'!='", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "ADD", "SUB", "MUL", "DIV", 
      "ID", "INT", "FLOAT", "STRING", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,161,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,
  	3,3,61,8,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,88,8,5,1,6,1,6,1,6,1,6,
  	1,6,5,6,95,8,6,10,6,12,6,98,9,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,5,
  	8,109,8,8,10,8,12,8,112,9,8,1,8,1,8,1,9,1,9,1,9,5,9,119,8,9,10,9,12,9,
  	122,9,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,5,12,135,
  	8,12,10,12,12,12,138,9,12,1,13,1,13,1,13,5,13,143,8,13,10,13,12,13,146,
  	9,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,155,8,14,1,15,1,15,1,16,
  	1,16,1,16,0,0,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,0,4,1,
  	0,27,28,1,0,29,30,1,0,16,20,1,0,21,26,159,0,37,1,0,0,0,2,48,1,0,0,0,4,
  	50,1,0,0,0,6,56,1,0,0,0,8,67,1,0,0,0,10,87,1,0,0,0,12,89,1,0,0,0,14,102,
  	1,0,0,0,16,106,1,0,0,0,18,115,1,0,0,0,20,123,1,0,0,0,22,127,1,0,0,0,24,
  	131,1,0,0,0,26,139,1,0,0,0,28,154,1,0,0,0,30,156,1,0,0,0,32,158,1,0,0,
  	0,34,36,3,2,1,0,35,34,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,
  	0,38,40,1,0,0,0,39,37,1,0,0,0,40,41,5,0,0,1,41,1,1,0,0,0,42,49,3,4,2,
  	0,43,49,3,6,3,0,44,49,3,8,4,0,45,49,3,10,5,0,46,49,3,12,6,0,47,49,3,14,
  	7,0,48,42,1,0,0,0,48,43,1,0,0,0,48,44,1,0,0,0,48,45,1,0,0,0,48,46,1,0,
  	0,0,48,47,1,0,0,0,49,3,1,0,0,0,50,51,5,1,0,0,51,52,5,31,0,0,52,53,5,2,
  	0,0,53,54,3,30,15,0,54,55,5,3,0,0,55,5,1,0,0,0,56,57,5,4,0,0,57,58,5,
  	31,0,0,58,60,5,5,0,0,59,61,3,18,9,0,60,59,1,0,0,0,60,61,1,0,0,0,61,62,
  	1,0,0,0,62,63,5,6,0,0,63,64,5,7,0,0,64,65,3,30,15,0,65,66,3,16,8,0,66,
  	7,1,0,0,0,67,68,5,31,0,0,68,69,5,8,0,0,69,70,3,24,12,0,70,71,5,3,0,0,
  	71,9,1,0,0,0,72,73,5,9,0,0,73,74,5,5,0,0,74,75,3,8,4,0,75,76,3,22,11,
  	0,76,77,5,3,0,0,77,78,3,8,4,0,78,79,5,6,0,0,79,80,3,16,8,0,80,88,1,0,
  	0,0,81,82,5,10,0,0,82,83,5,5,0,0,83,84,3,22,11,0,84,85,5,6,0,0,85,86,
  	3,16,8,0,86,88,1,0,0,0,87,72,1,0,0,0,87,81,1,0,0,0,88,11,1,0,0,0,89,90,
  	5,11,0,0,90,91,5,5,0,0,91,96,5,34,0,0,92,93,5,12,0,0,93,95,3,24,12,0,
  	94,92,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,99,1,0,0,0,
  	98,96,1,0,0,0,99,100,5,6,0,0,100,101,5,3,0,0,101,13,1,0,0,0,102,103,5,
  	13,0,0,103,104,3,24,12,0,104,105,5,3,0,0,105,15,1,0,0,0,106,110,5,14,
  	0,0,107,109,3,2,1,0,108,107,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,
  	111,1,0,0,0,111,113,1,0,0,0,112,110,1,0,0,0,113,114,5,15,0,0,114,17,1,
  	0,0,0,115,120,3,20,10,0,116,117,5,12,0,0,117,119,3,20,10,0,118,116,1,
  	0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,19,1,0,0,0,
  	122,120,1,0,0,0,123,124,5,31,0,0,124,125,5,2,0,0,125,126,3,30,15,0,126,
  	21,1,0,0,0,127,128,3,24,12,0,128,129,3,32,16,0,129,130,3,24,12,0,130,
  	23,1,0,0,0,131,136,3,26,13,0,132,133,7,0,0,0,133,135,3,26,13,0,134,132,
  	1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,25,1,0,0,
  	0,138,136,1,0,0,0,139,144,3,28,14,0,140,141,7,1,0,0,141,143,3,28,14,0,
  	142,140,1,0,0,0,143,146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,27,
  	1,0,0,0,146,144,1,0,0,0,147,155,5,31,0,0,148,155,5,32,0,0,149,155,5,33,
  	0,0,150,151,5,5,0,0,151,152,3,24,12,0,152,153,5,6,0,0,153,155,1,0,0,0,
  	154,147,1,0,0,0,154,148,1,0,0,0,154,149,1,0,0,0,154,150,1,0,0,0,155,29,
  	1,0,0,0,156,157,7,2,0,0,157,31,1,0,0,0,158,159,7,3,0,0,159,33,1,0,0,0,
  	10,37,48,60,87,96,110,120,136,144,154
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  languageParserStaticData = std::move(staticData);
}

}

LanguageParser::LanguageParser(TokenStream *input) : LanguageParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LanguageParser::LanguageParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LanguageParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *languageParserStaticData->atn, languageParserStaticData->decisionToDFA, languageParserStaticData->sharedContextCache, options);
}

LanguageParser::~LanguageParser() {
  delete _interpreter;
}

const atn::ATN& LanguageParser::getATN() const {
  return *languageParserStaticData->atn;
}

std::string LanguageParser::getGrammarFileName() const {
  return "Language.g4";
}

const std::vector<std::string>& LanguageParser::getRuleNames() const {
  return languageParserStaticData->ruleNames;
}

const dfa::Vocabulary& LanguageParser::getVocabulary() const {
  return languageParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LanguageParser::getSerializedATN() const {
  return languageParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

LanguageParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::ProgramContext::EOF() {
  return getToken(LanguageParser::EOF, 0);
}

std::vector<LanguageParser::StatementContext *> LanguageParser::ProgramContext::statement() {
  return getRuleContexts<LanguageParser::StatementContext>();
}

LanguageParser::StatementContext* LanguageParser::ProgramContext::statement(size_t i) {
  return getRuleContext<LanguageParser::StatementContext>(i);
}


size_t LanguageParser::ProgramContext::getRuleIndex() const {
  return LanguageParser::RuleProgram;
}

void LanguageParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void LanguageParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

LanguageParser::ProgramContext* LanguageParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LanguageParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2147495442) != 0)) {
      setState(34);
      statement();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(LanguageParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

LanguageParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LanguageParser::VariableDeclarationContext* LanguageParser::StatementContext::variableDeclaration() {
  return getRuleContext<LanguageParser::VariableDeclarationContext>(0);
}

LanguageParser::FunctionDeclarationContext* LanguageParser::StatementContext::functionDeclaration() {
  return getRuleContext<LanguageParser::FunctionDeclarationContext>(0);
}

LanguageParser::AssignmentContext* LanguageParser::StatementContext::assignment() {
  return getRuleContext<LanguageParser::AssignmentContext>(0);
}

LanguageParser::LoopStatementContext* LanguageParser::StatementContext::loopStatement() {
  return getRuleContext<LanguageParser::LoopStatementContext>(0);
}

LanguageParser::PrintStatementContext* LanguageParser::StatementContext::printStatement() {
  return getRuleContext<LanguageParser::PrintStatementContext>(0);
}

LanguageParser::ReturnStatementContext* LanguageParser::StatementContext::returnStatement() {
  return getRuleContext<LanguageParser::ReturnStatementContext>(0);
}


size_t LanguageParser::StatementContext::getRuleIndex() const {
  return LanguageParser::RuleStatement;
}

void LanguageParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void LanguageParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

LanguageParser::StatementContext* LanguageParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, LanguageParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LanguageParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        variableDeclaration();
        break;
      }

      case LanguageParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        functionDeclaration();
        break;
      }

      case LanguageParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(44);
        assignment();
        break;
      }

      case LanguageParser::T__8:
      case LanguageParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(45);
        loopStatement();
        break;
      }

      case LanguageParser::T__10: {
        enterOuterAlt(_localctx, 5);
        setState(46);
        printStatement();
        break;
      }

      case LanguageParser::T__12: {
        enterOuterAlt(_localctx, 6);
        setState(47);
        returnStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

LanguageParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::VariableDeclarationContext::ID() {
  return getToken(LanguageParser::ID, 0);
}

LanguageParser::TypeContext* LanguageParser::VariableDeclarationContext::type() {
  return getRuleContext<LanguageParser::TypeContext>(0);
}


size_t LanguageParser::VariableDeclarationContext::getRuleIndex() const {
  return LanguageParser::RuleVariableDeclaration;
}

void LanguageParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void LanguageParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

LanguageParser::VariableDeclarationContext* LanguageParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, LanguageParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(LanguageParser::T__0);
    setState(51);
    match(LanguageParser::ID);
    setState(52);
    match(LanguageParser::T__1);
    setState(53);
    type();
    setState(54);
    match(LanguageParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

LanguageParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::FunctionDeclarationContext::ID() {
  return getToken(LanguageParser::ID, 0);
}

LanguageParser::TypeContext* LanguageParser::FunctionDeclarationContext::type() {
  return getRuleContext<LanguageParser::TypeContext>(0);
}

LanguageParser::BlockContext* LanguageParser::FunctionDeclarationContext::block() {
  return getRuleContext<LanguageParser::BlockContext>(0);
}

LanguageParser::ParameterListContext* LanguageParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<LanguageParser::ParameterListContext>(0);
}


size_t LanguageParser::FunctionDeclarationContext::getRuleIndex() const {
  return LanguageParser::RuleFunctionDeclaration;
}

void LanguageParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void LanguageParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

LanguageParser::FunctionDeclarationContext* LanguageParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, LanguageParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(LanguageParser::T__3);
    setState(57);
    match(LanguageParser::ID);
    setState(58);
    match(LanguageParser::T__4);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LanguageParser::ID) {
      setState(59);
      parameterList();
    }
    setState(62);
    match(LanguageParser::T__5);
    setState(63);
    match(LanguageParser::T__6);
    setState(64);
    type();
    setState(65);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

LanguageParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::AssignmentContext::ID() {
  return getToken(LanguageParser::ID, 0);
}

LanguageParser::ExpressionContext* LanguageParser::AssignmentContext::expression() {
  return getRuleContext<LanguageParser::ExpressionContext>(0);
}


size_t LanguageParser::AssignmentContext::getRuleIndex() const {
  return LanguageParser::RuleAssignment;
}

void LanguageParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void LanguageParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

LanguageParser::AssignmentContext* LanguageParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 8, LanguageParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(LanguageParser::ID);
    setState(68);
    match(LanguageParser::T__7);
    setState(69);
    expression();
    setState(70);
    match(LanguageParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStatementContext ------------------------------------------------------------------

LanguageParser::LoopStatementContext::LoopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LanguageParser::AssignmentContext *> LanguageParser::LoopStatementContext::assignment() {
  return getRuleContexts<LanguageParser::AssignmentContext>();
}

LanguageParser::AssignmentContext* LanguageParser::LoopStatementContext::assignment(size_t i) {
  return getRuleContext<LanguageParser::AssignmentContext>(i);
}

LanguageParser::ConditionContext* LanguageParser::LoopStatementContext::condition() {
  return getRuleContext<LanguageParser::ConditionContext>(0);
}

LanguageParser::BlockContext* LanguageParser::LoopStatementContext::block() {
  return getRuleContext<LanguageParser::BlockContext>(0);
}


size_t LanguageParser::LoopStatementContext::getRuleIndex() const {
  return LanguageParser::RuleLoopStatement;
}

void LanguageParser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}

void LanguageParser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}

LanguageParser::LoopStatementContext* LanguageParser::loopStatement() {
  LoopStatementContext *_localctx = _tracker.createInstance<LoopStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, LanguageParser::RuleLoopStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LanguageParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        match(LanguageParser::T__8);
        setState(73);
        match(LanguageParser::T__4);
        setState(74);
        assignment();
        setState(75);
        condition();
        setState(76);
        match(LanguageParser::T__2);
        setState(77);
        assignment();
        setState(78);
        match(LanguageParser::T__5);
        setState(79);
        block();
        break;
      }

      case LanguageParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        match(LanguageParser::T__9);
        setState(82);
        match(LanguageParser::T__4);
        setState(83);
        condition();
        setState(84);
        match(LanguageParser::T__5);
        setState(85);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

LanguageParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::PrintStatementContext::STRING() {
  return getToken(LanguageParser::STRING, 0);
}

std::vector<LanguageParser::ExpressionContext *> LanguageParser::PrintStatementContext::expression() {
  return getRuleContexts<LanguageParser::ExpressionContext>();
}

LanguageParser::ExpressionContext* LanguageParser::PrintStatementContext::expression(size_t i) {
  return getRuleContext<LanguageParser::ExpressionContext>(i);
}


size_t LanguageParser::PrintStatementContext::getRuleIndex() const {
  return LanguageParser::RulePrintStatement;
}

void LanguageParser::PrintStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStatement(this);
}

void LanguageParser::PrintStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStatement(this);
}

LanguageParser::PrintStatementContext* LanguageParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, LanguageParser::RulePrintStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(LanguageParser::T__10);
    setState(90);
    match(LanguageParser::T__4);
    setState(91);
    match(LanguageParser::STRING);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LanguageParser::T__11) {
      setState(92);
      match(LanguageParser::T__11);
      setState(93);
      expression();
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(LanguageParser::T__5);
    setState(100);
    match(LanguageParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

LanguageParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LanguageParser::ExpressionContext* LanguageParser::ReturnStatementContext::expression() {
  return getRuleContext<LanguageParser::ExpressionContext>(0);
}


size_t LanguageParser::ReturnStatementContext::getRuleIndex() const {
  return LanguageParser::RuleReturnStatement;
}

void LanguageParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void LanguageParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

LanguageParser::ReturnStatementContext* LanguageParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, LanguageParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(LanguageParser::T__12);
    setState(103);
    expression();
    setState(104);
    match(LanguageParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

LanguageParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LanguageParser::StatementContext *> LanguageParser::BlockContext::statement() {
  return getRuleContexts<LanguageParser::StatementContext>();
}

LanguageParser::StatementContext* LanguageParser::BlockContext::statement(size_t i) {
  return getRuleContext<LanguageParser::StatementContext>(i);
}


size_t LanguageParser::BlockContext::getRuleIndex() const {
  return LanguageParser::RuleBlock;
}

void LanguageParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void LanguageParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

LanguageParser::BlockContext* LanguageParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 16, LanguageParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(LanguageParser::T__13);
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2147495442) != 0)) {
      setState(107);
      statement();
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    match(LanguageParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

LanguageParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LanguageParser::ParameterContext *> LanguageParser::ParameterListContext::parameter() {
  return getRuleContexts<LanguageParser::ParameterContext>();
}

LanguageParser::ParameterContext* LanguageParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<LanguageParser::ParameterContext>(i);
}


size_t LanguageParser::ParameterListContext::getRuleIndex() const {
  return LanguageParser::RuleParameterList;
}

void LanguageParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void LanguageParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

LanguageParser::ParameterListContext* LanguageParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 18, LanguageParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    parameter();
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LanguageParser::T__11) {
      setState(116);
      match(LanguageParser::T__11);
      setState(117);
      parameter();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

LanguageParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::ParameterContext::ID() {
  return getToken(LanguageParser::ID, 0);
}

LanguageParser::TypeContext* LanguageParser::ParameterContext::type() {
  return getRuleContext<LanguageParser::TypeContext>(0);
}


size_t LanguageParser::ParameterContext::getRuleIndex() const {
  return LanguageParser::RuleParameter;
}

void LanguageParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void LanguageParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

LanguageParser::ParameterContext* LanguageParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 20, LanguageParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(LanguageParser::ID);
    setState(124);
    match(LanguageParser::T__1);
    setState(125);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

LanguageParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LanguageParser::ExpressionContext *> LanguageParser::ConditionContext::expression() {
  return getRuleContexts<LanguageParser::ExpressionContext>();
}

LanguageParser::ExpressionContext* LanguageParser::ConditionContext::expression(size_t i) {
  return getRuleContext<LanguageParser::ExpressionContext>(i);
}

LanguageParser::ComparisonOpContext* LanguageParser::ConditionContext::comparisonOp() {
  return getRuleContext<LanguageParser::ComparisonOpContext>(0);
}


size_t LanguageParser::ConditionContext::getRuleIndex() const {
  return LanguageParser::RuleCondition;
}

void LanguageParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void LanguageParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

LanguageParser::ConditionContext* LanguageParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 22, LanguageParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    expression();
    setState(128);
    comparisonOp();
    setState(129);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

LanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LanguageParser::TermContext *> LanguageParser::ExpressionContext::term() {
  return getRuleContexts<LanguageParser::TermContext>();
}

LanguageParser::TermContext* LanguageParser::ExpressionContext::term(size_t i) {
  return getRuleContext<LanguageParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> LanguageParser::ExpressionContext::ADD() {
  return getTokens(LanguageParser::ADD);
}

tree::TerminalNode* LanguageParser::ExpressionContext::ADD(size_t i) {
  return getToken(LanguageParser::ADD, i);
}

std::vector<tree::TerminalNode *> LanguageParser::ExpressionContext::SUB() {
  return getTokens(LanguageParser::SUB);
}

tree::TerminalNode* LanguageParser::ExpressionContext::SUB(size_t i) {
  return getToken(LanguageParser::SUB, i);
}


size_t LanguageParser::ExpressionContext::getRuleIndex() const {
  return LanguageParser::RuleExpression;
}

void LanguageParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void LanguageParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

LanguageParser::ExpressionContext* LanguageParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, LanguageParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    term();
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LanguageParser::ADD

    || _la == LanguageParser::SUB) {
      setState(132);
      _la = _input->LA(1);
      if (!(_la == LanguageParser::ADD

      || _la == LanguageParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(133);
      term();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

LanguageParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LanguageParser::FactorContext *> LanguageParser::TermContext::factor() {
  return getRuleContexts<LanguageParser::FactorContext>();
}

LanguageParser::FactorContext* LanguageParser::TermContext::factor(size_t i) {
  return getRuleContext<LanguageParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> LanguageParser::TermContext::MUL() {
  return getTokens(LanguageParser::MUL);
}

tree::TerminalNode* LanguageParser::TermContext::MUL(size_t i) {
  return getToken(LanguageParser::MUL, i);
}

std::vector<tree::TerminalNode *> LanguageParser::TermContext::DIV() {
  return getTokens(LanguageParser::DIV);
}

tree::TerminalNode* LanguageParser::TermContext::DIV(size_t i) {
  return getToken(LanguageParser::DIV, i);
}


size_t LanguageParser::TermContext::getRuleIndex() const {
  return LanguageParser::RuleTerm;
}

void LanguageParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void LanguageParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

LanguageParser::TermContext* LanguageParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 26, LanguageParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    factor();
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LanguageParser::MUL

    || _la == LanguageParser::DIV) {
      setState(140);
      _la = _input->LA(1);
      if (!(_la == LanguageParser::MUL

      || _la == LanguageParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(141);
      factor();
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

LanguageParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LanguageParser::FactorContext::ID() {
  return getToken(LanguageParser::ID, 0);
}

tree::TerminalNode* LanguageParser::FactorContext::INT() {
  return getToken(LanguageParser::INT, 0);
}

tree::TerminalNode* LanguageParser::FactorContext::FLOAT() {
  return getToken(LanguageParser::FLOAT, 0);
}

LanguageParser::ExpressionContext* LanguageParser::FactorContext::expression() {
  return getRuleContext<LanguageParser::ExpressionContext>(0);
}


size_t LanguageParser::FactorContext::getRuleIndex() const {
  return LanguageParser::RuleFactor;
}

void LanguageParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void LanguageParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

LanguageParser::FactorContext* LanguageParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 28, LanguageParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LanguageParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(147);
        match(LanguageParser::ID);
        break;
      }

      case LanguageParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(148);
        match(LanguageParser::INT);
        break;
      }

      case LanguageParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(149);
        match(LanguageParser::FLOAT);
        break;
      }

      case LanguageParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(150);
        match(LanguageParser::T__4);
        setState(151);
        expression();
        setState(152);
        match(LanguageParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

LanguageParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LanguageParser::TypeContext::getRuleIndex() const {
  return LanguageParser::RuleType;
}

void LanguageParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void LanguageParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

LanguageParser::TypeContext* LanguageParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, LanguageParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2031616) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOpContext ------------------------------------------------------------------

LanguageParser::ComparisonOpContext::ComparisonOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LanguageParser::ComparisonOpContext::getRuleIndex() const {
  return LanguageParser::RuleComparisonOp;
}

void LanguageParser::ComparisonOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOp(this);
}

void LanguageParser::ComparisonOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOp(this);
}

LanguageParser::ComparisonOpContext* LanguageParser::comparisonOp() {
  ComparisonOpContext *_localctx = _tracker.createInstance<ComparisonOpContext>(_ctx, getState());
  enterRule(_localctx, 32, LanguageParser::RuleComparisonOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 132120576) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void LanguageParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  languageParserInitialize();
#else
  ::antlr4::internal::call_once(languageParserOnceFlag, languageParserInitialize);
#endif
}
