#include <iostream>
using namespace std;

void input(int arr[], int n){
	for(int i=0; i<n; i++)
		cin>>arr[i];
}

void output(int arr[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

void reverseArray(int arr[], int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

// Method1: Time=O(n) Space=O(d)
void rotate1(int arr[], int n, int d){
	int t[d];
	for (int i = 0; i < d; ++i)
	{
		t[i]=arr[i];
	}
	for (int i = d; i < n; ++i)
	{
		arr[i-d]=arr[i];
	}
	for (int i = n-d; i < n; ++i)
	{
		arr[i]=t[i-n+d];
	}
}
// Method2: Time = O(n+d), Space=O(1)
void rotate2(int arr[], int n, int d){
	for (int i = 0; i < d; ++i)
	{
		int temp = arr[0];
		for (int j = 0; j < n-1; ++j)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
}
// Method3: Time=O(n), Space=O(1)
void rotate3(int arr[], int n, int d){
	if(d==0)
		return;
	else{
		reverseArray(arr, 0, d-1);
		reverseArray(arr, d, n-1);
		reverseArray(arr, 0, n-1);
	}
}

int main(){
	int n,d;
	cin >> n >>d;
	int arr[n];
	input(arr,n);
	rotate3(arr,n,d);
	output(arr,n);
}