#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    cin>>s;

    s+=":";
    string delimiter = ":";

    int pos;
    int curpos = 0;

    while((pos = s.find(delimiter, curpos)) != string::npos)
    {
        int len = pos-curpos;
        string result = s.substr(curpos, len);
        cout<<result;
        if(curpos == 0)
        {
            cout<<":";
        }
        curpos = pos + 1;
    }

    return 0;
}