#include <stdio.h>

int
main(int argc, char *argv[]){
	int sum = 0;
	int first =1;
	int second=2;
	int third = 0;
	while (third <= 4000000){
		third = first + second;
		if (third%2 == 0){
			sum+= third;
		}	
		first = second;
		second = third;
		
		}
	printf("%d", sum);
	}
