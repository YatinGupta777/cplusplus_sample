#include <string>
#include<iostream>
using namespace std;

int testFunction() {
    int input = 103;
    string x = to_string(input);
    string res;
    int n = x.length();

    for(int i=0;i<=n/2;i++)
    {
        res+= x[i];
        if(i!=n-i-1)
         res+= x[n-i-1];
    }
    cout<<stoi(res);
    return 0;
}