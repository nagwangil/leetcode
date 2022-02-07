// Runtime: 4 ms, faster than 67.41% of C++ online submissions for Find the Difference.
// Memory Usage: 6.6 MB, less than 67.00% of C++ online submissions for Find the Difference.

#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char answer = t.back();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[i])
            {
                continue;
            }
            else
            {
                answer = t[i];
                return answer;
            }
        }
        return answer;
    }
};

int main()
{
    string a = "asdfasdf";
    string b = "asdfasdfd";
    Solution s;
    s.findTheDifference(a, b);

    return 0;
}