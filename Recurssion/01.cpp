#include<iostream>
using namespace std;
void evenrec(int n){
    if(n>10) return;
    evenrec(n+1);
    if (n%2==0) cout<<n<<endl;
}
int main(){
    int n=0;
    evenrec(n);
}