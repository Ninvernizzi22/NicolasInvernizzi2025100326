#include <cstdlib>
#include <iostream>
using namespace std;

int main (){
	char car;
	bool digLeid = false;
	while (!digLeid){
		cout<<"introduzca un caracter dighito para salir del bucle ";
		cin >> car ;
		digLeid = (('O'<=car) && (car <= '9'));
		cout << car << " Es el digito leido " << endl;
		system("PAUSE");
	}
	return 0;
}
