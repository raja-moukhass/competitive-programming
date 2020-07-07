#include <iostream>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>


using namespace std;
int main()
{
    int n,j,l;
    j = 0;
    l = 0;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(b - a>=2)
        j++;
        l =+j;


    }
    cout<<l<<endl;
}
