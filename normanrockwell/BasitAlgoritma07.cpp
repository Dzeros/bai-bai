#include <stdio.h>
//D��ar�dan girilen 3 say�n�n en b�y���n� bulan program
int main(){
int x,y,z;	 
printf("3 sayi girin:\n");
scanf("%d",&x);	 scanf("%d",&y);	scanf("%d",&z);	

if(x>y){
	if(x>z){
		printf("en buyuk sayi:%d \n", x);
	}
}
else{
   if(y>z){
   	     printf("en buyuk sayi: %d \n", y);
   }
   else{
   	     printf("en buyuk sayi: %d \n",z);
   }	
}	 
}
