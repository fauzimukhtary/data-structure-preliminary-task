#include <iostream>
#include "sll.h"

using namespace std;

void createList(List &L)
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

void printInfo(List L)
{
    address q;

    q = L.first;

    while (q)
    {
        cout << q->info << " ";
        q = q->next;
    }
}

void insertLast(List &L, address p)
{
    address q;

    if (L.first == nullptr) L.first = p;
    else
    {
        q = L.first;
        while (q->next != nullptr) q = q->next;
        q->next = p;
    }

}

void searchElement(List &L, infotype target)
{
    address curr;
    int position;

    curr = L.first;
    position = 1;

    while (curr and curr->info != target)
    {
        position++;
        curr = curr->next;
    }

    if (curr) cout << "alamat " << curr << ", posisi ke-" << position << endl;
    else cout << "elemen tersebut tidak ada dalam list" << endl;
}

void selectionSort(List &L)
{
    address p, minimum, temp;
    infotype data_temp;

    p = L.first;

    while (p)
    {
        minimum = p;
        temp = p->next;

        while (temp)
        {
            if (temp->info < minimum->info) minimum = temp;
            temp = temp->next;
        }

        data_temp = minimum->info;
        minimum->info = p->info;
        p->info = data_temp;

        p = p->next;
    }
}

void insertSorted(List &L, address p)
{
    address q, prev;
    bool found;

    q = L.first;
    found = false;

    while (q and !found)
    {
        if (q->info < p->info)
        {
            prev = q;
            q = q->next;
        } else found = true;
    }

    if (!prev)
    {
        p->next = L.first;
        L.first = p;
    }
    else
    {
        p->next = q;
        prev->next = p;
    }
}
