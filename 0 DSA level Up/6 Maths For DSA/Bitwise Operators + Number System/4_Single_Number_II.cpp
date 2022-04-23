// https://www.interviewbit.com/problems/single-number-ii/

int Solution::singleNumber(const vector<int> &arr)
{
    int ans[30] = {0};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int index = 0;
        while (num && num > 0)
        {
            ans[index] += (num & 1);
            index++;
            num = num >> 1;
        }
    }
    long long int aa = 0, two = 1;
    for (int i = 0; i < 30; i++)
    {
        ans[i] = (ans[i] % 3);
        if (ans[i] == 1)
        {
            aa += two;
        }

        two *= 2;
    }

    return aa;
}
