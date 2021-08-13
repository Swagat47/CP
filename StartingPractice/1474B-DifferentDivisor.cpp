#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >>n2;
	int x=1;
	while(n1--){
		int term = 3*x++ + 5;
		if(term%n2!=0){
			cout<<term<<endl;
		}
		else
			n1++;
	}
}