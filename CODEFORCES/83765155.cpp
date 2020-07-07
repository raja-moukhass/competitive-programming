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
    
	int		main()
	{
		double a,b,f,n,r;
		cin>>a>>b;
		f = pow(a,2);
		n = pow(b,2);
		r = 2 *a;

		cout<< fixed<<setprecision(10)<<((n-f)/r) << endl;
	}

