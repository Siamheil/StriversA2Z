#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
	int temp=n;
	int rev=0;
	while(temp){
		rev=rev*10+(temp%10);
		temp=temp/10;
	}
	if(rev==n) return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	if(checkPalindrome(n)){
		cout<<"given no is palindrome"<<endl;
	}else{
		cout<<"given no is not palindrome"<<endl;
	}
	return 0;
}
