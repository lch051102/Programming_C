#include<stdio.h>
int main(){
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	if(a>=90){
		printf("%d�� A�����Դϴ�.", a);
	}
	else if(a>=80){
		printf("%d�� B�����Դϴ�.", a);
	}
	else if(a>=70){
		printf("%d�� C�����Դϴ�.", a);
	}
	else if(a>=60){
		printf("%d�� D�����Դϴ�.", a);
	}
	else printf("%d�� F�����Դϴ�.", a);
}
