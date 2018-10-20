#include <iostream>
using namespace std;

const int N = 1000;
typedef char tArray[N];

int main() {
	tArray sillas;
	int n;
	char aux;
	bool right = false, left = false;

	cin >> n;
	cin.get(aux);
	while (n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> sillas[i];
			if (sillas[i] == 'D')
				right = true;
			else if (sillas[i] == 'I')
				left = true;
		}
		
		if (right && left)
			cout << "ALGUNO NO COME" << endl;
		else
			cout << "TODOS COMEN" << endl; 

		right = false, left = false;
		cin >> n;
	}
	return 0;
}
