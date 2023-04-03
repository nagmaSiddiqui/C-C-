#include<stdio.h>
int main(){
	int num;
	printf("Enter number of key values => ");
	scanf("%d",&num);
	int kys[num], indx[num];
	float A=0.2236067;
	float cp=A;
	int ind;
	printf("\nAll keys should be 3 digit numbers\n\n");
	for(int i=0;i<num;i++){
		printf("Enter key %d => ",i+1);
		scanf("%d",&kys[i]);
	}
	for(int i=0;i<num;i++){
		cp=A;
		cp=cp*kys[i];
		cp=cp*100;
		ind=cp/100;
		indx[i]=ind;
	}
	printf("\n\nKey\tindex\n\n");
	for(int i=0;i<num;i++){
		printf("%d\t%d\n",kys[i],indx[i]);
	}
	return 0;
}
