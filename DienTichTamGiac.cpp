#include <iostream>
#include<stdio.h> 
#include<math.h> 
using namespace std;
int main()
{
float a,b,c;
float h,CanhDay,CanhBen;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
if(a>b&&a>c)
{
printf("canh day: %f \n",a);
CanhDay=a;
if(b<a&&b>c)
{
printf("chieu cao: %f \n",b);
h=b;
printf("canh ben: %f \n",c);
CanhBen=c;
}
 else if(c>b&&c<a)
{
printf("chieu cao: %f \n",c);
h=c;
printf("canh ben: %f \n",b);
CanhBen=b;
}
}
 else if(b>a&&b>c)
{
printf("canh day: %f \n",b);
CanhDay=b;
if(a<b&&a>c)
{
printf("chieu cao: %f \n",a);
h=a;
printf("canh ben: %f \n",c);
CanhBen=c;
}
 else if(c>a&&c<b)
{
printf("chieu cao: %f \n",c);
h=c;
printf("canh ben: %f \n",a);
CanhBen=a;
}
}
else
{
printf("canh day: %f \n",c);
CanhDay=c;
if(a<c&&a>b)
{
printf("chieu cao: %f \n",a);
h=a;
printf("canh ben: %f \n",b);
CanhBen=b;
}
 else if(c>b&&b>a)
{
printf("chieu cao: %f \n",b);
h=b;
printf("canh ben: %f \n",a);
CanhBen=a;
} 
}
float S=0;
S= (CanhDay*h)/2;
printf("Dien Tich Tam Giac là: %.2f \n",S);
	return 0;
}
