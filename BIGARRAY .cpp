// BIGARRAY 

#include <bits/stdc++.h>
using namespace std;
// const int n=1e5+10;
// long int arr[n];

// bool comp(int a, int b){
//         return (a < b);
// }

void solve(){
    long long int n,s,c;
    cin>>n>>s;
    long long int x=(n*(n+1))/2;
    int i,sum = 0;
    
    c=x-s;
    if(c>=1 && c<=n)
        cout<<c<<endl;
    else cout <<-1 <<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
