#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh dari 10. silakan coba lagi.\n";
        }
    }
}

cout << "\n===========================================\n";
caou << "        Masukkan Elemen Array                \n";
cout << "=============================================\n";
