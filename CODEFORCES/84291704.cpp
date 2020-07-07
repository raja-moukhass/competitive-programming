#include <iostream>
#include <string>

using namespace std;

int     main()
{
    int n;
    string name;
    cin >>n;
    for( int i = 0; i <n; i++)
    {
        cin >>name;
        if(name.length()>10)
        cout<<name[0]<<name.length() - 2<<name[name.length()-1]<<endl;
        else
        cout<<name<<endl;
    }
}
