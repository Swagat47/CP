#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		string s;
		cin >> s;
		int l = s.length();

		for (int j = 0; j < l; ++j)
	    {
			if (j%2!=0){

				if (s.at(j) != 122)
					s.at(j) = 122;
				else
					s.at(j)--;
			}

			else{
				if (s.at(j) != 97)
					s.at(j) = 97;
				else
					s.at(j)++;
			}
		}
		
		cout << s <<endl;	
	}
	return 0;
}