#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ";
    cin >> a;

    for (int i = 1; i <= a; i++) 
    {
        {
            for (int j = 1; j <= a - i; j++)    // (ÀÔ·Â¼ö - 1) ºóÄ­ ³Ö±â
                cout << " ";  
            for (int j = 1; j <= 2 * i - 1; j++)    // ºóÄ­ ¿·¿¡ È¦¼ö°³ * ³Ö±â
                cout << "*"; //

        }
        cout << endl; // ¸Å È½¼ö¸¶´Ù ÁÙ¹Ù²Þ
    }
    return 0;
}