#include<iostream>
using namespace std;

class GfG
{
public:
    static int i;

    GfG()
    {
        // Do nothing
    };
};

int GfG::i = 1;

int main()
{
    GfG obj;
    GfG obj2;
    // prints value of i
    cout << obj.i<<endl;
    cout << obj2.i;
}
