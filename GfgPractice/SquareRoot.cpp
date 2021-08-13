#include <iostream>

using namespace std;

int method1(int n){
	for (int i = 0; i < n; ++i)
	{
		if(i*i==n)
			return i;
		if(i*i>n)
			return i-1;
	}
	return 0;
}

int method2(int n){
	int l=1, r=n, ans=0;
	while(l<=r){
		int mid = (l+r)/2;
		if(mid*mid == n)
			return mid;
		//to get an integer value closest to the sqrt of the no.
		if(mid*mid < n){
			l = mid+1;
			ans = mid;
		}
		else
			r=mid-1;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >>n;
	//int x =method1(n);
	int x = method2(n);
	cout<<x; 
	return 0;
}