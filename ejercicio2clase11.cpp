#include <iostream>

using namespace std;

int main() {
	
    int numeros[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            cout << numeros[i] << endl;
        }
    }

    return 0;
}
