#include<stdio.h>
int main(){
	int a=0, i;
	for(i=1; i<=100; i++){
		if(i%2==0){
			a+=i;
		}
	}
	printf("1���� 100������ ¦���� ���� %d�Դϴ�.", a);
}
