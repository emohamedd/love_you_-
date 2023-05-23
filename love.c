#include <stdio.h>

int main() {
	int i = 0;
	char str[10];
	
	printf("\033[0;33mwhat is Your name 😇\n\033[0m"); 
	scanf("%s", str);
	
	printf("\033[0;35mHow Much DO you love me (1-10): 😘💓\n\033[0m");
	scanf("%d", &i);
	
	if (i <= 0) {
		printf("\033[0;32mDon't Need your love 👀\n\033[0m"); 
		return 0;
	} else {
		printf("\033[0;32mI LOve you Very\n\033[0m"); 
	}
	
	while (i > 0) {
		printf("\033[0;31m\t   Very\n\033[0m");
		i--;
	}
	
	printf("\033[0;35m\tMuch %s 🥰\n\n\033[0m", str);
	return 0;
}
