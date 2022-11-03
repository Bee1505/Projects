#include<stdio.h>

int main(){
       
	int LA[]= {1,3,5,7,8};
	int n=5, item = 5;
	int i=0,j=0;
	print("The original array elements are\n");
	for(i=0; i<n; i++){
		printf("LA[%d]= %d\n", i, LA[i]);
	}
	while(j<n){
		if(LA[j]==item){
			break;
		}
		j=j+1;
	}
	printf("Found the element %d at position %d\n",item,j+1);
}
