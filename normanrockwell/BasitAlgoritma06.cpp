#include<stdio.h>
//N say�s�na kadar olan say�lar�n karelerinin toplam�n�(n dahil de�il) bulan program
int main(){
	int n,i;
	int toplam=0;
	printf("sayi girin:");
    scanf("%d",&n);

    for(i=0; i<n; i++ ){
    	
    	toplam= toplam + (i*i);
	}
    printf("N sayisina kadar olan sayilarin karelerinin toplami:%d\n", toplam);
}
