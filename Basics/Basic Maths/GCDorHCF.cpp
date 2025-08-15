#include<bits/stdc++.h>
using namespace std;

int findGCD(int n1,int n2){
	int gcd=1;
	for(int i=1;i<=min(n2,n2);i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	return gcd;
}

int main(){
	
	int n1,n2;
	cin>>n1>>n2;
	
	int gcd=findGCD(n1,n2);
	cout<<"GCD is "<<gcd<<endl;
	return 0;
}
