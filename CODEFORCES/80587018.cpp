#include <iostream>

using   namespace std;

#define ll long long

int     main()
{
    ll n;
    cin >>n;
    int j=0;
    for(int i=0; i<n; i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        int k;
        k = a+b+c;
        if(k >1)
        j++;
         //cout<<j;
    }
    cout<<j<<endl;
}