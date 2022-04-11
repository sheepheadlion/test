#include <iostream>
using namespace std;

int main()
{
	int first, second;
	cout << "첫번째 숫자를 입력하세요: ";
	cin >> first; 
	cout << "두번째 숫자를 입력하세요: ";
	cin >> second;
	cout << first << " + " << second << " = " << first + second << endl;
	cout << first << " - " << second << " = " << first - second << endl;
	cout << first << " * " << second << " = " << first * second << endl;
	cout << first << " / " << second << " = " << first / second << endl;
	cout << first << " % " << second << " = " << first % second << endl;

	return 0;
}	
	