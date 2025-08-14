#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age>=18&&age<=45){
		cout<<"you are adult";
	}
	else if(age>45){
		cout<<"you are old";
	}else{
		cout<<"you are not adult";
	}
	return 0;
}
