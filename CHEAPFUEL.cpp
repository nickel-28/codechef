// CHEAPFUEL

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int x,y,a,b,k,m,n;
    cin>>x>>y>>a>>b>>k;
    m=x+(k*a);
    n=y+(k*b);
    if(m<n) cout<<"PETROL\n";
    else if(m>n) cout<<"DIESEL\n";
    else cout<<"SAME PRICE\n";
    
    
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
