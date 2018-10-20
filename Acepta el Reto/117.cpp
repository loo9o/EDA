#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string soy, name;
  cin >> n;
  
  if (n > 0)
    {
      for (int i = 0; i < n; i++) {
	cin >> soy >> name;
	cout << "Hola, " << name << "." << endl;
      }
    }
	
  return 0;
}
