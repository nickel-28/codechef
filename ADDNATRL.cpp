// ADDNATRL

#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        sum+=i;
    cout<<sum<<endl;
}

int main() {
	solve();
	return 0;
}
