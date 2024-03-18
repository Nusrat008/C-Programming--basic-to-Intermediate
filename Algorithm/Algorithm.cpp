#include<bits/stdc++.h>

using namespace std;

bool prime[1006];
void sieve(){
//	for(int i=2;i<=100;i++){
//		prime[i] = true;
//		
//	}
	memset(prime,true,sizeof(prime));
	prime[1] = false;
	int sq = sqrt(1000);
	for(int i = 2;i<=sq;i++){
		if(prime[i]){
			for(int j = i*i;j<=1000;j+=i){
				prime[j] =false;
			}
		}
	}
}

int main(){
	sieve();
	int n = 10;
	for(int i=1;i<=100;i++){
	
	if(prime[i]){
		printf("%d\t",i);
	}
//	if(prime[n]){
//		printf("prime\n");
//	}
//	else{
//		printf("Not prime\n");
//	}
}
	
	
	return 0;
}
