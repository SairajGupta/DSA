#include<iostream>
using namespace std;
int expo(int x,int p){
    if (p == 0) return 1;
    return x * expo(x,p-1);
    }
int main(){
    cout<<expo(2,10);
}