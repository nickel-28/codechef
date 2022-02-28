// COVSPRD

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void bsdk(){
    long long int n,d;
    cin>>n>>d;
    // long long int x,y,z;
    
    // z=pow(2,0);
    // if(d==0) cout<<z<<"\n";
    // else if(d>0 && d<=10) {
    // x=pow(2,d);
    // if(x<n)
    // cout<<x<<"\n";
    // else
    // cout<<n<<"\n";
    // }
    // // else if(d>0 && d<=10 && x>=n) cout<<n<<"\n";
    // else if(d>10 && y<n){
    // x=pow(2,10)*1ll*pow(3,(d-10));
    // if(x<n)
    // cout<<x<<"\n";
    // else
    // cout<<n<<"\n";
    // }
    // // else if(d>10 && y>=n) cout<<n<<"\n";
    // // if(d==0 && )
    int c=1;
    // int x=1;
    // while(n>d){
    //     if(d>=1 && d<=10){
    //         c=c*2;
    //     }
    //     else if(d>10){
    //         c=c*
    //     }
    // }
    
    for(int i=1; i<=d; i++){
        if(i>=1 && i<=10 && i<=d){
            c=c*2;
            if(c>n)
            {
                c=n;
                break;
            }
            // break;
            // x=c;
        }
        if(i>10){
            c=c*3;
            if(c>n)
            {
                c=n;
            break;
            }
        }
    }
    // if(c<n) cout<<c<<endl;
     cout<<c<<endl;
    
    
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
