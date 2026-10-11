#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    List L;
    int i;
    infotype temp;
    address p;

    createList(L);

    for (i = 0; i < 4; i++)
    {
        cin >> temp;
        p = allocate(temp);
        insertLast(L, p);
    }

    cout << "Isi list awal: ";
    printInfo(L);

    selectionSort(L);
    cout << "\nIsi list setelah sort: ";
    printInfo(L);

    cout << "\nInput sorted: ";
    cin >> temp;

    p = allocate(temp);
    insertSorted(L, p);

    cout << "\nIsi list akhir: ";
    printInfo(L);

    cout << "\nCari elemen: ";
    cin >> temp;
    searchElement(L, temp);
    cout << "\nCari elemen: ";
    cin >> temp;
    searchElement(L, temp);

    return 0;
}
