#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    } return a;

}
int main()
{
    int a, b, c;

    cout << "a�� �� �Է�: ";
    cin >> a;
    cout << "b�� �� �Է�: ";
    cin >> b;
    cout << "c�� �� �Է�: ";
    cin >> c;
    
    cout << " ������ " << a << "x+" << b << "y=" << c << "�� �����ش� ";
        if (c % gcd(a, b) == 0) cout << "�ֽ��ϴ�.";
        else cout << "�����ϴ�.";

    return 0;
}