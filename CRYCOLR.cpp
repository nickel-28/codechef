// CRYCOLR

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    int a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    
    // b,c,f && d,g,h
    int x=b+c+f;
    int y=d+g+h;
    cout<<max(x,y)<<"\n";
    
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
