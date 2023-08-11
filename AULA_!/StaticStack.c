#include "Stack.h"
#include "meutipo.h"
#include <stdlib.h>

#define MAX 10
struct stack {
  int qtd;
  MeuTipo dados[MAX];
};

/**
 * Cria instâncias de pilhas vazias.
 * @return Stack*
 */
Stack *Stack_create() {
  Stack *s = calloc(1, sizeof(Stack));
  return s;
}
/**
 * Tenta inserir um inteiro na pilha.
 * @return bool informando o sucesso da operação
 * @param Stack* ponteiro para a pilha
 * @param int o valor inteiro que se deseja armazenar.
 */
bool Stack_push(Stack *idk, MeuTipo info) {
  if (!Stack_is_full(idk)) {
    idk->dados[idk->qtd] = info;
    idk->qtd++;
    return true;
  }
  return false;
}
/**
 * Tenta remover o elemento do topo de uma pilha
 * @return bool informando o sucesso da operação
 * @param Stack* ponteiro para a pilha
 * @param int* o ponteiro do inteiro para qual será armazenado o valor removido
 * da pilha (caso de sucesso)
 */
bool Stack_pop(Stack *idk, MeuTipo *info) {
  if (!Stack_is_empty(idk)) {
    MeuTipo topo = idk->dados[idk->qtd - 1];
    *info = topo;
    idk->qtd--;
    return true;
  }
  return false;
}
/**
 * Tenta fazer a leitura do elemento do topo de uma pilha (não remove)
 * @return bool informando o sucesso da operação
 * @param Stack* ponteiro para a pilha
 * @param int* o ponteiro do inteiro para qual será armazenado o valor lido do
 * topo da pilha (caso de sucesso)
 */
bool Stack_head(Stack *idk, MeuTipo *info) {
  if (!Stack_is_empty(idk)) {
    MeuTipo topo = idk->dados[idk->qtd - 1];
    *info = topo;
    return true;
  }
  return false;
}
/**
 * Retorna se a pilha está cheia.
 * @return bool true se a pilha estiver cheia
 * @param Stack* ponteiro para a pilha
 */
bool Stack_is_full(Stack *idk) { return (idk->qtd == MAX); }
/**
 * Retorna se a pilha está vazia.
 * @return bool true se a pilha estiver vazia
 * @param Stack* ponteiro para a pilha
 */
bool Stack_is_empty(Stack *idk) { return (idk->qtd == 0); }

/**
 * Retorna a quantidade de elementos da pilha
 * @return int com o número de elementos atuais na pilha
 * @param Stack* ponteiro para a pilha
 */
int Stack_size(Stack *idk) { return idk->qtd; }