#include <iostream>
#include <string>
using namespace std;

const int N = 1000000;
typedef char tArray[N];

bool numchar(tArray aux, int min, int max, string cadena) {
	bool ok = false;
	if (aux[max] == aux[min])
		ok = true;
	
	return ok;
}

void iguales(tArray &aux_i, string cadena){
	aux_i[0] = 0;
	for (int i = 1; i < (int)cadena.size(); ++i) {
		if (cadena[i] == cadena[i - 1])
			aux_i[i] = aux_i[i - 1];
		else
			aux_i[i] = i;
	}
}

bool solucion() {
	int n, i, j;
	string cadena;
	char aux;
	bool ok;
	tArray aux_i;

	getline(cin, cadena);
	iguales(aux_i, cadena);

	cin >> n;
	if (n == 0)
		return false;

	for (int k = 0; k < n; k++) {
		cin >> i >> j;
		if (i < j) {
			ok = numchar(aux_i, i, j, cadena);
		}
		else {
			ok = numchar(aux_i, j, i, cadena);
		}
		if (ok)
			cout << "SI" << endl;
		else
			cout << "NO" << endl;
	}

	cin.get(aux);
	cout << endl;
	
	return true;
}


int main() {
	while (solucion());
	return 0;
}
