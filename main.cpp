#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    List L;
    createList_103052430004(L);

    address p;
    infotype x;

    cout << "input elemen pertama: ";
    cin >> x;
    p = allocate_103052430004(x);
    insertFirst_103052430004(L, p);

    cout << "masukkan elemen kedua di awal: ";
    cin >> x;
    p = allocate_103052430004(x);
    insertFirst_103052430004(L, p);

    cout << "masukkan elemen ketiga di akhir: ";
    cin >> x;
    p = allocate_103052430004(x);
    insertLast_103052430004(L, p);

    cout << "\ndaftar elemen list: ";
    printInfo_103052430004(L);
    cout << endl;

    createList_103052430004(L);

    cout << "masukkan elemen pertama: ";
    cin >> x;
    p = allocate_103052430004(x);
    insertFirst_103052430004(L, p);

    cout << "masukkan elemen kedua di akhir: ";
    cin >> x;
    p = allocate_103052430004(x);
    insertLast_103052430004(L, p);

    cout << "masukkan elemen ketiga di akhir: ";
    cin >> x;
    p = allocate_103052430004(x);
    insertLast_103052430004(L, p);

    deleteFirst_103052430004(L, p);
    if (p != nullptr) {
        cout << "elemen pertama telah dihapus" << endl;
        delete p;
    }

    deleteLast_103052430004(L, p);
    if (p != nullptr) {
        cout << "elemen terakhir telah dihapus" << endl;
        delete p;
    }

    cout << "\ndaftar elemen list: ";
    printInfo_103052430004(L);
    cout << endl;

    createList_103052430004(L);

    cout << "masukkan elemen di akhir: ";
    cin >> x;
    insertLast_103052430004(L, allocate_103052430004(x));

    cout << "masukkan elemen di akhir: ";
    cin >> x;
    insertLast_103052430004(L, allocate_103052430004(x));

    cout << "masukkan elemen di akhir: ";
    cin >> x;
    insertLast_103052430004(L, allocate_103052430004(x));

    cout << "masukkan elemen di akhir: ";
    cin >> x;
    insertLast_103052430004(L, allocate_103052430004(x));

    cout << endl;
    printInfoFrontToBack_103052430004(L);
    printInfoBackToFront_103052430004(L);

    return 0;
}
