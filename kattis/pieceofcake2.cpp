#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int     main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    int w,h;
    w = max(b, a-b);
   // cout<<w<<endl;
    h = max(c, a-c);
    //cout<<h<<endl;
    cout<< w*h*4<<endl;
}