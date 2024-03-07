#include <iostream>
using namespace std;

int a[20]; //deklarasi array a dengan ukuran 20
int n; //deklarasi variabel n untuk menyimpan banyaknya elemen

void input(){ // procedur untuk input
    while (true) {
        cout << "masukkan banyaknya elemen array :"; // Output ke layar
        cin >> n ; // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else { // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }
    cout << endl; // Output baris kosong
    cout << "=====================" << endl; // Output ke layar
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> a[i]; // Input dari pengguna
    }
}
void BubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; //step 1
    
    do {
        for (int j = 0; j <= n - 1 - pass; j++) { //step 2
            if (a[j] > a[j + 1]) { //step 3
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass" << pass - 2 << "; ";
        for (int k = 0; k < n; k++) { // looping nilai k dimulai dari 0 hingga n
            cout << a[k] << " ";


        }
        cout << endl;


    } while (pass <= n - 1);  //step 5
}

void  display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j];
        if (j < n - 1) {
            cout << " --->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass =" << n - 1 << endl;
    cout << endl;
}

int main() {
    input();  // call the input function to get user input
    BubbleSortArray(); // call the selection sort function
    display(); // display the sortde array
    system("pause");

    return 0;
}