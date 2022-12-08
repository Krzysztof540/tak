#include <iostream>

using namespace std;

int main()

class CU
{
    int licznik, mianownik;
public:
    CU()
    {
        licznik = 0;
        mianownik = 1;
    }
    CU(int 1, int m)
    {
        licznik = 1;
        if(m == 0) m = 1;
        mianownik = m;
    }
    void show()
    {
        cout<<licznik<<"/"<<mianownik<<endl;
    }
    CU& operator++()
    {
        licznik += mianownik;
        return*this;
    }
    CU& operator++(int)
    {
        licznik += mianownik;
    }
};
 int main()
 {
     CU a(3,4),b(1,2);
     ++(++a);
     a++++++++++;
     a.show();
     return 0;
 }
