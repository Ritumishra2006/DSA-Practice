#include <iostream>
#include <vector>
using namespace std;

// vector<int>vec (5, 0);
// cout << vec[0] << endl;
// cout << vec[1] << endl;
// cout << vec[2] << endl;
// cout << vec[3] << endl;
// cout << vec[4] << endl;

// vector<int> vec ;
// cout << "size = "<< vec.size() << endl;

// vec.push_back(25);
// vec.push_back(45);
// vec.push_back(65);

// cout << "after push back size = " << vec.size() << endl;

// vec.pop_back();
//
// cout << vec.back() << endl;
// cout << vec.at(0) << endl;
//
// vec.push_back(0);
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);

// cout << vec.size() << endl;
// cout << vec.capacity() << endl;
// return 0;

// int n = 5;
// int arr[5] = {1, 2, 3, 4 ,5};

// for(int st=0; st<n; st++){
// for(int end=st; end<n; end++) {
// for(int i=st; i<=end; i++) {
//  cout << arr[i];
// }
// cout << " ";
//    }
//    cout << endl;
// }

// int n = 5,INT_MIN;
// int arr[5] = {1, 2, 3, 4, 5};
//
// int maxSum = INT_MIN;

// for(int st = 0; st<n; st++) {
// int currSum = 0;
// for(int end = st; end<n; end++) {
// currSum += arr[end];
// maxSum = max(currSum, maxSum);
// }
// }
// cout << "max subarray sum = " << maxSum << endl;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;

    while(i<j) {
        int pairSum = nums[i] +nums[j];
        if(pairSum > target) {
            j--;
        }
            else if(pairSum < target) {
                i++;
            }
            else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;
        return 0;
}