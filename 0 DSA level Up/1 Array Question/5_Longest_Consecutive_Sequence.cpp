// Time Complexity : O(N*logN)
//  Space Complexity : O(1)
class Solution
{
public:
    int longestConsecutive(vector<int> &arr)
    {
        if (arr.size() == 0)
        {
            return 0;
        }
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int max_c = 1;
        for (int i = 1; i < n; i++)
        {
            int curr = 1;
            while (i < n && (arr[i] == (arr[i - 1] + 1) || arr[i] == arr[i - 1]))
            {
                if (arr[i] != arr[i - 1])
                    curr++;
                i++;
            }
            max_c = max(curr, max_c);
        }

        return max_c;
    }
};

// Time Complexity : O(3 * N)
//  Space Complexity : O(N)
class Solution
{
public:
    int longestConsecutive(vector<int> &arr)
    {
        unordered_set<int> hashset;
        for (int num : arr)
        {
            hashset.insert(num);
        }
        int longeststreak = 0;
        for (int num : arr)
        {
            if (!hashset.count(num - 1))
            {
                int currentnum = num;
                int currentstreak = 1;
                while (hashset.count(currentnum + 1))
                {
                    currentstreak += 1;
                    currentnum += 1;
                }

                longeststreak = max(longeststreak, currentstreak);
            }
        }

        return longeststreak;
    }
};