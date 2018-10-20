#include <iostream>
using namespace std;

const int N = 100000;
typedef int tCordillera[N];

int abadias(tCordillera cordillera, int n) {
	int abadias = 1;

	int top = cordillera[n - 1];
	for (int i = n - 1; i > 0; i--) {
		if (cordillera[i - 1] > top) {
			top = cordillera[i - 1];
			abadias++;
		}
	}
	return abadias;
}

int main() {
	int n;
	tCordillera cordillera;

	cin >> n;

	while (n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> cordillera[i];
		}
		cout << abadias(cordillera, n) << endl;
		cin >> n;
	}

	return 0;
}