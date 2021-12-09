// TRIVALCH

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c,s,area;
    cin>>a>>b>>c;
    // s=(a+b+c)/2;
    // area=sqrt(s*(s-a)*(s-b)*(s-c));
    // cout<<area<<endl;
    // if(a!=0 && b!=0 && c!=0){
    //     if((a+b)>c || (b+c)>a || (c+a)>b){
    //         cout<<"YES\n";
    //     }
    //     else cout<<"NO\n";
    // }
    // else cout<<"NO\n";
    if((a+b)>c && (b+c)>a && (c+a)>b) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main() {
	solve();
	return 0;
}
