// CHFSPL

#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int x, int y)
{
    return (x < y);
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a, b, c,p, q, r;
	    cin>>a>>b>>c;
	    p=a+b;
	    q=b+c;
	    r=c+a;
	    cout << std::max({p,q,r},comp)<<endl;
	}
	return 0;
}
