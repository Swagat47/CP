#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int Sereja = 0, Dima = 0;
	int count=0;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int* low = &a[0];
	int* high = &a[n-1];

	while(count<n){
		if(count%2==0)
			Sereja += (*low>*high)? *low:*high;
		else
			Dima += (*low>*high)? *low:*high;

		if (*low>*high)
			low++;
		else
			high--;

		count++;
	}

	cout<<Sereja<<" "<<Dima;
	return 0;
}