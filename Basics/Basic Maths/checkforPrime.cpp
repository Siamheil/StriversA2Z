#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n){
	if(n==2)cout<<"no is prime"<<endl;
	int flag=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<"no is not prime"<<endl;
			flag=1;
			break;
		}
	}
	if (flag==0){
		cout<<"no is prime"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	
	checkPrime(n);
	
	return 0;
}
