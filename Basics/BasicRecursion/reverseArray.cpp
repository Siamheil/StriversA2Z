#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[]){
	int start=0,end=4;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[5]={2,3,6,7,8};
	reverseArray(arr);
	return 0;
}
