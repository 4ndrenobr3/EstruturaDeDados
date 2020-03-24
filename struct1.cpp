#include <iostream>
#include <cstdlib>

using namespace std;
float mediaPond(float, float);

int main()
{
	struct
	{
		float prova, trab;
	} notas;
	
	cout<<"\nDigite nota da prova: "; cin>>notas.prova;
	cout<<"\nDigite nota do trabalho: "; cin>>notas.trab;
	cout<<"\nMedia: "<<mediaPond(notas.prova, notas.trab);
	cout<<"\n\n";
	system("pause");
	
}

float mediaPond(float p, float t){
	return (p*6 + t*4) / 10;
}
