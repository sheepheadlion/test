#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "���ڸ� �Է��ϼ���: ";
    cin >> a;

    for (int i = 1; i <= a; i++) 
    {
        {
            for (int j = 1; j <= a - i; j++)    // (�Է¼� - 1) ��ĭ �ֱ�
                cout << " ";  
            for (int j = 1; j <= 2 * i - 1; j++)    // ��ĭ ���� Ȧ���� * �ֱ�
                cout << "*"; //

        }
        cout << endl; // �� Ƚ������ �ٹٲ�
    }
    return 0;
}