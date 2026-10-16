#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main (){
	const int centinela = -1;
	float nota, contador=0, suma=0;
	cout << "Introduzca siguiente nota -1 centinela: " << endl;
	cin >> nota;
	while (nota!=centinela){
		contador++;
		suma +=nota;
		cout << "Introduzca siguiente nota -1 centinela: " << endl;
		cin >> nota;
	}
	if (contador > 0 ){
		cout << "media "<< suma / contador << endl;}
	else{
		cout << "no hay notas... " << endl;
	}
	system ("PAUSE");
	return 0;
}
