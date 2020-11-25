#include <stdio.h>

int main(){
	char name[10];
	
	printf("당신의 이름은 무엇입니까?\n");
	scanf("%s", name);
	printf("Hello I'm %s\n", name);

	return 0;
}
