// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int s = 0, e = arr.size() - 1;
        //  4 cases over
        while (s <= e)
        {
            int m = (s + e) / 2;
            if (arr[m] == target)
            {
                return m;
            }

            if (arr[m] >= arr[s])
            {
                // First line
                if (target <= arr[m] && target >= arr[s])
                {
                    // left
                    e = m - 1;
                }
                else
                {
                    // right
                    s = m + 1;
                }
            }
            else
            {
                // Second line
                if (target >= arr[m] && target <= arr[e])
                {
                    s = m + 1;
                }
                else
                {
                    e = m - 1;
                }
            }
        }

        return -1;
    }
};


/*



 




*/