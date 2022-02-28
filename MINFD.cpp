// MINFD

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n,x;
    cin>>n>>x;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int sum=0,count=0;
    int y=0;
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // } cout<<"\n\n";
    
    for(int i=0; i<n; i++){
        sum+=a[i];
        y+=a[i];
        if(sum<x){
            // sum+=a[0];
            // if(sum>=x){
            //     count++;
            // }
            count++;
            // if(sum<=x) count=-1;
            // else count=-1;
            // cout<<y<<endl;
        }
        // if(sum<=x && y<x){
        //     count=-1;
        // }
        else{
            count++;
            break;
        }
    }
    // cout<<sum<<" "<<y<<"\n";
    
    if(sum<x && y<x) cout<<"-1\n";
    else cout<<count<<"\n";
    // cout<<count<<"\n";
    
    
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
