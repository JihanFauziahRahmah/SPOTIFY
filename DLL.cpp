#include <iostream>
#include "DLL.h"

using namespace std;

void createList_103052430004(List &L){
     L.first = nullptr;
     L.last = nullptr;
}

bool isEmpty_103052430004(List &L) {
     return (L.first == nullptr);
}

address allocate_103052430004(infotype x) {
     address p = new elmlist;
     p->info = x;
     p->next = nullptr;
     p->prev = nullptr;
     return p;
}

void printInfo_103052430004(List &L) {
     address p = L.first;
     while (p != nullptr) {
        cout << p->info << " ";
        p = p->next;
     }
     cout << endl;
}

void insertFirst_103052430004(List &L, address p) {
     if (L.first == nullptr) {
         L.first = p ;
         L.last = p;
    } else {
         p->next = L.first;
         L.first->prev = p;
         L.first = p;
    }
}

void insertLast_103052430004(List &L, address p) {
     if (L.first == nullptr) {
         L.first = p;
         L.last = p;
    } else {
         p->prev = L.last;
         L.last->next = p;
         L.last = p;
    }
}

void deleteFirst_103052430004(List &L, address &p){
      if (L.first == nullptr) {
        p = nullptr;
    } else if (L.first == L.last) {
        p = L.first;
        L.first = nullptr;
        L.last = nullptr;
    } else {
        p = L.first;
        L.first = p->next;
        L.first->prev = nullptr;
        p->next = nullptr;
    }
}

void deleteLast_103052430004(List &L, address &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else if (L.first == L.last) {
        p = L.last;
        L.first = nullptr;
        L.last = nullptr;
    } else {
        p = L.last;
        L.last = p->prev;
        L.last->next = nullptr;
        p->prev = nullptr;
    }
}

void printInfoFrontToBack_103052430004(List L) {
    address p = L.first;
    cout << "daftar elemen dari depan ke belakang: ";
    while (p != nullptr) {
        cout << p->info;
        if (p->next != nullptr)
            cout << ", ";
        p = p->next;
    }
    cout << endl;
}

void printInfoBackToFront_103052430004(List L) {
    address p = L.last;
    cout << "daftar elemen dari belakang ke depan: ";
    while (p != nullptr) {
        cout << p->info;
        if (p->prev != nullptr) cout << ", ";
        p = p->prev;
    }
    cout << endl;
}
