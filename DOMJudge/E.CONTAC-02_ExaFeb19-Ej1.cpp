#include <iostream>
//#include <vector>
#include <fstream>
using namespace std;


//Ejercicio 1 Examen Feb 2019 grupo C

int consecutivo(int casos) {
	int n, actual, anterior, contador = 1, aux = 1;;

	cin >> n;

	if (n > 0)
		cin >> actual;
	else
		contador = 0;
	
	
	for (int i = 1; i < n; i++) {
		anterior = actual;
		cin >> actual;
		
		if (abs(anterior - actual) == 1)
			aux++;
		else
			aux = 1;

		if (aux > contador)
			contador = aux;
	}
	

	return contador;
}


bool resuelveCaso() {
	int casos;

	cin >> casos;

	if (!cin)
		return false;

	for (int i = 0; i < casos; i++) {
		cout << consecutivo(casos) << endl;
	}
	


	return true;
}


int main() {
	// ajuste para que cin extraiga directamente de un fichero
/*
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
*/
	while (resuelveCaso());

	// restablecimiento de cin
/*
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("pause");
#endif
*/
	return 0;
}
