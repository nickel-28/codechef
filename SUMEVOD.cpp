// SUMEVOD

#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long int n,even=0,odd=0;
    cin>>n;
    for(int i=1; i<=2*n; i=i+2){
        odd+=i;
    }
    cout<<odd<<" ";
    for(int i=2; i<=2*n;i=i+2){
        even+=i;
    }
    cout<<even;
    
}

int main() {
	solve();
	return 0;
}
