#include <stdio.h>
#include "fila.h"

int main () {
  FILA alunos = novaFila();
  inserir_Final(alunos, 9);
  inserir_Final(alunos, 8);
  inserir_Final(alunos, 3);
  inserir_Final(alunos, 10);
  inserir_inicio(alunos, 1);

  imprimirFila(alunos);

  while(!filaVazia(alunos))
    printf ("removido: %d \n", remover_Inicio(alunos));


  inserir_Final(alunos, 10);
  inserir_Final(alunos, 32);
  
  imprimirFila(alunos);

  destroiFila(alunos);
  return 0;
}
