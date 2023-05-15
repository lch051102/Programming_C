#include<stdio.h>
int main(){
	int a;
	printf("입력값 : "); 
	scanf("%d", &a);
	if(a%2==0){
		printf("숫자 %d은 짝수입니다.", a);
	}
	else printf("숫자 %d은 홀수입니다.", a);
}
