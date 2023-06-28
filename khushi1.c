#include<stdio.h>
void divide(int n){
	if(n%3==0 && n%5==0){
		printf("The number is divisible by 3 & 5 ");
	}else{
		printf("The number isnot divisible by 3 & 5");
	}
}

main(){
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	divide(n);
}
