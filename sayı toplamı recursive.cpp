#include <stdio.h>
int topla (int sayi,int t){
	if(sayi<=1000){ //say� 1000 i ge�mediyse i�lem bitmemi�tir.
	  t=t+sayi;
	  topla(sayi+1,t); //say�y� 1 artt�r�p fonksiyona yolla.
}
    else //i�lem biter ,sonucu 'return' ile main'e yolla.
      return t;
      
	
		
	
}
 int main (){
 	int toplam=0,sonuc;
 	sonuc= topla(0,toplam);
 	printf("sonuc:%d",sonuc);
 	
 	
 	
 }
