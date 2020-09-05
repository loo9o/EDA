// NOMBRE Y APELLIDOS 

// Comentario general sobre la solucion,
// explicando como se resuelve el problema


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//ESPECIFICA la funcion que resuelve el problema
//Precondicion:

int resolver(vector<int> const& v) {
	int r = 1, aux = 1;
	
	if (v.size() > 1) {
		for (int i = 0; i < v.size() - 1; i++) {
			if (v[i] >= v[i + 1])
				aux++;
			else
				aux = 1;

			if (aux > r)
				r = aux;
		}
	}
	else
		r = v.size();

	return r;

}

//Postcondicion: llama r al resultado

//Analisis justificado del coste


// Esta funcion resuelve un caso de prueba
void resuelveCaso() {
	int numElems = 0;
	cin >> numElems;
	vector<int> v(numElems);
	for (int& i : v) cin >> i;
	int sol = resolver(v);
	cout << sol << "\n";
}

int main() {
	// Para la entrada por fichero
#ifndef DOMJUDGE
	ifstream in("sample3.in");
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
