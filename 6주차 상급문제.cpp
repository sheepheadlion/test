#include <iostream>
using namespace std;

string tentotwo(int n);
int lengthtwo();

int main() {

	int N;
	cout << "자연수 N의 값은?: ";
	cin >> N;

	string c;

	cout << N<<"은 "<< tentotwo(N).length()<<"자리 이진수입니다.";
	
	
}

string tentotwo(int n)
{
	string r;
	while (n != 0) {
		r += (n % 2 == 0 ? "0" : "1");
		n /= 2;
	}
	return r;
}
	