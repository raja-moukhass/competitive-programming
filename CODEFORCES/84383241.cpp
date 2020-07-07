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
int     main()
{
    int n =0,sum =0,suf=0,sur =0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int m,f,r;
        cin>>m>>f>>r;
        sum += m;
        sur += r;
        suf += f;
    }

   if(sum == 0 && suf ==0 && sur ==0)
   cout<<"YES"<<endl;
   else 
      cout<<"NO"<<endl;
   

}

