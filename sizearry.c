#include<stdio.h>
main(){
	int a,b,arr[a],arr1[b],i;
	printf("Enter size of arry of A :-");
	scanf("%d",&arr[a]);	
	printf("Enter size of arry of B :-");
	scanf("%d",&arr1[b]);
	printf("Enter A arry elements:-");
	for(i=0;i<=a;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter A element :-");
	for(i=0;i<=a;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("Enter b arry elements:-");
	for(i=0;i<=b;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter b element :-");
	for(i=0;i<=b;i++){
		printf("%d",arr1[i]);
	}
	printf("\n");
}
