#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    int a[n], b[n],count=0;
    a[-1]=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=0; i<n; i++){
        // a[i]=a[i]-a[i-1];
        // cout<<a[i]<<endl;
        if((a[i]-a[i-1])>=b[i]){
            count++;
        }
        // a[i+1]-a[i];
    }
    cout<<count<<"\n";
    
    
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
