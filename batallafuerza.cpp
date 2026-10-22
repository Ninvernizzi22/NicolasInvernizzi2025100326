#include <iostream>
#include <string>
using namespace std;

struct personaje{
	string nombre="Desconocido";
	int fuerza=0;
};
int main (){
	
	personaje n1;
	n1.nombre = "Kratos";
	n1.fuerza = 100;
	
	personaje n2;
	n2.nombre = "Baldur";
	n2.fuerza = 80;
	
	cout<<"El personaje "<<n1.nombre<<" tiene "<< n1.fuerza<<" putnos de fuerza\n";
	cout<<"El personaje "<<n2.nombre<<" tiene "<< n2.fuerza<<" putnos de fuerza\n";
	
	if (n1.fuerza > n2.fuerza){
		cout<<"Kratos tiene mas fuerza";
	}else if (n1.fuerza < n2.fuerza){
		cout<<"Baldur tiene mas fuerza";
	}else{
		cout<<"Ambos tienen la misma fuerza,";
	}
	
	return 0; 
}
