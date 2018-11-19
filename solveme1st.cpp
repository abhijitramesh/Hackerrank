#include<stdio.h>
int sloveMeFirst(int x,int y);
int main()
{
    int a,b,c;
   
  
    scanf("%d%d",&a,&b);
    c=sloveMeFirst(a,b);
    printf("%d",c);
    return(0);
    
}
    int sloveMeFirst(int x,int y)
    {
        int z;
    z=x+y;
    return(z);
    }
