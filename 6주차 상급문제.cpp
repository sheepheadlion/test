#include <iostream>
using namespace std;

string tentotwo(int n);
int lengthtwo();

int main() {

	int N;
	cout << "�ڿ��� N�� ����?: ";
	cin >> N;

	string c;

	cout << N<<"�� "<< tentotwo(N).length()<<"�ڸ� �������Դϴ�.";
	
	
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
	