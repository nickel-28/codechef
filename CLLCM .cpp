#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int N;
    cin>>N;
    int a[N],i,count=0;
    for(i=0; i<N; i++){
        cin>>a[i];
    }
    for(i=0; i<N; i++){
        if(a[i]%2==0){
            cout<<"NO\n";
            return;
        }
        // else if(a[i]%2!=0 && a[i]%N!=0){
        //     count=0;
        // }
        
    }
    cout<<"YES\n";
    
        // if(a[i]%2!=0 && a[i]%N==0){
        //     cout<<"YES\n";
        // }
        // else if(a[i]%2!=0 && a[i]%N!=0){
        //     cout<<"NO\n";
        // }
    
    
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
