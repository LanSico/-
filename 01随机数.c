#include<stdio.h>
#include<conio.h>
#include<time.h>
main() {
	int a;
	srand(time(0));
	a = rand()%2;
	printf("%d", a);
	getch();
}