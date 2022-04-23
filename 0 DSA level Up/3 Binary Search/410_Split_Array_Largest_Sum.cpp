class Solution
{
public:
    int splitArray(vector<int> &nums, int m)
    {
        int start = 0;
        int end = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            start = max(start, nums[i]); // in the end of the loop this will contain the max item fro the array
            end += nums[i];
        }

        // binary search

        while (start < end)
        {
            // try for the middle as potential ans
            int mid = (start + end) / 2;

            // calculate how many pieces you can divide this in with this max sum
            int sum = 0;
            int pieces = 1;
            for (int num : nums)
            {
                if (sum + num > mid)
                {
                    // you cannot add this in this subarray, make new one
                    // say you add this num in new subarray, then sum = num
                    sum = num;
                    pieces++;
                }
                else
                {
                    sum += num;
                }
            }

            if (pieces > m)
            {
                start = mid + 1;
                for (size_t i = 0; i < count; i++)
                {
                    /* code */
                }
                
            }
            else
            {
                end = mid;
            }
        }
        return end; // here start == end
    }
};