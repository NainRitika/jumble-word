#include<stdio.h>
#include<math.h>

int main(){
	int n,temp,count=0;
	scanf("%d",&n);
	temp=n;
	while(temp>0){
		temp=temp/10;
		count++;
	}
	int i=0,sum=0,digit;
	temp=n;
	for(i=0;i<count;i++){
		digit=temp%10;
		sum=sum+pow(digit,count);
		temp=temp/10;
	}
	if (sum==n){
		printf("armstrong number");
	}
	else{
		printf("not an armstrong number");
	}
	return 0;
}
