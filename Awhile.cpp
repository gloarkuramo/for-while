#include <iostream>
using namespace std;

int main(){
    int s,i=1,j=0;
    cin>>s;
    while(j<=s){
        cout<<i*i<<" ";
        i++;
        j=i*i;
    }
}