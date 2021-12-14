#include<stdio.h>

int main(void){
	int a,b;
	printf("Upisi dva cijela broja kako bi utvrdio koji je veci:");
	scanf("%d %d",&a,&b);
	
	if(a>b) printf("Broj %d je veci od %d.\n",a,b);
	else if(a==b) printf("Brojevi su identicni.\n");
	else printf("Broj %d je manji od broja %d\n",a,b);
	printf("Ovo je testna promjena.\n");
	printf("Ovo je testna promjena nakon stavljanja na GitHub.\n");	
	return 0;
}

