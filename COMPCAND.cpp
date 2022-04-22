#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n,k,x,y;
    cin>>n>>k;
    // int count=0;
    // while((n-k)>=k)
    // {
    //     n=n-k;
    //     count++;
    //     if(n==0){
    //         break;
    //     }
    // }
    // cout<<count<<"\n";
    x=n/k;
    y=n%k;
    if(n!=0){
        if(y==0){
            cout<<x<<"\n";
        }
        else cout<<"-1\n";
    }
    else if(n==0) cout<<"0\n";
    
    
    
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
