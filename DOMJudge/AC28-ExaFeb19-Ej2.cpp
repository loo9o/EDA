#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

/*
T(n) = {10	n = 1; T(n/2) + c)	n > 1}

a = 1
b = 2
k = 0

O(logn)
*/


int ceros(const vector<int> &v, int ini, int fin) {
	int pos = 0, m = (fin - ini) / 2 + ini, n = (fin - ini) + 1;
	
	//coste n==1; 1+1+1+1+1+1
	if(n == 1){
		if (v[ini] == 0 && v[ini - 1] == 1)
			pos = ini;
		else if (v[ini] == 1 && v[ini + 1] == 0)
			pos = ini + 1;
	}
	else {
		if(v[m] == 0)
			pos = ceros(v, ini, m);
		else 
			pos = ceros(v, m + 1, fin);	
	}

	return pos;
}

void resuelveCaso() {
	vector<int> v;
	int n, num_ceros;

	cin >> n;
	v.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	

	if(v.size() == 0 || v[n - 1] == 1)
		cout << 0 << endl;
	else if (v[0] == 0)
		cout << n << endl;
	else {
		num_ceros = ceros(v, 0, n - 1);

		if (num_ceros == 0)
			cout << 0 << endl;
		else
			cout << n - num_ceros << endl;
	}
}

int main() {
	// Para la entrada por fichero.
	/*
#ifndef DOMJUDGE
	std::ifstream in("ac29.in");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
*/

	int numCasos;
	std::cin >> numCasos;
	// Resolvemos
	for ( int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}

/*
#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif
*/
	return 0;
}
