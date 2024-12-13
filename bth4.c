#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		if(n % i == 0){
		printf("Vay cac uoc cua n la %d\n",i);
		}
	}return 0;
}