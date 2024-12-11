#include <iostream>
#include<stdio.h> 
#include<math.h> 
using namespace std;
int main()
{
float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
printf("Diem 3 mon \n");
printf("Toan: %.2f Van: %.2f Anh: %.2f \n",a,b,c); 
float tong=0,trungbinh=0;
 tong= a+b+c;
 trungbinh = (a+b+c)/3;
printf("Tong 3 diem: %.2f\n",tong);
printf("Diem trung binh 3 mon: %.2f\n",trungbinh); 
	return 0;
}
