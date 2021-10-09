//FILLGRID

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n][n];
if(n%2!=0){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // a[i][j]==-1 || a[i][j]==1;
            
            if(i==j ){
                a[i][j]=-1;
            }
            else{
                a[i][j]=1;
            }
        }
    }
}
else{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // a[i][j]==-1 || a[i][j]==1;
            a[i][j]=-1;
            
        }
    }
}
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
