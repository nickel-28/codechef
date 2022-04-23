#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int d,c;
    cin>>d>>c;
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int x,y;
    x=a1+a2+a3;
    y=b1+b2+b3;
    
    if(x>=150 && y>=150){
        if((x+y+c)<(x+y+2*d)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else if(x>=150 || y>=150){
        if((x+y+c+d)<(x+y+2*d)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
    
    
    
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
