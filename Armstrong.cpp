#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int s=0;
	    int x=n;
	    while(n>0)
	    {
	        int rem=n%10;
	        s+=pow(rem,3);
	        n=n/10;
	    }
	    if(x==s)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
