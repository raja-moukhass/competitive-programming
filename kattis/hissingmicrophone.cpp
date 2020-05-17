#include <iostream>
#include <string.h>

using namespace std;
int     main()
{
char str[32];
cin >> str;
if(strstr(str,"ss"))
{
    cout << "hiss"<<endl;
    
}
else
    cout << "no hiss"<<endl;
}
