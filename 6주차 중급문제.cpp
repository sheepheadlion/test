#include <iostream>
using namespace std;

int main() {

	int num[5];
	
	for (int i = 0; i < 5; i++) {
		cout << i+1<<"��° ��Ҵ� ? : ";
		cin >> num[i];
	}
	for (int j = 4; j >-1; j--) {
		cout << num[j];
	}
	return 0;
}