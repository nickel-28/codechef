#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n,x,k,m;
    cin>>n>>x>>k;
    int a[n],b[n],i,count=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<n; i++)
    {
        m=abs(a[i]-b[i]);
        if(m<=k)
            count++;
    }
    // cout<<count<<endl;
    if(count>=x) cout<<"YES\n";
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
