#include<stdio.h>

void M1(){
	char  S; 
	double w;	//���� 
	double p;	//Ӷ��
	int again;
	while(again){
		printf("���������棺");
		scanf("%lf",&w);
		if(w < 10){
			p = w * 0.1;
		}
		else if(w > 10 && w <= 20){
			p = 10 * 0.1 + (w - 10) * 0.075;
		}
		else if(w > 20 && w <= 40){
			p = 10 * 0.1 + 10 * 0.075 + (w - 20) * 0.05; 
		}
		else if(w > 40 && w <= 60){
			p = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (w - 40) * 0.03; 
		}
		else if(w > 60 && w <= 100){
			p = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (w - 60) * 0.015;
		}
		else{
			p = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (w - 100) * 0.001;
		}
		printf("��������Ӷ�� %lf \n",p);
		printf("\n������һ�Σ� [���� Y ����һ�� \n");
		scanf("%s",&S);
		if(S == 'Y' || S == 'y'){
			printf("\n");
			printf("\n");
			printf("\n");
			again = 1;
		} else {
			again = 0;
		}
	}
}
void M2(){
	char  S;
	int T;
	double w[113];	//����
	double p[113];	//Ӷ��
	int i,j;
	int again;
	while(again){
	printf("����Ҫ��������������أ���1 ~ 114����");
	scanf("%d",&T);
	for(i = 0;i <= T - 1;i++){
		printf("������� %d �����ݣ�",i + 1);
		scanf("%lf",&w[i]);
		if(w[i] < 10){
			p[i] = w[i] * 0.1;
		}
		else if(w[i] > 10 && w[i] <= 20){
			p[i] = 10 * 0.1 + (w[i] - 10) * 0.075;
		}
		else if(w[i] > 20 && w[i] <= 40){
			p[i] = 10 * 0.1 + 10 * 0.075 + (w[i] - 20) * 0.05; 
		}
		else if(w[i] > 40 && w[i] <= 60){
			p[i] = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (w[i] - 40) * 0.03;
		} 
		else if(w[i] > 60 && w[i] <= 100){
			p[i] = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (w[i] - 60) * 0.015;
		}
		else{
			p[i] = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (w[i] - 100) * 0.001;
		}
	}
	for(j = 0;j <= T - 1;j++){
		printf("\n�� %d �����ݵ�Ӷ��Ϊ %lf \n",j + 1,p[j]);
		
	}
	printf("\n������һ�Σ� [���� Y ����һ�� \n");
		scanf("%s",&S);
		if(S == 'Y' || S == 'y'){
			printf("\n");
			printf("\n");
			printf("\n");
			again = 1;
		} else {
			again = 0;
		}
	}
}
int main(){
	int m;
    printf("made by LSL\n");
    printf("\n");
    printf("����������ѡ��ģʽ\n");
    printf("1 - ��ͨģʽ\n");
    printf("2 - ����ģʽ\n");
    scanf("%d",&m);
    if(m == 1){
        M1();
    } else {
        M2();
    }
    return 0;
}
