#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> threeSum(vector<int>& arr,int target){
    int size = arr.size();
    for(int i = 0; i < size - 2; i++){
        int left = i + 1;
        int right = size - 1;
        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];
            if(sum  == target) return {i, left, right};
            else if(sum < target) left++;
            else if(sum > target) right--;
        }        
    }
    return {};
}

int main(){
    vector<int> arr = {2,3,4,9,0,1};
    int target = 14;
    sort(arr.begin(), arr.end());
    vector<int> result = threeSum(arr, target);
}
