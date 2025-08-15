#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
	int count=0;
	while(n){
		count++;
		n=n/10;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<count_digits(n);
	return 0;
}
