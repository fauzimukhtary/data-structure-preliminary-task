#include <iostream>
#include "dll.h"

using namespace std;

void createList(List &L)
{
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmpty(List L)
{
    return !L.first;
}

address allocate(infotype data)
{
    address p;

    p = new elmList;
    p->info = data;
    p->next = nullptr;
    p->prev = nullptr;

    return p;
}

void printInfo(List L)
{
    address p;

    p = L.first;

    cout << "\ndaftar elemen list: ";

    while (p)
    {
        cout << p->info << ", ";
        p = p->next;
    }

    cout << "\b\b " << endl;
}

void insertFirst(List &L, address p)
{
    if (!L.first and !L.last)
    {
        L.first = p;
        L.last = p;
    }
    else
    {
        L.first->prev = p;
        p->next = L.first;
        L.first = p;
    }
}

void insertLast(List &L, address p)
{
    if (!L.first and !L.last)
    {
        L.first = p;
        L.last = p;
    }
    else
    {
        L.last->next = p;
        p->prev = L.last;
        L.last = p;
    }
}

void deleteFirst(List &L, address &p)
{
    if (L.first and L.last)
    {
        p = L.first;

        if (L.first == L.last)
        {
            L.first = nullptr;
            L.last = nullptr;
        }
        else
        {
            L.first = L.first->next;
            L.first->prev = nullptr;
        }

        delete p;
    }
}

void deleteLast(List &L, address &p)
{
    if (L.first and L.last)
    {
        p = L.last;

        if (L.first == L.last)
        {
            L.first = nullptr;
            L.last = nullptr;
        }
        else
        {
            L.last = L.last->prev;
            L.last->next = nullptr;
        }

        delete p;
    }
}

void printInfoFrontToBack(List L)
{
    address p;

    p = L.first;

    cout << "\ndaftar elemen dari depan ke belakang: ";

    while (p)
    {
        cout << p->info << ", ";
        p = p->next;
    }

    cout << "\b\b ";
}

void printInfoBackToFront(List L)
{
    address p;

    p = L.last;

    cout << "\ndaftar elemen dari belakang ke depan: ";

    while (p)
    {
        cout << p->info << ", ";
        p = p->prev;
    }

    cout << "\b\b ";
}
