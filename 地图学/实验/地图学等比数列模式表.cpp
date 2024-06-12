#include<iostream>
#include<cstdio>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    double r=1.3,p=1.5;
    int n;
    printf("ÇëÒÀ´ÎÊäÈën,r,p£¨r,p·¶Î§1.3-1.6£©:");
    cin>>n>>r>>p;
    n=n+1;
    double a[60],b[60],c[60][60];
    a[n-1]=15,a[1]=4;
    b[1]=1.5;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[1]*pow(r,i-1);
        b[i]=b[1]*pow(p,i-1);
    }
    c[1][1]=(b[1]+b[2])/2;
    for(int i=2;i<=n;i++)
    {
        c[i][i]=c[1][1]*pow(p,i-1);
    }
    for(int i=n-1;i;i--)
        printf("a[%d]=%f\n",i,a[i]);
    for(int i=1;i<n;i++)
    {
        printf("b[%d]=%f-b[%d]=%f\n",i,b[i],i+1,b[i+1]);
    }
    for(int j=1;j<n;j++)
    for(int i=2;i<n;i++)
    {
        c[i][j]=c[j][j]+(c[j+1][j+1]-c[j][j])/(1+p)*(1-pow(p,i-j))/(1-p);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        printf("%11f",c[i][j]);
        printf("\n");
    }
    system("pause");
}
