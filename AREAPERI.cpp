// AREAPERI

#include <iostream>
using namespace std;

int main(){
    int L, B, area, peri;
    cin>>L>>B;
    area = L*B;
    peri = 2*(L+B);

    if(area>peri){
        cout<<"Area"<<endl;
        cout<<area;
    }
    else if(area==peri){
        cout<<"Eq"<<endl;
        cout<<area;
    }
    else{
        cout<<"Peri"<<endl;
        cout<<peri;
    }
    return 0;
}