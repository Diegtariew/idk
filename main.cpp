#include <iostream>
#include <string>
#include "main.h"

using namespace std;


void XD::lel_plus() {
    cout << "lel: " << lel <<endl;
}


char* XD::jakityp(int & zm) {
    if(zm > 50) {
        zm = 75;
        return "zm > 50";
    }
    else {
        zm = 25;
        return "zm < 50";
    }
}

XD::XD() {
    lel_plus();
    lel++;
}

XD::~XD() {
    cout << "No elo gosciu, destruktor here" << endl;
}


int XD::lel = 0;

int main() {


    XD jakityp1;
    XD jakityp2;
    XD jakityp3;

    int i = 1;
    int &huj = i;

    cout << "i: " << huj << endl;

    int* wsk = &i;

    cout << "i: " << *wsk << endl;


    int x = 5;

    int* tab = new int[x];
    int* gowno = new int;
    int* segz = new int;

    for (int i = 0; i < x; i ++){
        tab[i] = i + 1;
    }

    *gowno = 5;
    *segz = 88;

    cout << "gowno: " << *gowno << endl;
    cout << "tab[3]: " << tab[3] << endl;

    tab[3] = 18;
    *gowno = tab[3];
    cout << "gowno: " << *gowno << endl;

    *gowno = *segz;
    cout << "gowno: " << *gowno << endl;

    gowno = segz;
    cout << "gowno: " << *gowno << endl;


    int jot = 100;

    XD hwdp;
    cout << hwdp.jakityp(jot) << endl;
    cout << "jot: " << jot << endl;

    return 0;
}