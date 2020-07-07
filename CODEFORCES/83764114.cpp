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
	ll xa,xb;
int	main()
{
		 ll n;
		 cin>>n;
		 for(int i=0; i <n; i++)
		 {
			 ll x,y,a,b;
			 cin >>x>>y>>a>>b;
			 xa = y -x;
			 xb = a + b;
	if(xa % xb == 0) cout << xa/xb << endl;
        else cout << -1 << endl;
		 }

	}

