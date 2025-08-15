#include<bits/stdc++.h>
using namespace std;

void Number_traingle(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	
	Number_traingle(n);
	return 0;
}
