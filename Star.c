#include<stdio.h>

int main(){
	int y,k;
	
	
	for(y=0;y<5;y++){
		for(k=0;k<y+1;k++){
			printf("*");
		}
		printf("\n");
		
	}
	for(y=4;y>0;y--){
		for(k=0;k<y;k++){
			printf("*");
		}
		printf("\n");
	}
}
