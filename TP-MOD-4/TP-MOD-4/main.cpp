#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    int i, temp;
    list L;
    address adr;

    createList(L);

    for (i = 3; i > 0; i--)
    {
        cout << "Masukkan digit ke-" << i << " dari NIM anda: ";
        cin >> temp;

        adr = allocate(temp);
        insertFirst(L, adr);
        printInfo(L);
    }

    return 0;
}
