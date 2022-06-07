#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int s=0;
	int e=n-1;

	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}

	for (int i = 0; i < n-1; ++i)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}