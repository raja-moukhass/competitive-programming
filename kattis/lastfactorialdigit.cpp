#include <iostream>

using namespace std;

int     main()
{
    int r,i;
    cin>>r;
    for(i=0; i<r; i++)
    {
        int n;
    cin>>n;
    if(n == 0 || n ==1)
    cout<<1<<endl;
    else if  (n ==2)
    cout<<2<<endl;
    else if (n==3)
    cout<<6<<endl;
    else if(n ==4)
    cout<<4<<endl;
    else
    cout<<0<<endl;
    }
}