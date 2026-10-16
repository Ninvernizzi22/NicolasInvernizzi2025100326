#include <iostream>

using namespace std;

int main() {
    char letra;
    
    cout << "Ingresa caracteres. El ciclo se detendra cuando ingreses una minuscula." << endl;
    for (cin >> letra; letra < 'a' || letra > 'z'; cin >> letra) {
        cout << "Ingresaste '" << letra << "'. Sigue intentando: ";
    }
    
    cout << "Minuscula detectada: " << letra << endl;
    
    return 0;
}
