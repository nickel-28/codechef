// ANTIPAL

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    string s;
    if(n%2!=0) cout<<-1<<"\n";
    else{
        for(int i=0; i<n; i++){
            if(i%2==0){
                s+='1';
            }
            else if(i%2!=0){
                s+='0';
            }
        }
        cout<<s<<"\n";
    }
    
    
    
    // for(int i=0; i<n; i++){
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
