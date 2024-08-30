typedef struct no{
int dado;
struct no *prox;
}tno;
typedef struct pilha{
tno *topo;
}tpilha;

void iniciapilha(tpilha *p);
int pilhavazia (tpilha p);
int empilhar (tpilha *p,int dado);
int desempilhar (tpilha *p);
int topo (tpilha p);
void elementos(tpilha p);