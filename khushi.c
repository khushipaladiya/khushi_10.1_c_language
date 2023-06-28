#include<stdio.h>
void cube(int n){
	printf("Cube is:%d",n*n*n);
}
void main(){
	int n;

printf("Enter the Number: ");
scanf("%d",&n);
cube(n);
}
