// FLOW013

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int a,b,c,s;
    cin>>a>>b>>c;
    s=a+b+c;
    
    if(s==180 && ((a+b)>c || (b+c)>a || (c+a)>b)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
