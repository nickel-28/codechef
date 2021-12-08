// FINDMELI

#include <bits/stdc++.h>

using namespace std;



int main() {
	int n,k,a[100000],i;
    cin>>n>>k;
    int flag=-1;
    for(i=0; i<n; i++)
    
    {
        cin>>a[i];
        // if(k==a[i]) flag=1;
    }
    // cout<<flag<<"\n";
        sort(a,a+n);
    if(binary_search(a, a+n, k)){
        cout<<binary_search(a, a+n, k)<<endl;
    }
    else cout<<"-1"<<endl;
    // cout<<binary_search(a, a+n, k);
	return 0;
}
