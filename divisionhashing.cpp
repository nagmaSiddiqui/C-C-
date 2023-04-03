#include<stdio.h>
int main(){
	int num,slots,ind;
	printf("Enter number of key: ");
	scanf("%d",&num);
	printf("Enter number of empty slots: ");
	scanf("%d",&slots);
	int kys[num],indx[num];
	int count=0;
	int key,temp;
	if(num<=slots){
		for(int i=0;i<num;i++){
			printf("Enter key value %d: ",i+1);
			scanf("%d",&kys[i]);
		}
		printf("Key \t Index\n\n");
		for(int j=0;j<num;j++){
			printf("%d\t%d\n",kys[j],kys[j]%slots);
		}
	}
	else{
		printf("Number of keys is greater than number of slots\n");
	}
	return 0;
}
