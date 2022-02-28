// PINBS

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    // int n;
    // cin>>n;
    string s;
    cin>>s;
    // n=s.length();
    // string s1="10";
    // string s2="11";
    // string s3="101";
    // string s4="111";
    // string s5="1";
    // int found=s.find(s1);
    // int found2=s.find(s2);
    // int found3=s.find(s3);
    // int found4=s.find(s4);
    // // if(s==)
    // if ((s.find(s5) != string::npos) || (s.find(s1) == string::npos) || (s.find(s2) == string::npos) || (s.find(s3) == string::npos) || (s.find(s4) == string::npos)) cout<<"YES\n";
    // else cout<<"NO\n";
    // if(s=="1" || s=="0") cout<<"NO\n";
// else{
int flag=0;
    
    for(int i=0; i<s.length(); i++){
        // if(s[i]=='1' && s[i+1]=='\0') cout<<"NO\n";
        if(s[i]=='1' && s[i+1]=='0'){
            // cout<<"YES\n";
            flag=1;
            break;
        } 
        if(s[i]=='1' && s[i+1]=='1'){
            // cout<<"YES\n";
            flag=1;
            break;
        } 
        // if(s[i]=='0' || s[i]=='1'){
        //     cout<<"NO\n";
        //     break;
        // } 
    }
// }
        if (flag==1) cout<<"Yes\n";
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
