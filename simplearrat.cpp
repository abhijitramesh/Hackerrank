#include <iostream>
using namespace std;

int main()
{
 int i,n,sum=0,ar[1000];
    cin >> n;
    for(i=0;i<n;i++)
    {
    cin >> ar[i];
    sum=sum+ar[i];
    }
    cout << sum;
    return 0;
}
