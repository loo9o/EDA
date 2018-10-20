#include <iostream>
using namespace std;


int main() {
	int n;
	long long altura, aux;
	bool ok = true, up = true, down = true;

	cin >> n;
	while (n != 0) {
		cin >> aux;
		for (int i = 0; i < n - 1; i++) {
			cin >> altura;
			if ((aux < altura) && down) {
				down = false;
			}
			else if ((aux > altura) && up) {
				up = false;
			}
			else if (aux == altura)
				ok = false;
			
			if (up == down)
				ok = false;
	
			aux = altura;
		}
		if (ok)
			cout << "DALTON" << endl;
		else
			cout << "DESCONOCIDOS" << endl;

		ok = true, up = true, down = true;
		cin >> n;
	}
	return 0;
}