#include<stdio.h>

int main(){
	int n;
	int a,b,c,d;
	printf("����һ����λ����");
	scanf("%d",&n);
	a = n % 10;
	b = (n/10) % 10;
	c = (n/100) % 10;
	d = (n/1000) % 10;
	printf("��λ��%d\n",a);
	printf("ʮλ��%d\n",b);
	printf("��λ��%d\n",c);
	printf("ǧλ��%d\n",d);
	return 0;
}
