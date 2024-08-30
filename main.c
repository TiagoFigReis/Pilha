#include <stdio.h>
#include "pilha.h"
int main(void) {
  tpilha p;
  tno *n;
  int num; 
  iniciapilha(&p);
  for (int i=0;i<5;i++){ 
  printf("Digite o número:");
  scanf("%d",&num);
    if(!empilhar(&p,num))
      return 0;
  }
  elementos(p);
  num=desempilhar(&p);
  if(!num)
    return 0;
  else 
    printf("%d\n",num);
  num=topo(p);
  if(!num)
    return 0;
  else
    printf("%d\n",num);
  elementos(p);
  return 0;
}