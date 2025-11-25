#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next, prev;
};

struct List {
    address first, last;
};

void createList_103052430004(List &L);
bool isEmpty_103052430004(List &L);
address allocate_103052430004(infotype x);
void printInfo_103052430004(List &L);
void insertFirst_103052430004(List &L, address p);
void insertLast_103052430004(List &L, address p);
void deleteFirst_103052430004(List &L, address &p);
void deleteLast_103052430004(List &L, address &p);
void printInfoFrontToBack_103052430004(List L);
void printInfoBackToFront_103052430004(List L);

#endif // DLL_H_INCLUDED
