#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a1,a2,a3,a4,a5,a6,a7;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
    
    // int a[7],x=0,y=0,i;
    // for(i=0; i<7; i++){
    //     cin>>a[i];
    // }
    // for(i=0; i<7; i++){
    //     if(a[i]=='1'){
    //         x+=a[i];
    //     }
    //     else if(a[i]=='0'){
    //         y+=a[i];
    //     }
            
    // }
        
    // if(x>=y){
    //     cout<<"Yes"<<endl;
    // }
    // else cout<<"No"<<endl;
    if((a1+a2+a3+a4+a5+a6+a7)>=4) cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
