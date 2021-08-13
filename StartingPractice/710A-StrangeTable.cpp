// #include <iostream>
// #include <cmath>
// #define ll long long

// using namespace std;

// int main(int argc, char const *argv[])
// {
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		ll n,m,x;
// 		cin >>n>>m>>x;
// 		ll d = ceil((double)x/n);
// 		ll r = x%n;
// 		if(x%n==0)
// 			r=n;
// 		ll ans = (r-1)*m + d;
// 		cout << ans <<endl;
// 	}
// 	return 0;
// }
#include <iostream>
#include <cstring>

using namespace std;

class book
{
public:
	int pages, chapters;
	string author, name;
	double print_price, sale_price= 0;
	book(){
		pages=0;
		chapters=0;
		author = "";
		name = "";
	};
	void readData(){
		cin>>author>>name>>chapters>>pages;
	}
	void calculate(){
		if (pages>500)
			print_price = pages*0.35 + chapters*5.0 + 80.0;
		else
			print_price = pages*0.65 + chapters*7.5 + 120.0;
		sale_price = 1.25 * print_price;
	}
	void display(){
		cout<<name<<" "<<author<<" "<<print_price<<" "<<sale_price<<endl;
	}
	
};

int main()
{
	book c[3];
    for(int i=0;i<3;i++)
    	c[i].readData();
    
    for(int i=0;i<3;i++)
    	c[i].calculate();
    
    for(int i=0;i<3;i++)
        c[i].display();  

	return 0;
}