#include<stdio.h>
int main(){
	//de b�i cho pi = 3.14   v� b�n k�nh k�nh hinh tron dai dien = 5
	int PI = 3.14;
	int bankinh = 5; 
	int chuvi = 2 * PI * bankinh;	
	printf("Chu vi hinh tron la: %d",chuvi);
	
	int dientich = PI * bankinh * bankinh;
	printf("\n Dien tich hinh tron la: %d",dientich);
	
	return  0; 
} 
