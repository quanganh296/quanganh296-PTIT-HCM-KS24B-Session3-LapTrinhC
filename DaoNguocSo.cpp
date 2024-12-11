#include <iostream>
#include<stdio.h> 
#include<math.h> 
using namespace std;
int main()
{
int n;
scanf("%d",&n);
int HangNghin,HangTram,HangChuc,HangDonVi;
HangNghin=n/1000;
HangTram= (n%1000)/100;
HangChuc=(n%100)/10;
HangDonVi=n%10;
long long tong=0;
tong=HangDonVi*1000+HangChuc*100+HangTram*10+HangNghin;
printf("Tong 4 chu so la: %d \n",tong);



	return 0;
}
