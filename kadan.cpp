#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int csum=0;
        int maxsum= nums[0];
        for(int i=0;i<nums.size();i++){
            csum+=nums[i];
            if(csum>maxsum){
                maxsum=csum;
            }
            if(csum<0){
                csum=0;
            }
        }
        cout << maxsum;
        return 0;
}