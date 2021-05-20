#include<iostream>
#include<stack>
using namespace std;
lass Solution
{
    public:
      bool isValid(string s) {
	
       int flag=0;
        stack<char> st;
        if (s.length()==1 || s.length()==0 ) return false;
        for(auto i:s)
        {
            if((i=='(') || (i=='[')|| (i=='{')) {
                st.push(i); 
            }
            else{
                if(!st.empty())
                {   flag++;
                    if(i==')' && st.top()=='(' ) {st.pop();}
                    else
                        if(i=='}' && st.top()=='{') {st.pop();}
                    else
                        if(i==']' && st.top()=='[' ) {st.pop();}
                    else
                    {
                       return false;}
                    
                }
            }
        }
         //if (flag ==1) return true;
         if(flag!=0 && s.length() ==0 )
            return  true;
        else
         if(st.empty() && s.length() ==0)
             return true;
         else
            return false;
                
   }
    };

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.isValid(s)<<endl;
	}
	return 0;
} 
