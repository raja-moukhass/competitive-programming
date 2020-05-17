#include <iostream>

using namespace std;

int     main()
{
    int a1,b1,c1,a,b,c;
    cin>>a1>>a>>b1>>b>>c1>>c;
    if(a1==b1)
    cout<<c1;
    
    if (a1==c1)
    cout<<b1;
    if (c1==b1)
    cout<<a1;
    
    if (a==b)
    cout<<" "<<c<<endl;
     if(a == c)
    cout<<" "<<b<<endl;
    if(b == c)
    cout<<" "<<a<<endl;
    


}