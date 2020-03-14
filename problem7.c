#include <stdio.h>
#define num 10001
int
main(int argc, char *argv[]){
	int t;
	int i;
	int j;
	int counter;
	counter = 0;
	for (i=1; i<1000000000; i++) {
		t=1;
		for(j=2; j<i; j++){
			if (i%j == 0) {
				t = 0;
				break;	
		}
		}
	if (t) {
		counter +=1;
		if (counter == 10002) {
			printf("%d",i);
			break;
	}
	}
}
}