#include <iostream>
using namespace std;

int descobreIdade(int, int);

int main()
{
	int anoA, anoN;
	cout<<"\nDigite o ano Atual: ";
	cin>>anoA;
	cout<<"Digite seu ano de nascimento: ";
	cin>>anoN;
	cout<<"Ate dezembro de "<<anoA<<" Voce tera "<<descobreIdade(anoA, anoN)<<" anos.";
	cout<<"\n\n";
	system("pause");
	return 0;
}

int descobreIdade(int anoAtual, int anoNasc)
{
	return anoAtual - anoNasc;
}
