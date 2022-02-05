#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int answer = 0;
        vector<char> substring;

        for (const auto c : s)
        {
            vector<char>::iterator iter = find(substring.begin(), substring.end(), c);
            if (iter == substring.end())
            {
                //printf("no repeated things %c\n", c);
                substring.push_back(c);
            }
            else
            {
                //printf("repeated thing : %c\n", c);
                substring.erase(substring.begin(), iter + 1);
                substring.push_back(c);
            }
            answer = substring.size() > answer ? substring.size() : answer;
        }
        return answer;
    }
};

int main()
{
    string s = "a";
    Solution a;
    printf("%d\n", a.lengthOfLongestSubstring(s));

    return 0;
}