#include<stdio.h>
int main(){
	int hour,giolam,tienluong = 0,tienphucap = 0;
	printf("Luong theo gio: ");
	scanf("%d",&hour);
	printf("Nhap so gio lam trong 1 thang: ");
	scanf("%d",&giolam);
	if(giolam > 160){
		tienluong = hour*giolam;
		tienphucap = hour*giolam*0.1;
		printf("Vay tien luong trong thang la %d\n",tienluong);
		printf("Vay tien phu cap la %d",tienphucap);
	}else{
		tienluong = hour*giolam;
		printf("Vay tien luong trong thang la %d",tienluong);
	}
	return 0;
}