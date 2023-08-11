#ifndef STACK_H
#define STACK_H
#include "meutipo.h"
typedef struct stack Stack;
#include <stdbool.h>
/**
 * Cria instâncias de pilhas vazias.
 * @return Stack*
 */
Stack *Stack_create();
/**
 * Tenta inserir um inteiro na pilha.
 * @return bool informando o sucesso da operação
 * @param Stack* ponteiro para a pilha
 * @param MeuTipo o valor inteiro que se deseja armazenar.
 */
bool Stack_push(Stack *, MeuTipo);
/**
 * Tenta remover o elemento do topo de uma pilha
 * @return bool informando o sucesso da operação
 * @param Stack* ponteiro para a pilha
 * @param MeuTipo* o ponteiro do inteiro para qual será armazenado o valor
 * removido da pilha (caso de sucesso)
 */
bool Stack_pop(Stack *, MeuTipo *);
/**
 * Tenta fazer a leitura do elemento do topo de uma pilha (não remove)
 * @return bool informando o sucesso da operação
 * @param Stack* ponteiro para a pilha
 * @param int* o ponteiro do inteiro para qual será armazenado o valor lido do
 * topo da pilha (caso de sucesso)
 */
bool Stack_head(Stack *, MeuTipo *);
/**
 * Retorna se a pilha está cheia.
 * @return bool true se a pilha estiver cheia
 * @param Stack* ponteiro para a pilha
 */
bool Stack_is_full(Stack *);
/**
 * Retorna se a pilha está vazia.
 * @return bool true se a pilha estiver vazia
 * @param Stack* ponteiro para a pilha
 */
bool Stack_is_empty(Stack *);
/**
 * Retorna a quantidade de elementos da pilha
 * @return int com o número de elementos atuais na pilha
 * @param Stack* ponteiro para a pilha
 */
int Stack_size(Stack *);

#endif