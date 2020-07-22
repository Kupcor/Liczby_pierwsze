#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    //Program sixty-second - write a c++ program to which reads an given integer n and prints a twin prime which has the maxium
    //size among twin primes less than or equals to n
    //Program nie jest idealny ale jakoś działa i z tego jestem dumny <3

    int n;
    int dzielnik = 0;
    int l = 0;
    cin >> n;
    int zn = n;
    int tab[100000];
    int l_pierwsze[100000];

    for (int i = (n - 1); i >= 0; i--) {
        tab[i] = zn;
        zn = zn - 1;
        cout << tab[i] << setw(6);
    }
    cout << setw(1) << endl << endl;

    for (int i = 0; i <= n; i++) {
        dzielnik = 0;
        for (int j = 1; j <= tab[i]; j++) {
            if (tab[i] % j == 0) {
                dzielnik++;
            }
        }
        if (dzielnik == 2) {
            l_pierwsze[l] = tab[i];
            cout << setw(5) << l_pierwsze[l];
            l++;
        }
    }
    cout<<endl;
    int k[10000];
    int k1=0;
    for (int i = 0; i <= l - 1; i++) {
        if (l_pierwsze[i + 1] - l_pierwsze[i] == 2) {
            k[k1]=l_pierwsze[i];
            k[k1+1]=l_pierwsze[i+1];
            k1++;
        }
    }
    cout<<"Najwieksza para blizniaczych liczb pierwszych to: "<<k[k1]<<" i "<<k[k1-1]<<endl;
    return 0;
}


//Tylko użyłem trzech tablic i kilku pętli
//Na pewno da sie to uprościć