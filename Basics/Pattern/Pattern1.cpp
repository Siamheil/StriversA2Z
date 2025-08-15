#include<bits/stdc++.h>
using namespace std;

void Rect_pattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	
	Rect_pattern(n);
	return 0;
}
