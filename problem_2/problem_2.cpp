#include<stdio.h>


int main(){
	
	int fib_1=1;
	int fib_2=2;
	int fib_ara=0;
	int fib_toplam=0;
	
	while(fib_2< 4000000){
		
		if(fib_2 % 2==0){
			fib_toplam +=fib_2; 
		}
		fib_ara=fib_2;
		fib_2=fib_2+fib_1;
		fib_1=fib_ara;
		
	}
	printf("Toplamin sonucu :%d",fib_toplam);
	
	
	
	
	return 0;
}
