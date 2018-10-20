#include <iostream>
using namespace std;


int main() {
	int ini, salida, destino, suma;

	cin >> ini;
	while (ini >= 0) {
		cin >> salida >> destino;
		suma = abs(ini - salida);
		while (salida != -1) {
			suma = suma + abs(salida - destino);
			cin >> salida;
			if (salida != -1) {
				suma = suma + abs(destino - salida);
				cin >> destino;
			}
		}
		cout << suma << endl;
		cin >> ini;
	}
	return 0;
}
