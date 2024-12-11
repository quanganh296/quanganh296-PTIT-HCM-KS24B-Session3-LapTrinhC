#include<iostream>
#include<stdio.h> 
#include <string.h>
using namespace std;
int main()
{
	char s[100];
	printf("Hay nhap ten cua ban: "); 
	fgets(s, sizeof(s), stdin);
        printf("Xin chào %s ",s); 
	
	return 0;
}
