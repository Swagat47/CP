#include <iostream>
#include <stack>
#include <string>
#include <ctype.h>

using namespace std;

int prec(char c){
	if (c == '^')
		return 3;
	else if(c == '*' || c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else 
		return -1;
}

string infixtopostfix(string s){
	stack <char> st;
	string result="";
	for (int i = 0; i < s.length(); ++i){
		char ch = s[i];

		if(isalpha(ch))
			result += ch;

		else if (ch == '(')
			st.push(ch);

		else if (ch==')')
		{
			while(st.top()!=')'){
				result+=st.top();
				st.pop();
			}
			st.pop();
		}

		else 
		{
			while(!st.empty() && prec(ch)<=prec(st.top())){
				result+=st.top();
				st.pop();
			}
			st.push(ch);
		}
	}

	while(!st.empty()){
		result+=st.top();
		st.pop();
	}

	//cout<<result<<endl;
	return result;
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		string ans;
		string s;
		cin >> s;
		cout<<s;
		ans = infixtopostfix(s);
		cout<<ans<<endl;
	}
	return 0;
}
