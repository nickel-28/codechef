// PROBCAT 

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n>=1 && n<100) cout <<"Easy"<<endl;
    else if(n>=100 && n<200) cout << "Medium"<<endl;
    else if(n>=200 && n<=300) cout<<"Hard"<<endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
