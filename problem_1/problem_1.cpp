#include <stdio.h>


int main(){
		int toplam=0;
	
	for(int i=0; i<1000; i++){
		
		if(i%3==0){
			toplam +=i;
		}
		else if(i%5==0){
			toplam +=i;
		}
		
}
	
	printf("Toplam sonucu : %d",toplam);
	
	return 0;
}
