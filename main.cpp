#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string ss,ll;
    cout << "ll:" << ll[0] << endl;
    cout << "Hello input some word:" << endl;
    getline(cin,ss);
    for(string::size_type i=0;i!=ss.size();i++)
    {
        if(ispunct(ss[i]))
        {
            NULL;
        }
        else
        {
            ll+=ss[i];
        }
    }

    cout << ll << endl;
    cout << "Hello world!" << endl;
    return 0;
}
