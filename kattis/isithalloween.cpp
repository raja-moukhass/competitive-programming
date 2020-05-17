#include <iostream>
#include <string.h>

using namespace std;

int     main()
{
    string str;
    getline(cin,str);
    if(str == "OCT 31" || str == "DEC 25")
    cout<<"yup"<<endl;
    else 
    cout<<"nope"<<endl;
}