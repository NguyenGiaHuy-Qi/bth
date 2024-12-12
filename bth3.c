#include<stdio.h>
int main(){
	float usd,eur,gbp,jpy,vnd,n;
	int t;
	printf("=======CHUONG TRINH CHUYEN DOI TIEN TE=======\n");
	printf("1.USD to VND\n");
	printf("2.EUR to VND\n");
	printf("3.GBP to VND\n");
	printf("4.JPY to VND\n");
	printf("5.VND to USD\n");
	printf("6.VND to EUR\n");
	printf("7.VND to GBP\n");
	printf("8.VND to JPY\n");
	printf("Nhap don vi tien te ban muon chuyen doi:");
	scanf("%d",&t);
	printf("Nhap so tien ban muon chuyen doi: ");
	scanf("%f",&n);
	switch(t){
		case 1:
			vnd = n * 23500;
			printf("VND:%.2f",vnd);
			break;
		case 2:
			vnd = n * 25000;
			printf("VND:%.2f",vnd);
			break;
		case 3:
			vnd = n * 28000;
			printf("VND:%.2f",vnd);
			break;
		case 4:
			vnd = n * 180;
			printf("VND:%.2f",vnd);
			break;
		case 5:
			usd = n / 23500;
			printf("USD:%.2f",usd);
			break;
		case 6:
			eur = n / 25000;
			printf("EUR:%.2f",eur);
			break;
		case 7:
			usd = n / 28000;
			printf("bgp:%.2f",gbp);
			break;
		case 8:
			jpy = n / 180;
			printf("JPY:%.2f",jpy);
			break;
	}return 0;
}