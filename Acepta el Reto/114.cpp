#include <iostream>
using namespace std;

int main() {
  int numero, n;
  cin >> n;

  for (int j = 0; j < n; j++) {
    cin >> numero;

    if (numero >= 0){
      switch(numero){
      case 0: cout << 1 << endl;
	break;
      case 1: cout << 1 << endl;
	break;
      case 2: cout << 2 << endl;
	break;
      case 3: cout << 6 << endl;
	break;
      case 4: cout << 4 << endl;
	break
      default: cout << 0 << endl;
      }
    }
  }

  return 0;
}

