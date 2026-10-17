#include <iostream>
#include "dll.h"

using namespace std;

int main()
{
    List L1, L2, L3;
    address p;
    int temp;

    // 1

    createList(L1);

    cout << "masukkan elemen pertama: ";
    cin >> temp;
    p = allocate(temp);
    insertFirst(L1, p);
    cout << "masukkan elemen kedua di awal: ";
    cin >> temp;
    p = allocate(temp);
    insertFirst(L1, p);

    cout << "masukkan elemen ketiga di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L1, p);

    printInfo(L1);

    // 2

    createList(L2);

    cout << "\nmasukkan elemen pertama: ";
    cin >> temp;
    p = allocate(temp);
    insertFirst(L2, p);

    cout << "masukkan kedua di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L2, p);

    cout << "masukkan ketiga di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L2, p);

    deleteFirst(L2, p);
    cout << "\nelemen pertama telah dihapus";

    deleteLast(L2, p);
    cout << "\nelemen terakhir telah dihapus\n";

    printInfo(L2);

    // 3

    createList(L3);

    cout << "\nmasukkan elemen di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L3, p);

    cout << "masukkan elemen di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L3, p);

    cout << "masukkan elemen di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L3, p);

    cout << "masukkan elemen di akhir: ";
    cin >> temp;
    p = allocate(temp);
    insertLast(L3, p);

    printInfoFrontToBack(L3);
    printInfoBackToFront(L3);

    cout << endl;
    return 0;
}
