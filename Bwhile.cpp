#include <iostream>
using namespace std;

int main(){
    int s,i=2;
    cin>>s;
    while(i<=s){
        if(s%i==0){
            cout<<i;
            break;
        }
        i++;
    }
    return 0;
}