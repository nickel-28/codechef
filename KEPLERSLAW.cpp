// KEPLERSLAW

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float m,n;
    m=(a*a)/(c*c*c);
    n=(b*b)/(d*d*d);
    // cout<<m<<" "<<n<<endl;
    if(m==n) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
