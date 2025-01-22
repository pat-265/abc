#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size(); //do dai mang nums

    int left = 0 ; // chi so dau
    int right = n - 1 ; // chi so cuoi
    int mid = (left + right) / 2; // chi so giua cua mang

    while (left <= right) {
        if (nums[mid] == target){
            return mid;
        }
        else if(target < nums[mid]){
            right = mid - 1; // cap nhat bien right
        }
        else{
            left = mid + 1; // cap nhat bien left
        }
        mid = (left + right) / 2; // cap nhat bien mid
    }
    return -1; // khong co, return -1
}



int main(){
    int n, x, target;
    vector<int> nums;
    cin >> n >> target;
    for (int i = 0; i < n; ++i){ // nhap mang nums
        cin >> x;
        nums.push_back(x);
    }
    int res = search(nums, target); // goi ham giai bai toan
    cout << res << endl; // in ra ket qua
    return 0;
}