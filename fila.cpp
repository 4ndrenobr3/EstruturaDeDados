#include <iostream>
#include <cstdlib>
#define TAM 5
using namespace std;

struct queue
{
	float f[TAM];
	int inicio, fim;
};

void enfileira(queue &fil);
void desenfileira(queue &fil);
void elemPrimeiro(queue &fil);
void situacaoFila(queue &fil);

int main()
{
	char resp[10]; int op;
	queue fila;
	
	fila.inicio = 0;
	fila.fim = -1;
	
	do
	{
		system("cls");
		system("color 2f");
		cout<<"\nFila (FIFO - First in - First out) \n\n";
		cout<<"\n1- Inserir um valor na Fila";
		cout<<"\n2- Remover um valor da Fila";
		cout<<"\n3- Mostrar o elemento do inicio da Fila";
		cout<<"\n4- Mostrar situacao da Fila";
		cout<<"\n5- Sai";
		cout<<"\nOpcao: ";
		cin>>resp;op=atoi(resp);
		system("cls");
		
		switch(op)
		{
			case 1: enfileira(fila);
					break;
					
			case 2: desenfileira(fila);
					break;
					
			case 3: elemPrimeiro(fila);
					break;
					
			case 4: situacaoFila(fila);
					break;
					
			case 5: cout<<"\nPrograma basico da Fila\n";
					break;
					
			default: cout<<"\nOpcao Invalida\n";
		
		}
		cout<<"\n\n"; system("pause");
	} while(op!=5);
}

void enfileira(queue &fil)
{
	float valor;
	if (fil.fim == -1)
		cout<<"\nATENCAO. Fila cheia\n";
	else
	{
		cout<<"Digite o valor a ser enfileirado: ";
		cin>>valor;
		fil.fim++;
		fil.f[fil.fim] = valor;
	}
}

void desenfileira(queue &fil)
{
	if (fil.inicio > fil.fim)
		cout<<"\nATENCAO. Fila vazia\n";
	else
	{
		cout<<"\nValor Removido: "<<fil.f[fil.inicio];
		fil.inicio++;
	}
}

void elemPrimeiro(queue &fil)
{
	if (fil.inicio > fil.fim)
		cout<<"\nATENCAO. Fila vazia\n";
	else
	{
		cout<<"Elemento do inicio da Fila: "<<fil.f[fil.inicio];
	}
}

void situacaoFila(queue &fil)
{
	if (fil.inicio > fil.fim)
		cout<<"\nATENCAO. Fila vazia\n";
	else
	{
		cout<<"\nTotal de elementos na fila: "<<fil.fim - fil.inicio + 1<<"\n";
		cout<<"\nEspaco disponivel na fila: "<<TAM - (fil.fim+ 1)<<"\n";
		cout<<"\nPosicao do primeiro elemento da fila: "<<fil.inicio<<"\n";
		cout<<"\nPosicao do ultimo elemento da fila: "<<fil.fim<<"\n";
		cout<<"\nPARA FINS DIDATICOS, EXIBINDO A FILA\n";
		cout<<"\nValor \tPosicao do vetor\n";
		
		for(int x = fil.inicio; x <= fil.fim; x++)
			cout<<"\n"<<fil.f[x]<<"\t"<<x;
	}
}
