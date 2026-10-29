#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Personaje {
 string nombre;
 int vida;
 int ataque;
};
void registrarPersonaje() { 
 Personaje p;
 cout << "\n--- REGISTRO DE NUEVO PERSONAJE ---\n";
 cout << "Ingrese el nombre del personaje: ";
 cin.ignore();
 getline(cin, p.nombre);

 cout << "Ingrese los puntos de vida: ";
 cin >> p.vida;

 cout << "Ingrese los puntos de ataque: ";
 cin >> p.ataque;
 ofstream archivo("personajes.txt", ios::app);
 if (!archivo.is_open()) { 
 cout << "Error: No se pudo abrir el archivo 'personajes.txt' para escritura.\n";
 return;
 }
 archivo << p.nombre << " | Vida: " << p.vida << " | Ataque: " << p.ataque << "\n";
 archivo.close();
 cout << "¡Personaje guardado exitosamente en 'personajes.txt'!\n";
}
void mostrarPersonajes() {
 ifstream archivo("personajes.txt");
 if (!archivo.is_open()) {
 cout << "\nError: No se pudo abrir 'personajes.txt' (es posible que aun no existan registros).\n";
 return;
 }
cout << "\n=== LISTA DE PERSONAJES ALMACENADOS ===\n";
 string linea;
 bool hayRegistros = false;
 while (getline(archivo, linea)) {
 if (!linea.empty()) {
 cout << "- " << linea << "\n";
 hayRegistros = true;
 }
 }
 if (!hayRegistros) {
 cout << "El archivo existe pero no contiene personajes registrados.\n";
 }
 archivo.close();
}
int main() {
 int opcion;
 do {
 cout << "--SISTEMA DE GESTION DE PERSONAJES-- \n";
 cout << "1--- Registrar nuevo personaje\n";
 cout << "2--- Ver todos los personajes guardados\n";
 cout << "3--- Salir\n";
 cout << "Seleccione una opcion: ";
 cin >> opcion;
 switch (opcion) {
 case 1:
	 registrarPersonaje();
 break;
 case 2:
 	mostrarPersonajes();
 break;
 case 3:
 	cout << "\nSaliendo del programa...\n";
 break;
 default:
 	cout << "\nOpción Invalids. Seleccione una opcion valida...\n";
 break;
 } 
 }while (opcion != 3);
 return 0;
}
