// EXAMTIME

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int d,e,f;
    cin>>d>>e>>f;
    if((a+b+c)>(d+e+f)){
        cout<<"DRAGON\n";
        
    }
    else if((a+b+c)<(d+e+f)){
        cout<<"SLOTH\n";
    
    }
    else{
        if(a>d) cout<<"DRAGON\n";
        else if(a==d && b>e) cout<<"DRAGON\n";
        else if(a==d && b==e && c>f) cout<<"DRAGON\n";
        else if (a<d) cout<<"SLOTH\n";
        else if (a==d && b<e) cout<<"SLOTH\n";
        else if (a==d && b==e && c<f) cout<<"SLOTH\n";
        else if(a==d && b==e && c==f) cout<<"TIE\n";
        
        
    }
    
    
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
