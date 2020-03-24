#include <iostream>
#include <cstdlib>

using namespace std;

void alteraNota(float &); //Passagem por referência

int main()
{
	struct
	{
		float prova, trab;
	} notas;
	
	cout<<"\nDigite a Nota da prova: "; cin>>notas.prova;
	alteraNota(notas.prova);
	cout<<"\nNota alterada: "<<notas.prova<<"\tGostou?";
	cout<<"\n\n";
	system("pause");
}

void alteraNota(float &p){
	p = 10;
}
