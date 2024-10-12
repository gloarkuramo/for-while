#include <iostream>
using namespace std;
int main(){
    int a,s=0,i=1;
    cin>>a;
    while(i<a){
        i*=2;
        s++;
    }
    cout<<s;
    return 0;
}