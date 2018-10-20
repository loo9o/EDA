#include <iostream>
#include <string>
using namespace std;

bool numchar(int min, int max, string cadena) {
	bool ok = true;
	char anterior, siguiente, aux;

	anterior = cadena.at(min);
	while(min <= max && ok){
		siguiente = cadena.at(min++);
		if (anterior != siguiente)
			ok = false;
		else
			anterior = siguiente;
	}
	return ok;
}

int main() {
	int n,i,j;
	string cadena;
	char aux;
	bool ok;

	getline(cin,cadena);
	cin >> n;
	while(n!=0)
	{
		for (int k = 0; k < n; k++) {
			cin >> i >> j;
			if (i < j) {
				ok = numchar(i,j,cadena);
			}
			else {
				ok = numchar(j,i,cadena);
			}
			if (ok)
				cout << "SI" << endl;
			else
				cout << "NO" << endl;
		}
		cin.get(aux);
		getline(cin, cadena);
		cin >> n;
		cout << endl;
	}

	return 0;
}
