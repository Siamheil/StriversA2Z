#include<bits/stdc++.h>
using namespace std;

void ReverseNumber(int n){
	int temp=n;
	int rev=0;
	while(temp){
		rev=rev*10+(temp%10);
		temp=temp/10;
	}
	cout<<rev;
}

int main(){
	int n;
	cin>>n;
	
	ReverseNumber(n);
	return 0;
}
