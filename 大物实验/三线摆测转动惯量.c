#include<stdio.h>
#include<math.h>
#include<windows.h>
const double m0=358.5;
const double g=9.837;
const double pi=3.14159;
const double m=385.5;
const double m1=200;
double R=0,r=0,H=0;
int main()
{
    double a,b,c,d;
    printf("��Բ����������:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    r=(a+b+c)/(3*sqrt(3));
    printf("%.5f\n",r);
    printf("��Բ����������:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    R=(a+b+c)/(3*sqrt(3));
    printf("%.5f\n",R);
    printf("����Բ��֮�����:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    H=(a+b+c+d)/3;
    printf("%.4f\n",H);

    printf("�ĸ�20���ڵ�ʱ��:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double T;
    T=(a+b+c+d)/(4*20);
    printf("ƽ������:%.4f\n",T);
    double i0;
    i0=m0*g*R*r*T*T;
    i0/=(4*pi*pi*H);
    i0/=1000*1000;
    printf("�������������ת������:%.4f\n",i0);

    printf("�����ھ�:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.4f\n",(a+b+c)/(3));
    printf("�����⾶:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.4f\n",(a+b+c)/(3));
    printf("2.�ĸ�20���ڵ�ʱ��:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double i1;
    T=(a+b+c+d)/(4*20);
    printf("ƽ������:%.4f\n",T);
    i1=(m0+m)*g*R*r*T*T;
    i1/=(4*pi*pi*H);
    i1/=1000*1000;
    printf("����Բ����ת������:%.4f\n",i1);
    printf("Բ����ת������:%.4f\n",i1-i0);

    printf("����Բ����ֱ��:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.3f\n",(a+b+c)/3);

    printf("3.�ĸ�20���ڵ�ʱ��:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double i;
    T=(a+b+c+d)/(4*20);
    printf("ƽ������:%.4f\n",T);
    i=(m0+2*m1)*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("Բ�̼�Բ�����ת������:%.6f\n",i);
    printf("һ��Բ�����ת������:%.6f\n",(i-i0)/2);
    system("pause");
}

































/*void a1();
void a2();
void a3();
void a4();
void a5();
void a6();
int main()
{
    int pd=1;
    while(1)
    {
        if(pd==0) break;
        printf("1.���׳߲�����Բ������֮�����(r)\n");
        printf("2.���׳߲�����Բ������֮��ľ���(R)\n");
        printf("3.��ƽ��ֵ\n");
        printf("4.����û�з�����Ʒʱ��Բ�̵�ת������\n");
        printf("5.������Բ�̼�Բ���Լ�Բ����ת������\n");
        printf("6.������Բ�̼�Բ����ת��������Բ�����ת������\n");
        printf("7.����R,r,H��ֵ\n");
        printf("8.��������\n");
        printf("������ѡ��:");
        int _;
        scanf("%d",&_);
        switch (_)
        {
            case 1:
                a1();
                break;
            case 2:
                a1();
                break;
            case 3:
                a3();
                break;
            case 4:
                a4();
                break;
            case 5:
                a5();
                break;
            case 6:
                a6();
                break;
            case 8:
                pd=0;
                break;
            case 7:
                a2();
                break;
        }
    }
    system("pause");
}
void a2()
{
    printf("����������R r H(mm):");
    scanf("%lf %lf %lf",&R,&r,&H);
}
void a6()
{
    double i0,i;
    if(R==0) a2();
    printf("������T:");
    double T;
    scanf("%lf",&T);
    i=(m0+2*m1)*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("������4.�������ת������:");
    scanf("%lf",&i0);
    printf("Բ�̼�Բ�����ת������:%.3f\n",i);
    printf("һ��Բ�����ת������:%.3f\n",(i-i0)/2);
}
void a5()
{
    double i0,i;
    if(R==0) a2();
    printf("������T:");
    double T;
    scanf("%lf",&T);
    i=(m0+m)*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("������4.�������ת������:");
    scanf("%lf",&i0);
    printf("����Բ����ת������:%.3f\n",i);
    printf("Բ����ת������:%.3f\n",i-i0);
}
void a4()
{
    if(R==0) a2();
    printf("������T:");
    double T;
    scanf("%lf",&T);
    double i;
    i=m0*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("%.4f\n",i);

}
void a1()
{
    printf("��������ab,ac,bc�����(mm):");
    double a,b,c,ans;
    scanf("%lf%lf%lf",&a,&b,&c);
    ans+=a+b+c;
    ans/=(3*sqrt(3));
    ans+=0.005;
    printf("%.2f\n",ans);
}
void a3()
{
    printf("���������ݸ���:");
    int n;
    scanf("%d",&n);
    printf("������%d������:",n);
    double t,ans=0;
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&t);
        ans+=t;
    }
    ans/=n;
    ans+=0.005;
    printf("%.2f\n",ans);
}*/
