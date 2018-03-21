#include <stdio.h>
int main(){
	int num1;
	int num2;
	int abs;
	int max;
	scanf("%d %d",&num1,&num2);
	if (num1-num2>0){
	 abs=num1-num2;
	}else{
	 abs=-(num1-num2);
	}
	if(num1>num2){
	 max=num1;
	}else{
	 max=num2;
	}
	
	printf("%d %d %d %d %d %d %d %d",num1+num2,num1-num2,num1*num2,num1/num2,num1/num2,max,num1==num2);
	}
