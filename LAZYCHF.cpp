#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, m, x, d;
	cin>>t;
	while(t--){
	    cin>>m>>x>>d;
	    cout << std::min((m*x), (m+d)) << "\n";
	}
    return 0;
}
