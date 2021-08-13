#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double sum = 0.0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
    	int a = 0;
    	cin >> a;
    	sum += a;
    }

    double cocktail = sum/n;
    cout << cocktail;
}