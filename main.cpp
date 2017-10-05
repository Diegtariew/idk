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


    return 0;
}