// MAKEPAL

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int count=0;
    
    // if(a[i]%2==0) cout<<"0\n";
    
    for(i=0; i<n; i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    cout<<(count)/2<<"\n";
    
    
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
