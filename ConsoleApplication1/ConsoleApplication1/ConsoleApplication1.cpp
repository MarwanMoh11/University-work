#include <iostream>
#include <vector>
#include <stdexcept>
using namespace	std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>results;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                
                results.push_back(i);
                results.push_back(j);

            }
        }
    }
    return results;
}

int main() {
    vector<int>hey = { 2,7,11,15 };
    int target = 18;
    vector<int> result = twoSum(hey, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << std::endl;

    
    return 0;
}
