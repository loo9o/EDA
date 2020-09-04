// NOMBRE Y APELLIDOS 

// Comentario general sobre la solucion,
// explicando como se resuelve el problema


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Implementa la funcion recursiva
//Analisis del coste de esta funcion


//Esta funcion determina si v es equidiagonal
//y devuelve el producto de la diagonal principal
bool resolver(vector<vector<int>> const& v, int& d, int ini, int fin, int ini_b, int fin_b, bool ok)
{
	int m = (fin - ini) / 2 + ini, n = (fin - ini) + 1, m_b = (fin_b - ini_b) / 2 + ini_b, n_b = (fin_b - ini_b) + 1;
	int a, b, c, e;

	if (n == 1)
		d = v[ini][ini];
	else if (n == 2) {
		if (v[ini][ini_b] * v[fin][fin_b] == v[ini][fin_b] * v[fin][ini_b])
			d = v[ini][ini_b] * v[fin][fin_b];
		else
			ok = false;
	}
	else {
		ok = resolver(v, d, ini, m, ini, m, ok);//1
		a = d;
		ok = resolver(v, d, ini, m, m + 1, fin, ok);//2
		b = d;
		ok = resolver(v, d, m + 1, fin, ini, m, ok);//3
		c = d;
		ok = resolver(v, d, m + 1, fin, m + 1, fin, ok);//4
		e = d;

		if (a * e == b * c && ok)
			d = a * e;	
	}

	
	//Invoca aqui a tu funcion recursiva
	return ok;
}


void resuelveCaso() {
	int dim = 0;
	cin >> dim;
	vector<vector<int>> v(dim, vector<int>(dim));
	for (int i = 0; i < dim; i++)
		for (int j = 0; j < dim; j++)
		{
			cin >> v[i][j];
		}
	int d;
	if (resolver(v, d, 0, dim-1, 0, dim-1, true))
		cout << "SI " << d << "\n";
	else
		cout << "NO\n";
}

int main() {
	// Para la entrada por fichero
#ifndef DOMJUDGE
	ifstream in("sample2.in");
	auto cinbuf = cin.rdbuf(in.rdbuf());
#endif

	int numCasos;
	cin >> numCasos;
	for (int i = 0; i < numCasos; ++i)
		resuelveCaso();

#ifndef DOMJUDGE 
	cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}

