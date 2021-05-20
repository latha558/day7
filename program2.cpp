#include<iostream>

#include<stack>
#include<vector>
#include<string>
using namespace std;
void paren(string s)
{
	char i;
	int fl=1;
		stack<char>st;
		//cout<<s.length()<<endl;
		for(int ch=0;ch<s.length();ch++) //for(auto i:s)
		{
			i=s[ch];
			//cout<<i<<endl;
			if(i=='[' || i=='{' || i=='(')
			{			
				st.push(i);
			}
			else{
				if(i==']' && !st.empty() && st.top()=='[')
				{
					st.pop();
				}
				else if(i=='}' && !st.empty() && st.top()=='{')
				{
					st.pop();
				}
				else if (i==')' && !st.empty() && st.top()=='(')
				{
					st.pop();
				}
				else{
					fl=0;
				}
			}
		}
		if (st.size()!=0 || fl==0)
		{
			cout<<"false";
		}
		else
		{
			cout<<"true";
		}
	}

int main(){


	//cin>>t;
	//while(t--)
	//{
		string s;
		cin>>s;
		paren(s);
		
	return 0;
}

