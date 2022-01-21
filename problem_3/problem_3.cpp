#include<stdio.h>
#include <stdint.h>


int main (){
	
	unsigned long long int   number =600851475143;
	int bolen =2;
	int x =0;
	
	while(1){
		if(number % bolen ==0){
			number =number/bolen;
			x++;	
		}
		else{
			bolen = bolen + 1;
		}
		if(number == 1){
			break;
		}
		printf("number : %d  bolen : %d boldu : %d\n",number,bolen,x);
	}
	
	
	printf("En buyuk asal bölen = %d",bolen);
	
	return 0;
}
