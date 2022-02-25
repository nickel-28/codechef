// INDIPERM

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    int P[100000];
    // for(int i=0; i<n; i++){
    //     P[i]=i+1;
        
    // }
    // for(int i=0; i<n; i++){
        // if(P[i]%(i+2)==0){
        //     sort(P,P+n,greater<int>());
        // }
        // swap(P[i],P[i+1]);
        //     cout<<P[i]<<" ";
        // if(P[i]%(i+2)==0){
        //     swap(P[i],P[i+1]);
        //     cout<<P[i]<<" ";
        // }
    //     if(i>0){
    //         P[n-1]=2;
    //         swap(P[i],P[i+1]);
    //     }
    //         cout<<P[i-1]<<" ";
        
    // }
    // cout<<endl;
    
    for(int i=1; i<=n; i++){
        P[i]=i;
    }
    // P[n]=1;
    for(int i=1; i<=n-1; i++){
        
        if(P[i+1]%(i+1)==0){
            swap(P[i],P[i+1]);
        }
        // else
        //     return;
        cout<<P[i]<<" ";
    }
    cout<<1<<" ";
    cout<<endl;
    
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
