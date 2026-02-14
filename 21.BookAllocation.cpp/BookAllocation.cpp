#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> nums, int givenMember, int numberofbook, int maximumAllowedpages) {
    int student = 1;   
    int pages = 0;

    for (int i = 0; i < numberofbook; i++) {

        if (nums[i] > maximumAllowedpages) {
            return false;
        }

        if (pages + nums[i] <= maximumAllowedpages) {
            pages += nums[i];
        } else {
            student++;
            pages = nums[i];
        }
    }

    return student <= givenMember;  
}

int bookAllocation(vector<int>& nums, int givenMember, int numberofbook) {
// IMP condition to validate our case
    if (givenMember > numberofbook) { 
        return -1;
    }

    int sum = 0;
    int ans = 0;

    for (int i = 0; i < numberofbook; i++) {
        sum += nums[i];
    }

    int start = 0;
    int end = sum;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isvalid(nums, givenMember, numberofbook, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 1, 3, 4};
    int member = 2;
    int numberofbook = 4;
    cout << bookAllocation(nums, member, numberofbook);
}