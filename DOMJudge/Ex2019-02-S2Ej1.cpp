#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

/*
Ejercicio 1 Examen Feb 2019 grupo B
=================================
coste O(n)
*/


int procesar(const vector<int> &v, int k) {
	int resultado = 101, indice_anterior=-1, aux, contI = 0;

	for (int i = 0; i < v.size() - (k - 1); i++) {
		aux = v[i + (k - 1)] - v[i] + 1;
		if (aux < resultado)
			resultado = aux;				
	}

	return resultado;
}

bool resuelveCaso() {
	vector<int> v;
	int n, num, k, resultado = -1;

	cin >> n;
	if (n == -1)
		return false;

	//v.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 1) 
			v.push_back(i);	
	}

	cin >> k;
	
	if (k > v.size() || v.size() == 0) {
		resultado = n + 1;
	}
	else if (k == 1 && v.size() >= 1)
		resultado = 1;
	else if (k <= v.size() && k > 1)
		resultado = procesar(v, k);
	
	std::cout << resultado << endl;

	return true;
}

int main() {
	// Para la entrada por fichero.
	/*
	#ifndef DOMJUDGE
	std::ifstream in("ej1_ex19b.in");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
	#endif
	*/

	while(resuelveCaso()){}

	/*
	#ifndef DOMJUDGE // para dejar todo como estaba al principio
		std::cin.rdbuf(cinbuf);
		system("PAUSE");
	#endif
	*/
	
	return 0;
}
