// TESTSERIES 

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a[5],ind=1,eng=1,dr=1,x,y,z,i;
    for(int i=0; i<5; ++i){
        cin>>a[i];
    }
    sort(a, a+5);
    
    for(i=0; i<5; ++i){
        if(a[i]==0)
            continue;
        // cout<<a[i]<<" ";
    }
    for(i=0; i<5; ++i){
        if(a[i]==1)
            ind++;
    }
    for(i=0; i<5; ++i){
        if(a[i]==2)
            eng++;
    }
    // cout<<a[i]<<" ";
    x=ind;
    y=eng;
    // cout<<y;
    // // z=dr;
    if(x>y ) cout<<"INDIA"<<endl;
    else if(x<y) cout<<"ENGLAND"<<endl;
    else if(x==y ) cout<<"DRAW"<<endl;
    
    
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
