#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	int CS,SS;
	printf("���������������߳�(����)���ÿո������");
	scanf("%d %d %d",&a,&b,&c);
	CS = a + b + c;
	printf("�������ܳ���%d/n",CS);
	SS = sqrt(CS/2 * (CS/2 - a) * (CS/2 - b) * (CS/2 - c));
	printf("�����������%d/n",SS);
	return 0;
}
