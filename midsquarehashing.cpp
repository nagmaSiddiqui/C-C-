#include<stdio.h>
int main(){
	int num;
	int tmp,temp;
	int temps,cp;
	printf("Enter number of key values => ");
	scanf("%d",&num);
	printf("\n\nAll the key values should be 4 digit distinct numbers\n\n");
	int kys[num], indx[num];
	for(int i=0;i<num;i++){
		printf("Enter key value %d => ",i+1);
		scanf("%d",&kys[i]);
	}
	for(int j=0;j<num;j++){
		tmp=kys[j];
		temp=tmp*tmp;
		temps=tmp*tmp;
		cp=tmp*tmp;
		tmp=tmp*tmp;
		tmp=tmp/100;
		temps=tmp/1000;
		tmp=cp-tmp*100;
		temps=temps*1000;
		temp=temp-temps*100-tmp;
		indx[j]=temp/100;
	}
	printf("\nValues allotted are\n\n");
	printf("Keys\tindex\n");
	for(int i=0;i<num;i++){
		printf("%d\t%d\n",kys[i],indx[i]);
	}
	return 0;
}
