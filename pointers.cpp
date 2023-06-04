#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 6;
    int* ptr;
    ptr = &x;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    int &ref = x;
    cout<<ref;
}
