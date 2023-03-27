#include<stdio.h>

int sum(int a[]){
	
	int i,sum=0;
	
	for (i=0 ; i<=9 ; i++){
		
		sum+=a[i];
	}
	
	return sum;
}

int main(){
	
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("%d",sum(a));
	
	return 0;
}

