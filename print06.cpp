#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void)
{
    float a, b, c;
    cin>>a;
    b = modf(a, &c);
    cout<<c<<endl;
    cout<<b<<endl;

    return 0;
}