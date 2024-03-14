#include <iostream>
using namespace std;
int arr[20];
int n;

void input() {
    while (true)
    {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

    void insertionSort() {
        int i, n, j, temp;
        int arr[40];

        for (i = 1; i <= n - 1; 1++) {//step 1
            
        }

    }

    void display() {
        cout << endl;
        cout << "=================================" << endl;
        cout << "Element Array yang telah tersusun" << endl;
        cout << "=================================" << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << endl; //output setiap element array pada garis baru
        }
        cout << "jumlah pass = " << n - 1 << endl;
        cout << endl;
    }

    int main()
    {
        input();
        bubbleSortArray();
        display();
        system("pause");
    }

int main()
{
    std::cout << "Hello World!\n";
}


