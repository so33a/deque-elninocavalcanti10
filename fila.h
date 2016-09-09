#ifndef FILA_H
#define FILA_H

typedef struct node * link;
struct node {
  int item;
  link next;
};

typedef struct {
  link maisAntigo;
  link maisNovo;
} * FILA;

link novoNo(int item, link next);
FILA novaFila();
void inserir_Final(FILA f, int e);
void inserir_inicio(FILA f, int e);
int remover_Inicio(FILA f);
int remover_final(FILA f);
void imprimirFila(FILA f);
void destroiFila(FILA f);
int filaVazia(FILA f); 

#endif 
