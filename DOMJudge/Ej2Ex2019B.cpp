#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

/*
Ejercicio 2 Examen Feb 2019 grupo B
=================================

*/


void recursiva(const vector<int> &v, bool &ok, int &pos, int &suma) {
	int n = v.size() - pos, divisible = suma % n;
		 
	if (divisible != 0) //caso base
		ok = false;
	else {
		suma -= v[pos];
		pos++;
		if(v.size() > pos) //si no se ha llegado al final
			recursiva(v, ok, pos, suma);
	}
}

bool resuelveCaso() {
	vector<int> v;
	int n, aux, pos = 0, suma = 0;
	bool ok = true;
	

	cin >> n;
	if (n == 0)
		return false;

	while (n > 0) {
		aux = n % 10;
		v.push_back(aux);
		suma += aux;
		n = n / 10;
	}

	recursiva(v, ok, pos, suma);
	
	if (ok)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;

	return true;
}

int main() {
	// Para la entrada por fichero.
	
#ifndef DOMJUDGE
	std::ifstream in("ej2_ex19b.in");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif


	while (resuelveCaso()) {}

	
#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}