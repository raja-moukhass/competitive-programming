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
#define ll long long
    using namespace std;
	int		main()

{
    int n,cm=0;
    while(cin>>n)
    {
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                cm++;
        }
        cout<<cm<<endl;
        cm=0;
    }
    return 0;
}
	
