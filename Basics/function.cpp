#include<bits/stdc++.h>
using namespace std;

void funToPrint1ton(int n){ //call by value
	for(int i=1;i<=n;i++){
		cout<<i<<endl;
	}
}

int funToPrint1tonreferance(int &n){ //call by referance
	n++;
	return n;
}

int main(){
	int n;
	cin>>n;
	funToPrint1ton(n);
	cout<<funToPrint1tonreferance(n);
	
	return 0;
}
