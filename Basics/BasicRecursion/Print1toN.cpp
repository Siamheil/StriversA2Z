#include<bits/stdc++.h>
using namespace std;

void print1toN(int n){
	if(n==0){
		return;
	}
	print1toN(n-1);
	cout<<n<<endl;
}

int main(){
	int n;
	cin>>n;
	print1toN(n);
	return 0;
}
