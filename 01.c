#include<stdio.h>

void M1(){
    char S;
    int num;
    int a,b,c,d;
A:
    printf("������һ����λ�� ");
    scanf("%d",&num);
    a = num / 10000;    	 //��λ
    b = num / 1000 % 10;     //ǧλ
    c = num % 100 / 10;      //ʮλ
    d = num %10;        	 //��λ
    if(a == d && b == c) 
        printf("��Ϊ������\n");
    else 
        printf("�ⲻ�ǻ�����\n");
    printf("\n�����𣬻�������һ����? [���� Y ����һ��] \n");
    scanf("%s",&S);
    if(S == 'Y'){
	    printf("\n");
	    printf("\n");
	    printf("\n");
        goto A;
    }
}

void M2(){
	int T;
	char S;
    long num[113];
    int a[113],b[113],c[113],d[113];
	int i,j;
B:
	printf("����������ٸ����أ�1 ~ 114�� ");
	scanf("%d",&T);
	for(i = 0;i <= T - 1;i++){
    printf("\n������� %d ����λ�� ",i + 1);
    scanf("%d",&num[i]);
    a[i] = num[i] / 10000;    		//��λ
    b[i] = num[i] / 1000 % 10;     //ǧλ
    c[i] = num[i] % 100 / 10;      //ʮλ
    d[i] = num[i] % 10;        	//��λ
	}
	for(j = 0;j <= T - 1;j++){
    if(a[j] == d[j] && b[j] == c[j]) 
        printf("\n%d �ǻ�����\n",num[j]);
    else 
        printf("\n%d ���ǻ�����\n",num[j]);
	}
    printf("\n�����𣬻�������һ����? [���� Y ����һ��] \n");
    scanf("%s",&S);
    if(S == 'Y'){
	    printf("\n");
	    printf("\n");
	    printf("\n");
        goto B;
	}
}

int main(){
    int m;
    printf("made by LSL\n");
    printf("\n");
    printf("��ѡ��ģʽ\n");
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
