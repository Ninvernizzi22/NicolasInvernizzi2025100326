#include <iostream>
#include <string>
using namespace std;
int num; //Se declara la variable dia como entero
//El contador comienza en lunes equivalente 1, martes equivalente a 2...

int main(){
	
	cout<<"Ingrese un numero entero para el dia de la semana\n"; //Solicitud de ingreso de numero
	cin>>num;
	if (num > 0 && num <8){ //Se evlua que el numero ingresado sea mayor a cero y menor a 8
		switch (num){ 
		case 1: 
			cout<<"El dia equivalente a "<<num<< " es lunes";
		break;
		case 2:
			cout<<"El dia equivalente a "<<num<< " es martes";
		break;
		case 3:
			cout<<"El dia equivalente a "<<num<< " es miercoles";
		break;
		case 4:
			cout<<"El dia equivalente a "<<num<< " es jueves";
		break;
		case 5:
			cout<<"El dia equivalente a "<<num<< " es viernes";
		break;
		case 6:
			cout<<"El dia equivalente a "<<num<< " es sabado";
		break;
		case 7:
			cout<<"El dia equivalente a "<<num<< " es domingo";
		break; 
		}
	}else if (num <= 0 || num > 8){
		cout<<"Numero invalido...";
	}
	return 0;
} 

