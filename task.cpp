#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        vector<int> output;
        for (int i = 0; i + 1 < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};

int main()
{

    Solution s = Solution();
    vector<int> a;

    a.push_back(3);
    // a.push_back(2);
    a.push_back(3);
    a.push_back(3);

    s.twoSum(a, 6);

    cout << endl;
    return 0;
}