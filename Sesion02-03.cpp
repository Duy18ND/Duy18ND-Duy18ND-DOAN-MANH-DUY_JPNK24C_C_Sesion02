#include<stdio.h>
int main(){
	//khai bao bien num1, num2 
	int num1 = 20;
	int num2 = 13; 
	
	//tinh tong num1 + num2
	int sum = num1 + num2; 
	printf("ket qua tong la:%d + %d = %d",num1,num2,sum); 
	int hieu = num1 - num2;
	printf("\n ket qua hieu la: %d - %d = %d",num1,num2,hieu);
	int nhan = num1 * num2;
	printf("\n ket qua phep nhan la:  %d * %d = %d",num1,num2,nhan);
	int chia = num1 / num2;
	printf("\n ket qua cua phep chia la: %d / %d = %d",num1,num2,chia); 
	return 0; 
} 
