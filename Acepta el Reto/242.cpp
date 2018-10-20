#include<iostream>
using namespace std;

const int N = 100000;
typedef int tEstudiantes[N];

int main() {
	int countries;
	tEstudiantes students;


	cin >> countries;

	while (countries != 0) {
		long long pairs = 0, count = 0;
		for(int i=0;i<countries;i++){
			cin >> students[i];
			count += students[i];
		}
		
		for (int j = 0; j < countries; j++) {
			count -= students[j];
			pairs += students[j] * count;
		}
		cout << pairs << endl;
		cin >> countries;
	}
	return 0;
}