#include <stdio.h>
#include <math.h>
 //2 kenar� verilen dik ��genin 3. kenar�n� bulan program

int main() {
  float a, b;
  printf("ucgenin 1. dik kenari uzunugunu giriniz:\n");
  scanf("%f", & a);
  printf("ucgenin 2. dik kenari uzunugunu giriniz:\n");
  scanf("%f", & b);
  printf("ucgenin hipotenusunun uzunlugu:\n%.2f ", sqrt(a * a + b * b));

}
