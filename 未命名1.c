#include<stdio.h>

void M1(){
    char S;
    int num;
    int a,b,c,d;
A:
    printf("������һ����λ��");
    scanf("%d",&num);
    a = num / 10000;    //��λ
    b = num / 1000;     //ǧλ
    c = num % 100;      //ʮλ
    d = num %10;        //��λ
    if(a == d && b == c) 
        printf("��Ϊ������\n");
    else 
        printf("�ⲻ�ǻ�����\n");
    print("\n�����𣬻�������һ����? [���� Y ����һ��] \n");
    scanf("%s",&S);
    if(S == 'Y') 
        goto A;
}

void M2(){

}

int main(){
    int mode;
    printf("made by LSL\n");
    printf("\n");
    printf("��ѡ��ģʽ\n");
    printf("1 - ��ͨģʽ\n");
    printf("2 - ����ģʽ\n");
    scanf("%d",&mode);
    if(mode = 1){
        M1();
    } else {
        M2();
    }
    return 0;
}
