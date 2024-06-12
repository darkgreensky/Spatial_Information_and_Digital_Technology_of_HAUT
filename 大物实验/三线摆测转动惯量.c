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
    printf("上圆盘三个距离:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    r=(a+b+c)/(3*sqrt(3));
    printf("%.5f\n",r);
    printf("下圆盘三个距离:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    R=(a+b+c)/(3*sqrt(3));
    printf("%.5f\n",R);
    printf("上下圆盘之间距离:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    H=(a+b+c+d)/3;
    printf("%.4f\n",H);

    printf("四个20周期的时间:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double T;
    T=(a+b+c+d)/(4*20);
    printf("平均周期:%.4f\n",T);
    double i0;
    i0=m0*g*R*r*T*T;
    i0/=(4*pi*pi*H);
    i0/=1000*1000;
    printf("不放其他物体的转动惯量:%.4f\n",i0);

    printf("三个内径:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.4f\n",(a+b+c)/(3));
    printf("三个外径:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.4f\n",(a+b+c)/(3));
    printf("2.四个20周期的时间:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double i1;
    T=(a+b+c+d)/(4*20);
    printf("平均周期:%.4f\n",T);
    i1=(m0+m)*g*R*r*T*T;
    i1/=(4*pi*pi*H);
    i1/=1000*1000;
    printf("放置圆环的转动惯量:%.4f\n",i1);
    printf("圆环的转动惯量:%.4f\n",i1-i0);

    printf("三个圆柱体直径:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.3f\n",(a+b+c)/3);

    printf("3.四个20周期的时间:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double i;
    T=(a+b+c+d)/(4*20);
    printf("平均周期:%.4f\n",T);
    i=(m0+2*m1)*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("圆盘加圆柱体的转动惯量:%.6f\n",i);
    printf("一个圆柱体的转动惯量:%.6f\n",(i-i0)/2);
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
        printf("1.用米尺测量上圆盘悬点之间距离(r)\n");
        printf("2.用米尺测量下圆盘悬点之间的距离(R)\n");
        printf("3.求平均值\n");
        printf("4.计算没有放置物品时下圆盘的转动惯量\n");
        printf("5.计算下圆盘加圆环以及圆环的转动惯量\n");
        printf("6.计算下圆盘加圆柱体转动惯量和圆柱体的转动惯量\n");
        printf("7.更新R,r,H的值\n");
        printf("8.结束程序\n");
        printf("请输入选项:");
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
    printf("请依次输入R r H(mm):");
    scanf("%lf %lf %lf",&R,&r,&H);
}
void a6()
{
    double i0,i;
    if(R==0) a2();
    printf("请输入T:");
    double T;
    scanf("%lf",&T);
    i=(m0+2*m1)*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("请输入4.中所求的转动惯量:");
    scanf("%lf",&i0);
    printf("圆盘加圆柱体的转动惯量:%.3f\n",i);
    printf("一个圆柱体的转动惯量:%.3f\n",(i-i0)/2);
}
void a5()
{
    double i0,i;
    if(R==0) a2();
    printf("请输入T:");
    double T;
    scanf("%lf",&T);
    i=(m0+m)*g*R*r*T*T;
    i/=(4*pi*pi*H);
    i/=1000*1000;
    printf("请输入4.中所求的转动惯量:");
    scanf("%lf",&i0);
    printf("放置圆环的转动惯量:%.3f\n",i);
    printf("圆环的转动惯量:%.3f\n",i-i0);
}
void a4()
{
    if(R==0) a2();
    printf("请输入T:");
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
    printf("依次输入ab,ac,bc间距离(mm):");
    double a,b,c,ans;
    scanf("%lf%lf%lf",&a,&b,&c);
    ans+=a+b+c;
    ans/=(3*sqrt(3));
    ans+=0.005;
    printf("%.2f\n",ans);
}
void a3()
{
    printf("请输入数据个数:");
    int n;
    scanf("%d",&n);
    printf("请输入%d个数字:",n);
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
