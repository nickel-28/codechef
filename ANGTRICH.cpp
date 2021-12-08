// ANGTRICH

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c,s;
    cin>>a>>b>>c;
    s=a+b+c;
    if(s==180 && (a!=0 && b!=0 && c!=0)){
        if(((a+b)>c || (b+c)>a || (a+c)>b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
    
    
}

int main() {
    solve();
	return 0;
}
