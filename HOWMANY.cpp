// HOWMANY

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int n;
    cin>>n;
    n=n/10;
    if(n>=0 && n<1) cout<<"1\n";
    else if(n>=1 && n<=9) cout<<"2\n";
    else if(n>=10 && n<=99) cout<<"3\n";
    else if(n>99) cout<<"More than 3 digits\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	solve();
	return 0;
}
