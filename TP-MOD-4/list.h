#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct elmList;
using infotype = int;
using address = elmList*;

struct elmList
{
    infotype info;
    address next;
};

struct list
{
    address first;
};

void createList(list &L);
address allocate(infotype data);
void insertFirst(list &L, address p);
void printInfo(list L);

#endif // LIST_H_INCLUDED
