#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int solve2(vector<int> nums) {
    if (nums.size() < 2) {
        return 0;
    }

    if (nums[0] < nums[1]) {
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] >= nums[i+1] || nums[i+1] - nums[i] > 3) {
                return 0;
            }
        }
    } else if (nums[1] < nums[0]) {
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] <= nums[i+1] || nums[i] - nums[i+1] > 3) {
                return 0;
            }
        }
    } else {
        return 0;
    }

    return 1;
}

int solve(string line) {

    istringstream ss(line);
    vector<int> nums;
    int n;

    while (ss >> n) {
        nums.push_back(n);
    }

    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        vector<int> newNums = nums;
        newNums.erase(newNums.begin() + i);

        if (solve2(newNums) == 1) {
            res = 1;
        }
    }

    return res;
    
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int res = 0;

    string line;
    while (getline(cin, line)) {
        res += solve(line);
    }

    cout << res << "\n";
    return 0;
}