#include<iostream.h>
#include<cstdlib>
{
	int size s1,s2,i,j;
	cin>>size:
	int ar[size][size]
	for(i=0;i<size,i++){
		for(j=0;j<size;j++){
			if(i==j){sum1=sum1+ar[i][i];}
		}
	}
	j=size-1;
	for(int i=0;i<size:i++){
		sum2 = sum2+ar[i][j];
		j = j-1;
	}
	cout<<abs(sum1-sum2);
}