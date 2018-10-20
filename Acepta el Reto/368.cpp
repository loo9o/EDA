#include <iostream>
using namespace std;

int main() {
  int h,c,time;
  cin >> h >> c;
  
  while (h != 0 && c != 0)
    {
      time = h/c;
      if(h%c != 0)
	time = time * 10 + 10;
      else
	time = time * 10;
      cout << time << endl;
      cin >> h >> c;
    }
	
  return 0;
}
