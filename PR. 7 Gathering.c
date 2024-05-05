#include<stdio.h>

int addtions(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int multi(int a,int b){
	return a*b;
}

int divitions(int a,int b){
	return a/b;
}

int modoyal(int a,int b){
	return a%b;
}
int main(){
	int ch,a,b;
	do{
	printf("Enter nuber A:-");
	scanf("%d",&a);
	printf("Enter nuber b:-");
	scanf("%d",&b);
	
	printf("Press nu. 1 for + \n");
	printf("Press nu. 2 for - \n");
	printf("Press nu. 3 for * \n");
	printf("Press nu. 4 for / \n");
	printf("Press nu. 5 for %% \n");
	scanf("%d",&ch);
	
	if(ch == 0){
		 return 0;
	}
	
	switch(ch){
		case 1 :
			printf("your press 1 because + %d \n",addtions( a, b));
			break;
		case 2 :
			printf("your press 2 because - %d \n",sub( a, b));
			break;
		case 3 :
			printf("your press 3 because * %d \n",multi( a, b));
			break;
		case 4 :
			printf("your press 4 because / %d \n",divitions( a, b));
			break;
		case 5 :
			printf("your press 5 because % %d \n",modoyal( a, b));
			break;
		default:
			printf("Invaild choich \n");
		}
	}
	while (ch != 0);

    return 0;
}
