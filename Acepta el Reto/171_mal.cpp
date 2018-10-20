#include <iostream>
using namespace std;

const int N=100000;
typedef int tCordillera[N];

int abadias(tCordillera cordillera,int n){
  int abadias=1;
  for(int i=n-1;i>=0;i--){
	  if (cordillera[i] < cordillera[i - 1]) {
		  abadias++;
	  }
	  else if(i!=0)
		  cordillera[i - 1] = cordillera[i];
  }
  return abadias;
}

int main() {
  int n;
  tCordillera cordillera;
  
  cin >> n;
  
  while(n != 0){
	  if (n <= N) {
		  for (int i = 0; i < n; i++) {
			  cin >> cordillera[i];
		  }
		  cout << abadias(cordillera, n) << endl;
	  }
    cin >> n;
  }
  	
  return 0;
}
