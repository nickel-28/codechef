// CHEFFAV

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    n=s.length();
    // string p=s.substr("chef");
    // cout<<p<<endl;
    string p="code";
    string q="chef";
    // cout<<p<<endl;
    int found=s.find(p);
    int found2=s.find(q);
    if(found<found2) cout<<"AC\n";
    else cout<<"WA\n";
    
    // for(int i=0; i<n; i++){
    //     if(p[i]<q[i]){
    //         cout<<"AC\n";
    //         break;
    //     }
    //     else if(p[i]>q[i]){
    //         cout<<"WA\n";
    //         break;
    //     }
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
