#include <stdio.h>

double factorial (int n){
	if(n==0) return 1;
	return n*factorial(n-1);
}

int main(){
	int n, m, t;
	scanf("%d",&t);
	double lst[t];
	int i=0;
	while (i<t){
		scanf("%d %d",&n,&m);
		lst[i++]=factorial(m)/(factorial(n)*factorial(m-n));
	}
	
	while(i--){
		printf("%.lf\n",lst[t-i-1]);
	}
	
}