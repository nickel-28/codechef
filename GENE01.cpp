// GENE01

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    char x,y;
    cin>>x>>y;
    if((x=='R' && y=='B') || (y=='R' && x=='B'))
        cout<<"R\n";
    if((x=='B' && y=='G') || (y=='B' && x=='G'))
        cout<<"B\n";
    if((x=='R' && y=='G') || (y=='R' && x=='G'))
        cout<<"R\n";
    if(x=='B' && y=='B') cout<<"B\n";
    if(x=='R' && y=='R') cout<<"R\n";
    if(x=='G' && y=='G') cout<<"G\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	solve();
	return 0;
}
