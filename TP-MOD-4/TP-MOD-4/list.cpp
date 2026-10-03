#include <iostream>
#include "list.h"

using namespace std;

void createList(list &L)
{
    L.first = nullptr;
}

address allocate(infotype data)
{
    address p;

    p = new elmList;
    p->info = data;
    p->next = nullptr;
    return p;
}

void insertFirst(list &L, address p)
{
    p->next = L.first;
    L.first = p;
}

void printInfo(list L)
{
    address p;

    p = L.first;

    while (p)
    {
        cout << p->info << ", ";
        p = p->next;
    }

    cout << "\b\b " << endl;
}
