#include <iostream>

using namespace std;
int     main()
{
    int a,b;
    cin>>a>>b;
    if(a!=b )
    cout<<"Odd " << max(a,b)*2<<endl;
   // else if(b>a)
     //   cout<<"Odd " << b*2<<endl;

    else if (a==b &&(a!=0 && b!=0))
    cout<< "Even "<<a + b<<endl;
     else if(a==0 && b==0)
    cout<<"Not a moose"<<endl;
}