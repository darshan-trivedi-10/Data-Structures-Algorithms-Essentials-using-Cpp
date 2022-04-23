// Time Complexity : O(n*n) using hashmap
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &arr)
    {
        int target_sum = 0;
        vector<vector<int>> result;
        int n = arr.size();
        // Logic
        sort(arr.begin(), arr.end());
        // Pick every arr[i], pair sum for remaining part
        for (int i = 0; i <= n - 3; i++)
        {
            int j = i + 1;
            int k = n - 1;

            // Two pointer approach
            while (j < k)
            {
                int current_sum = arr[i];
                current_sum += arr[j];
                current_sum += arr[k];
                if (current_sum == target_sum)
                {
                    result.push_back({arr[i], arr[j], arr[k]});
                    break;
                    j++, k--;
                }
                else if (current_sum > target_sum)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }

        return result;
    }
};
