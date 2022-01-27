// Runtime: 260 ms, faster than 37.20% of C++ online submissions for Two Sum.
// Memory Usage: 10.1 MB, less than 94.75% of C++ online submissions for Two Sum.

#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++)
        {
            int temp = find(nums.begin(), nums.end(), target - nums[i]) - nums.begin();

            if (temp < nums.size() && (temp != i))
            {
                answer = vector<int>{temp, i};
                return answer;
            }
        }
        return answer;
    }
};

int main()
{

    vector<int> nums = {3, 2, 4};
    int target = 6;
    Solution a;
    a.twoSum(nums, target);

    return 0;
}