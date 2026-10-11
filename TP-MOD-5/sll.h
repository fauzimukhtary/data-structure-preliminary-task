#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

struct elmList;
using infotype = int;
using address = elmList*;

struct elmList
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

void createList(List &L);
address allocate(infotype data);
void printInfo(List L);
void insertLast(List &L, address p);
void searchElement(List &L, infotype target);
void selectionSort(List &L);
void insertSorted(List &L, address p);

#endif // SLL_H_INCLUDED
