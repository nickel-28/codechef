#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    if(n%2!=0)
    {
        // if(n==1) cout<<"1\n";
        // else if(n>1) cout<<n/2+1<<"\n";
        cout<<n/2+1<<"\n";
    }
    
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
