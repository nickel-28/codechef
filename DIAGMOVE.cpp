//DIAGMOVE

#include <bits/stdc++.h>

using namespace std;



int main() {
	int t;
	cin >> t;
	while(t--){
    	int x,y,c;
        cin>>x>>y;
        x=abs(x),y=abs(y);
        c=abs(x-y);
        if(c%2==0) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
