#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    string s;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'){
            s[i]='b';
            count1++;
        }
        else if(s[i]=='b'){
            s[i]='a';
            count2++;
        }
    }
    // cout<<count1<<"\n";
    // cout<<count2<<"\n";
    cout<<min(count1,count2)<<"\n";
    
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
