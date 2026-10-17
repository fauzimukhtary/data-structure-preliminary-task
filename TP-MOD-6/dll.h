#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

struct elmList;
using infotype = int;
using address = elmList*;

struct elmList {
    infotype info;
    address prev;
    address next;
};

struct List
{
    address first;
    address last;
};

void createList(List &L);
bool isEmpty(List L);
address allocate(infotype data);
void printInfo(List L);
void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void deleteFirst(List &L, address &p);
void deleteLast(List &L, address &p);
void printInfoFrontToBack(List L);
void printInfoBackToFront(List L);

#endif // DLL_H_INCLUDED
