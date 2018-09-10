#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
int a[100],b[100],c[1],d=0,e=0,i,n;

for(i=0;i<3;i++)
    cin >> a[i];
for(i=0;i<3;i++)
    cin >>b[i];
n=(sizeof(a)+sizeof(b))/2;
for(i=0;i<3;i++)
    if(a[i]>b[i])
        d=d+1;
else if(a[i]<b[i])
    e=e+1;

c[0]=d;
c[1]=e;
cout << c[0] <<" " << c[1];

return(0);
}  





