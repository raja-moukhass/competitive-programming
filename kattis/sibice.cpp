#include <iostream>
#include <cmath>
using   namespace std;

int     main()
{
    double a,b,c,i;
    cin>>a>>b>>c;
    for(i=0; i<a; i++)
    {
        double f;
        double sum;
        cin>>f;
sum = sqrt(b*b + c*c);
if(f <= sum)
cout<<"DA"<<endl;
else
cout<<"NE"<<endl;


}
}