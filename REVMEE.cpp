// REVMEE

#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,arr[100000];
	cin>>n;
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    reverse(arr, arr+n);
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
	
	return 0;
}
