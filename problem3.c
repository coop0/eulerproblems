#include <stdio.h>
#define num 600851475143
int
main(int argc, char *argv[]){
	int t;
	int i;
	int j;
	for (i=1; i<num; i++) {
		t=1;
		for(j=1; j<=20; j++){
			if (i%j != 0) {
				t = 0;
				break;	
		}
		}
	if (t) {
		printf("%d", i);
		break;
	}
	}
}
