// STBARR

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    // int max=a[0];
    int count=0,count2=0;
    int flag=0;
    // cout<<*max_element(a, a + n);
    int p=*max_element(a, a + n);
    // cout<<p;
    for(i=0; i<n-1; i++){
        
        if(a[i]==a[i+1]){
            count=0;
        }
        else{
            count=1;
            break;
        }
        
        
    }
    if(count==0)
        count=0;
    else if(a[n-1]==p)
     count=1;
     else
     count=2;
        
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
