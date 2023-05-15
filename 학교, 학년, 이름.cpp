#include<stdio.h>
int main(){
	int a;
	char b[100];
	char c[100];
	printf("학교를 입력하세요: ");
	scanf("%s", b);
	printf("학년을 입력하세요: ");
	scanf("%d", &a);
	printf("이름을 입력하세요: ");
	scanf("%s", c);
	printf("%s\n", b);
	printf("%d학년\n", a);
	printf("%s입니다.\n", c);
}

