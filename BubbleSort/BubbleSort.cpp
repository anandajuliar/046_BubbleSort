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
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}
void BubbleSortArray() {
    int pass = 1;
    
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        pass = pass + 1;

        cout << "\nPass" << pass - 2 << "; ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";


        }
        cout << endl;


    } while (pass <= n - 1);  
}


int main() {

}