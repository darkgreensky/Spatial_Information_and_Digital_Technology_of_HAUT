#include<stdio.h>
#include<math.h>
const double rou=7800,rou0=950,D=0.02,g=9.8,L=0.2;
int main()
{
    double d;
    printf("������С��ֱ��ƽ��ֵ(mm):");
    scanf("%lf",&d);
    d/=1000;
    int i,j;
    for(i=25;i<=55;i+=5)
    {
        printf("%d C\n",i);
        printf("������5������ʱ��:\n");
        double a[6],ave=0;
        for(j=1;j<=5;j++)
        {
            scanf("%lf",&a[j]);
            ave+=a[j];
        }
        ave/=5;
        ave+=0.005;
        printf("ƽ��ֵ��%.2f\n",ave);
        double v;
        v=L/ave+0.00005;
        printf("�ٶȣ�%.4f\n",v);
        double n;
        n=(rou-rou0)*g*d*d;
        n=n/(18*v*(1+2.4*d/D))+0.0005;
        printf("����ֵ��%.3f\n",n);
    }
    printf("\n������yesȷ�����Ѽ�¼��������:");
    char t[5];
    scanf("%s",&t);
    system("pause");

}
