#include<stdio.h>
#include<stdlib.h>

int main(void){
	int B,D;
	int *ptr[4];
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	
	for(B=0;B<4;B++){
		ptr[B]=array[B];
	}

	for(B=0;B<4;B++){
		for(D=0;D<3;D++){
			printf("%3d", *(ptr[B]+D));
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 
