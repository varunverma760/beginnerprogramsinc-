/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//#define MAX
int main()
{
    int a[10],b[10],flag=0,n,j=0,count=0,item;
    printf("Enter the limit between 0 & 10");
    scanf("%d",&n);
    printf("Enter the any element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter item to be searched");
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
        if(a[i] == item)
        {
            //flag=1
            count++;
            b[j]=i+1;
            j++;
        }
    }
    for(int x=0;x<count;x++)
    {
        printf("\n item found at %d position",b[x]);
    }

    return 0;
}
