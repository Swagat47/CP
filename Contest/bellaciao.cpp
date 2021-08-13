#include <iostream>
using namespace std;
#define ll long long

int main() {
	int tc;
    cin>>tc;
    while(tc--){
        ll D,d,P,Q;
        cin >>D>>d>>P>>Q;
        ll n = D/d;
        ll r = D%d;
        ll sum = (d*n*(2*P + (n-1)*Q))/2 + r*(P+n*Q);
        cout<<sum<<endl;
    }
    return 0;
}

