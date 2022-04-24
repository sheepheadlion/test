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

    cout << "a의 값 입력: ";
    cin >> a;
    cout << "b의 값 입력: ";
    cin >> b;
    cout << "c의 값 입력: ";
    cin >> c;
    
    cout << " 방정식 " << a << "x+" << b << "y=" << c << "의 정수해는 ";
        if (c % gcd(a, b) == 0) cout << "있습니다.";
        else cout << "없습니다.";

    return 0;
}