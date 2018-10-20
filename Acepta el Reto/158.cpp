#include <iostream>
using namespace std;


int main() {
	int n, num_muros, muro, muro_ant, up, down;

	cin >> n;
	for (int i = 0;i < n; i++) {
		up = 0;
		down = 0;
		cin >> num_muros;
		cin >> muro_ant;
		for (int j = 1; j < num_muros; j++) {
			cin >> muro;
			if (muro_ant > muro)
				down++;
			else if (muro_ant < muro)
				up++;
			muro_ant = muro;
		}
		cout << up << " " << down << endl;
	}

	return 0;	
}
