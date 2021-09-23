//XLSQUARE 

#include <iostream>
using namespace std;

void solve(){
    int n,a,y;
    cin>>n>>a;

    for (int i = 1; i*i <= n; i++)
    {
        y = (i*a);
    }
    cout<< y <<endl;

}

int main() {
	int t;
	cin >>t;
	while(t--){
	    solve();
	}
	return 0;
}
