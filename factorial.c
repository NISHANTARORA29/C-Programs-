#include<stdio.h>
int factorial(int n){
	if(n==1){
		return n;
	}
	return n * factorial(n-1);
}
int main(){
	int n;
	scanf("%d");
	int ans = factorial(n);
	printf("%d",ans);
}
