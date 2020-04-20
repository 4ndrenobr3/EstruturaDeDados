#include <iostream>
#include <cstdlib>
using namespace std;

struct nodo
{
	int num;
	struct nodo *prox;
};

nodo *insereFrente(nodo *ptr, int valor);

int main()
{
	int c;
	nodo *lista=NULL;
	
	//Primeito no
	lista = insereFrente(lista, 23);
	
	//Segundo no
	lista = insereFrente(lista, 13);
	
	//Terceiro no
	lista = insereFrente(lista, 15);
	
	//Quarto no
	lista = insereFrente(lista, 18);
	
	//Listando
	c=1;
	cout<<"\n\nUsando uma estrutura de Repeticao\n";
	while(lista)
	{
		cout<<"\nValor do "<<c<<" o no: "<<lista->num;
		lista=lista->prox;
		c++;
	}
	
	//Liberando
	delete lista; lista=0;
	cout<<"\n\n";
	system("pause");
}

nodo* insereFrente(nodo *ptr, int valor)
{
	nodo *temp = new nodo;
	temp->num = valor;
	temp->prox = ptr;
	return temp;
}
