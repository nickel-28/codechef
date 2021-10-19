// FLOW004

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0,first, last;
	    cin>>n;
	    first = n;
	    last = n%10;
	    while(n>=10){
	        n=n/10;
	    }
	    first=n;
	    sum=first+last;
	    cout<<sum<<endl;
	}
	return 0;
}
