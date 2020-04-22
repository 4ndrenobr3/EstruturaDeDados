#include <iostream>
#include <cstdlib>
using namespace std;

struct nodo
{
 int info;
 struct nodo *prox;
};

nodo *insereFrente(nodo *ptr, int valor);
nodo *insereFim(nodo *ptr, int valor);
void exibe(nodo *ptr);
nodo *removeFrente(nodo *ptr);
nodo *removeFim(nodo *ptr);
void substituiNo(nodo *ptr, int posicao, int novoValor);
int buscaSequencial(nodo *ptr, int valor);
void libera(nodo *ptr);
int contaNos(nodo *ptr);

int main()
{
 int c,op, valor,pos, nvalor, resp;
 nodo *lista=NULL;
do
 {
 system("cls");
 system("color f1");
 cout<<"\n\n< < < Alocacao Dinamica < < <";
 cout<<"\n< <";
 cout<<"\n< 1- Insere Frente - Lista <";
 cout<<"\n< 2- Insere Fim - Lista <";
 cout<<"\n< 3- Remove Frente - Lista <";
 cout<<"\n< 4- Remove Fim - Lista <";
 cout<<"\n< 5- Exibe Lista <";
 cout<<"\n< 6- Substitui No na Lista <";
 cout<<"\n< 7- Conta Nos da Lista <";
 cout<<"\n< 8- Busca na Lista <";
 cout<<"\n< 9- Libera Lista <";
 cout<<"\n< 10- Sai <";
 cout<<"\n< Opcao: <";
 cout<<"\n< <";
 cout<<"\n< < < < < < < < < < < < < < < <\n";
 cin>>op;
 system("cls");
 system("color 1f");
 
 switch(op)
 {
 case 1:cout<<"\nInserir na frente: ";
 cin>>valor;
 lista = insereFrente(lista, valor);
 break;

 case 2:cout<<"\nInserir no final: ";
 cin>>valor;
 lista = insereFim(lista, valor);
 break;

 case 3:if(!lista)
 cout << "\n\nNada a remover. Fila vazia\n";
 else
 {
 lista=removeFrente(lista);
 cout<<"\n\nPrimeiro elemento da Fila removido\n";
 }
 break;

 case 4:if(!lista)
 cout << "\n\nNada a remover. Fila vazia\n";
 else
 {
 lista=removeFim(lista);
 cout<<"\n\nUltimo elemento da Fila removido\n";
 }
 break;

 case 5:if(!lista)
 cout << "\n\nFILA vazia\n";
 else
 exibe(lista);
 break;
 case 6:if(!lista)
 cout<<"\nFila vazia\n";
 else
 {
 cout<<"\nQual a posicao do No? ";
 cin>>pos;
 while(pos>contaNos(lista))
 {
 cout<<"\nPosicao Invalida\n";
 cout<<"\nQual a posicao do No? ";
 cin>>pos;
 }
 cout<<"\nQual o novo valor? ";
 cin>>nvalor;
 substituiNo(lista, pos, nvalor);
 cout<<"\nValor substituido\n";
 }
 break;

 case 7:if(!lista)
 cout << "\n\nFILA vazia\n";
 else
 cout<<"\nTotaL de nos: "<<contaNos(lista);
 break;

 case 8:if(!lista)
 cout << "\n\nFILA vazia\n";
 else
 {
 cout<<"\nQual o valor de procura? ";
 cin>>valor;
 resp=buscaSequencial(lista, valor);
 if(resp==1)
 cout<<"\nEncontrei\n";
 else
 cout<<"\nNao Encontrei\n";

 }
 break;
 case 9:if(lista)
 cout<<"\nTem elementos na Lista\n";
 else
 {
 libera(lista);
 cout<<"\nLiberando Memoria";
 }
 break;

 case 10: cout<<"Fechando Lista Encadeada\n";
 break;

 default:cout<<"\nOpcao Invalida\n";
 }
 cout<<"\n\n";
 system("pause");
} while(op != 10);
return 0;
} 
nodo* insereFrente(nodo *ptr, int valor)
{
 nodo *temp = new nodo;
 if(!temp)
 {
 cout<<"\nNao foi possivel fazer Alocacao\n";
 system("pause");
 exit (1);
 }
 temp->info = valor;
 temp->prox = ptr;
 return temp;
}
nodo* insereFim(nodo *ptr, int valor)
{
 nodo *novo, *aux;
 novo = new nodo;
 if(!novo)
 {
 cout<<"\nNao foi possivel fazer Alocacao\n";
 system("pause");
 exit (1);
 }
 novo->info = valor;
 novo->prox = NULL;
 if (!ptr)
 ptr = novo;
 else
 {
 aux = ptr;
 while (aux->prox)
 aux = aux->prox;
 aux->prox = novo;
 }
 return ptr;
}
void exibe(nodo *ptr)
{
 cout<<"\nListando\n";
 while(ptr)
 {
 cout<<"\n"<<ptr->info;
 ptr=ptr->prox;
 }
} 
nodo *removeFrente(nodo *ptr)
{
 nodo *aux;
 aux = ptr;
 ptr = ptr->prox;
 delete aux;
 return ptr;
}
nodo* removeFim(nodo *ptr)
{
 nodo * aux, *ultimo;
 if (!ptr->prox)
 {
 delete ptr;
 ptr = NULL;
 return ptr;
 }
 else
 {
 aux = ptr;
 while (aux->prox->prox ) //aux caminha até apontar para o penultimo nó
 aux = aux->prox;
 ultimo = aux->prox;
 delete ultimo;
 aux->prox = NULL;
 return ptr;
 }
}
void substituiNo(nodo *ptr, int posicao, int novoValor)
{
 int conta = 1;
 while (conta != posicao )
 {
ptr = ptr ->prox;
conta++;
 }
 ptr->info = novoValor;

}
int contaNos(nodo *ptr)
{
 int conta = 0;
while (ptr)
{
conta++;
ptr = ptr->prox;
}
return conta;
}
int buscaSequencial(nodo *ptr, int valor)
{
 while (ptr)
 {
 if (ptr->info == valor)
return 1;
 ptr = ptr->prox;
}
 return 0;
}
void libera(nodo *ptr)
{
 delete ptr; ptr=0;
} 
