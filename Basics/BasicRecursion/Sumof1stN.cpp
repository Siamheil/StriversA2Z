#include<bits/stdc++.h>
using namespace std;

int sumof1stN(int n){
	if(n==0) return 0;
    return n+sumof1stN(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<sumof1stN(n);
	return 0;
}
