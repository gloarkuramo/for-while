#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a>1){
        if(a%2!=0){
            cout<<"NO";
            return 0;
        }
        a/=2;
    }
    cout<<"YES";
    return 0;
}