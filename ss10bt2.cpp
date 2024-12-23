#include<stdio.h>
int main(){
	int array[]={3,2,7,4,6};// co the thay doi gia tri
	int n=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n-i-1;i++){
			if(array[j]>array[j+i]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("array: \n");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
