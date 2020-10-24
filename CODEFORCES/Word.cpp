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
#include <iostream>
#include <algorithm> 
#include <string>  
#include <functional>
#include <cctype>

using   namespace std;

int     main()
{
    string str;
    cin>>str;
    int upcount;
    int lowcount;
    upcount = 0;
    lowcount = 0;
    int loww;
    int upp;
    loww = 0;
    upp = 0;




    for(int i=0; i<str.size() ;i++)
    {
        if(isupper(str[i]))
        upcount ++;
        else if (islower(str[i]))
        lowcount ++;
   
    }
    upp += upcount;
    loww += lowcount;
    // cout<<upcount<<endl;
    // cout<<lowcount<<endl;

   if(upcount > lowcount)
   {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
   }

    else
    {
     transform(str.begin(), str.end(),str.begin(), ::tolower);
     cout<<str<<endl;
    }

}