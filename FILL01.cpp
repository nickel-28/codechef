// FILL01

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void bsdk(){
    string s;
    int n;
    int k;
    cin>>n>>k;
    cin>>s;
    int nap=0,count=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            count++;
            if(count==k){
                nap++;
                count=0;
            }
        }
        if(s[i]=='1'){
            count=0;
        }
    }
    // cout<<count<<endl;
    cout<<nap<<"\n";
    
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	while(t--){
	    bsdk();
	}
	return 0;
}
