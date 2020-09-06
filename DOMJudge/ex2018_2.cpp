// NOMBRE Y APELLIDOS 

// Comentario general sobre la solucion,
// explicando como se resuelve el problema


#include <iostream>
#include <fstream>
#include <vector>
#include <cmath> 


using namespace std;

//Implementa la funcion recursiva
//Analisis del coste de esta funcion


//Esta funcion determina si v es equidiagonal
//y devuelve el producto de la diagonal principal
int resolver(const vector<int> &v, int ini, int fin, int num)
{
	int pos = 0, m = (fin - ini) / 2 + ini, n = (fin - ini) + 1;
	
	if (v.size() == 1)
		pos = v[ini];
	else if (v.size() == 2) {
		if (abs(v[0] - num) <= abs(v[1] - num))
			pos = v[0];
		else
			pos = v[1];
	}
	else if (n == 1) {
		if(abs(v[ini - 1] - num) == abs(v[ini] - num))
			pos = v[ini - 1];
		else
			pos = v[ini];
	}
	else {
		int a = abs(v[m - 1] - num), b = abs(v[m + 1] - num);
		if (v[m] != num && a < b)
			pos = resolver(v, ini, m - 1, num);//izq
		else if (v[m] != num && a > b)
			pos = resolver(v, m + 1, fin, num);//der
		else if (v[m] != num && a == b)
			pos = v[m - 1];
		else if (v[m] == num)
			pos = num;
	}
	
	//Invoca aqui a tu funcion recursiva
	return pos;
}


void resuelveCaso() {
	int dim = 0, num;
	cin >> num >> dim;
	vector<int> v(dim);
	for (int i = 0; i < dim; i++)
			cin >> v[i];
	
	cout << resolver(v, 0, dim - 1, num) << "\n";

}

int main() {
	// Para la entrada por fichero
#ifndef DOMJUDGE
	ifstream in("sample4.in");
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

