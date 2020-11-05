#include <iostream>

#include "Handler.h"

void fer_assert(const bool expr, const char* msg) {
  if (!expr) {
    std::cout << msg << std::endl;
    exit(1);
  }
}

void HandlerAdd::handle(Instruction *inst) {
  // TODO: implement this method. An answer is provided in the exercise.
  if (inst->msg.compare("add") == 0) {
    fer_assert(_stack->size() >= 2, "Erro: poucos argumentos na pilha.");
    const int v1 = _stack->top();
    _stack->pop();
    const int v2 = _stack->top();
    _stack->pop();
    const int vv = v1 + v2;
    _stack->push(vv);
  } else {
    fer_assert(_next != NULL, "Erro: comando desconhecido.");
    _next->handle(inst);
  }
}

void HandlerMul::handle(Instruction *inst) {
  // TODO: implement this method.
  if (inst->msg.compare("mul") == 0) {
    fer_assert(_stack->size() >= 2, "Erro: poucos argumentos na pilha.");
    const int v1 = _stack->top();
    _stack->pop();
    const int v2 = _stack->top();
    _stack->pop();
    const int vv = v1 * v2;
    _stack->push(vv);
  } else {
    fer_assert(_next != NULL, "Erro: comando desconhecido.");
    _next->handle(inst);
  }
}

void HandlerPop::handle(Instruction *inst) {
  // TODO: implement this method.
  if (inst->msg.compare("pop") == 0) {
    fer_assert(_stack->size() >= 0, "Erro: poucos argumentos na pilha.");
    const int v1 = _stack->top();
    _stack->pop();
  } else {
    fer_assert(_next != NULL, "Erro: comando desconhecido.");
    _next->handle(inst);
  }
}

void HandlerPrint::handle(Instruction *inst) {
  // TODO: implement this method.
  if (inst->msg.compare("print") == 0) {
    fer_assert(_stack->size() >= 0, "Erro: poucos argumentos na pilha.");
    int v1 = _stack->top();
    std::cout << v1 << std::endl; 
   // _stack->pop();
    /*const int vv = v1;
    _stack->top();*/
   
  } else {
    fer_assert(_next != NULL, "Erro: comando desconhecido.");
    _next->handle(inst);
  }
}

void HandlerPush::handle(Instruction *inst) {
  // TODO: implement this method.
  if (inst->msg.compare("push") == 0) {
      int valor;
      valor =  inst->value; 
          _stack->push(inst->value);
     
  } else {
    fer_assert(_next != NULL, "Erro: comando desconhecido.");
    _next->handle(inst);
  }
}