#include<stdio.h>
int main(){
	int n,count = 0;
	printf("Nhap so n: ");
	scanf("%d",&n);
	if(n < 2){
		printf("So nay khong phai la so nguyen to");
	}else{
		for(int i = 1;i<=n;i++){
			if(n % i == 0){
			count += 1;}	
			}if(count == 2){
				printf("So nay la so nguyen to");
			}else{
				printf("So nay khong phai la so nguyen to");
			}
		
	}return 0 ;
}