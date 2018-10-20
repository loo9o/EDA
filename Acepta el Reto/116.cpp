#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n > 0 && n <= 5)
    {
      for (int i = 0; i < n; i++) {
	cout << "Hola mundo" << "." << endl;
      }
    }
  
  return 0;
}

