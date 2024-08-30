#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void iniciapilha(tpilha *p){
  p->topo=NULL;
}
int pilhavazia(tpilha p){
  if(!p.topo)
    return 1;
  return 0;
}
int empilhar (tpilha *p,int dado){
  tno *no;
  no=(tno*)malloc(sizeof(tno));
  if(!no)
    return 0;
  no->dado=dado;
  no->prox=p->topo;
  p->topo=no;
  return 1;
}
int desempilhar(tpilha *p){
  tno *no;
  int n;
  if(pilhavazia(*p))
    return 0;
  no=p->topo;
  n=no->dado;
  p->topo=no->prox;
  free(no);
  return n;
}
int topo(tpilha p){
  if(pilhavazia(p))
    return 0;
  return p.topo->dado;
}
void elementos(tpilha p){
  if(pilhavazia(p))
    return;
  while(p.topo){ 
    printf("%d\n",p.topo->dado);
    p.topo=p.topo->prox;
  }
}