// https://practice.geeksforgeeks.org/problems/faithful-numbers0014/1
// Magic numbers are defined as either powers of 5, or sum of unique powers of 5. Find nth magic number. Eg: 5,25,30,125,130 etc.
// https://practice.geeksforgeeks.org/problems/faithful-numbers0014/1

class Solution
{
public:
    long long nthFaithfulNum(int num)
    {
        long long int seven = 1, ans = 0;
        while (num && num > 0)
        {
            if (num & 1)
            {
                ans += seven;
            }
            seven *= 7;
            num = (num >> 1);
        }

        return ans;
    }
};
