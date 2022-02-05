#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        double answer = 0;
        int medium = 0;
        vector<int> merged_array;
        vector<int>::iterator iter1 = nums1.begin();
        vector<int>::iterator iter2 = nums2.begin();

        while (iter1 != nums1.end() || iter2 != nums2.end())
        {
            if ((iter1 == nums1.end() ? *iter2 + 1 : *iter1) <= (iter2 == nums2.end() ? *iter1 + 1 : *iter2))
            {
                cout << *iter1 << "iter 1" << endl;
                merged_array.push_back(*iter1);
                iter1 += 1;
            }
            else
            {
                cout << *iter2 << "iter 2" << endl;
                merged_array.push_back(*iter2);
                iter2 += 1;
            }
        }
        medium = merged_array.size() / 2;

        if (merged_array.size() % 2 == 1)
        {
            answer = (double)merged_array[medium];
        }
        else
        {
            cout << medium << " even" << endl;
            answer = (double)(merged_array[medium] + merged_array[medium - 1]) / 2;
        }

        return answer;
    }
};

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3};
    Solution a;
    printf("answer %f\n", a.findMedianSortedArrays(nums1, nums2));

    return 0;
}