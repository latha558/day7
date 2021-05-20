#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin>>n;
	int b[n-1];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	stack<int>st;
	st.push(0);
	int len=0;
	for(int i=1;i<n;i++)
	{ 
		if(b[i]>0)
		{
			st.push(i);
			continue;
		}
		if(st.top()==-1*b[i])
		{
			st.pop();
			len=max(len,i-st.top());
		}
		else{
			st.push(i);
		}
	}
	cout<<len<<endl;
	return 0;
}
