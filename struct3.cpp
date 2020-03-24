#include <iostream>
#include <cstdlib>

using namespace std;

struct notas
{
	float prova, trab;
};

float mediaPond(notas n); // Struct como parâmetro

int main()
{
	notas aluno;
	
	cout<<"\nDigite nota da prova: "; cin>>aluno.prova;
	cout<<"\nDigite nota do trabalho: ";cin>>aluno.trab;
	cout<<"\nMedia Ponderada: "<<mediaPond(aluno);
	cout<<"\n\n";
	
	system("pause");
}

float mediaPond(notas n){
	return (n.prova * 6 + n.trab * 4) / 10;
}
