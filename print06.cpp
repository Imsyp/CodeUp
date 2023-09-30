#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void)
{
    double d, i;
    cin>>d;

    int n = modf(d, &i);

    string s = to_string(d-i);

    s+=".";
    string delimiter = ".";

    int pos;
    int curpos = 0;

    cout<< i <<endl;

    if(s[0] == '-')
    {
        s = s.substr(1, s.length()-1);
    }

    while((pos = s.find(delimiter, curpos)) != string::npos)
    {
        int len = pos-curpos;
        string result = s.substr(curpos, len);
        if(result.length() != 1)
        {
            string new_result;
            for(int i=0; i<result.length(); i++)
            {
                if(result[i] == '0')
                {
                    break;
                }

                new_result += result[i];
            }

            cout<<new_result<<endl;
        }

        curpos = pos + 1;
    }

    return 0;
}