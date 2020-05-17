#include <iostream>
#include<iomanip>

using   namespace std;
int     main()
{
    float n,m,i,r;
    r=0;
    cin >>n>>m;
    for(i=0;i<m;i++)
    {
        float e,c;
        cin>>e>>c;
        e*=c;
        //cout<<e;
        r+=e;


    }
    cout<<fixed<<setprecision(7)<<(r*n)<<endl;


}