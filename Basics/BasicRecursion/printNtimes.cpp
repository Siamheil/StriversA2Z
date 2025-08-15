#include<bits/stdc++.h>
using namespace std;

void printNtimes(int n){
	if(n==0){
		return;
	}
	cout<<"hello "<<endl;
	printNtimes(n-1);
}

int main(){
	int n;
	cin>>n;
	printNtimes(n);
	
	
	return 0;
}
