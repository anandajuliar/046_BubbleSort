#include <iostream>
using namespace std;

int a[20];
int n;

void input(){
    while (true) {
        cout << "masukkan banyaknya elemen array :";
        cin >> n ;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
  
}
