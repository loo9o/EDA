#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, num_nombres, j;
	string nieto, nombre;
	bool abuela = true;

	cin >> n;
	for (int i = 0; i < n; i++) {
		j = 0;
		cin >> nieto >> num_nombres;
		while(j < num_nombres && abuela) {
			cin >> nombre;
	
			if (j != num_nombres - 1 && nieto == nombre) {
				abuela = false;
				getline(cin, nombre);
			}
					
			j++;
		}
		if (num_nombres > 1 && nieto == nombre && abuela)
			cout << "VERDADERA" << endl;
		else
			cout << "FALSA" << endl;
		abuela = true;
		
	}
	return 0;
}