#include <iostream>

using namespace std;

class XD
{
private:
    static int lel;

public:
    void lel_plus()
    {
        cout << "lel: " << lel << endl;
    }

    XD()
    {
        lel++;
        lel_plus();
    }
};

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


    return 0;
}