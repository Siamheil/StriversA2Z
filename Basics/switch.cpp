#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	cin>>age;
	switch(age){
		case 18:
			cout<<"you are able to vote this year";
			break;
		case 12:
			cout<<"you are not able to vote this year ";
			break;
		default:
		cout<<"you are an indian citizen";
		break;	
	}
	return 0;
}
