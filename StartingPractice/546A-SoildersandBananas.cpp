#include <iostream>

using namespace std;

int main(){
	int cost, budget, n;

	cin>>cost>>budget>>n;

	int amt = cost*n*(n+1)/2;

	if(amt > budget)
		cout << amt-budget;
	else
		cout << 0;

	return 0;
}