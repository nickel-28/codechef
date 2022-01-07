// LISTLIST

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void bsdk(){
    int n;
    cin>>n;
    int a[n],i;
    
    int count=1;
    
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a,a+n);
    int max=1;
    for(i=0; i<n; i++){
       if(a[i]==a[i+1]){
           count++;
       }
       else {
           if(count>max){
               max=count;
           }
           count=1;
       }
    }
    // cout<<n-max+1<<"\n";
    if(n==1 || n==max) cout<<"0\n";
    else if(max>=2){
        cout<<n-max+1<<"\n";
    }
    else cout<<"-1\n";
    
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
