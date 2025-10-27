#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3-i;j++){
            cout<<" "<<endl;
        }
    }
    for(int k=1;k<=2*i-1;i--){
        for(int j=3;j<=3-i;j++){
            cout<<"*"<<endl;
        }
    }
}