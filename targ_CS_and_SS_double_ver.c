#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c;
	double CS,SS;
	printf("���������������߳�(����)���ÿո������");
	scanf("%lf %lf %lf",&a,&b,&c);
	CS = a + b + c;
	printf("�������ܳ���%lf\n",CS);
	SS = sqrt(CS/2 * (CS/2 - a) * (CS/2 - b) * (CS/2 - c));
	printf("�����������%lf\n",SS);
	return 0;
}
