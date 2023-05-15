#include<stdio.h>
int main(){
	int a;
	printf("점수를 입력하세요 : ");
	scanf("%d", &a);
	if(a>=90){
		printf("%d점 A학점입니다.", a);
	}
	else if(a>=80){
		printf("%d점 B학점입니다.", a);
	}
	else if(a>=70){
		printf("%d점 C학점입니다.", a);
	}
	else if(a>=60){
		printf("%d점 D학점입니다.", a);
	}
	else printf("%d점 F학점입니다.", a);
}
