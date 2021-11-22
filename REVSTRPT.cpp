// REVSTRPT

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++)
      {
        if (j>=i) cout<<"*";
        else cout<<" ";
      }
      cout<<endl;
    }
    
}

int main() {
	solve();
	return 0;
}
