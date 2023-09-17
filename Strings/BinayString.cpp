class Solution
{
public:
    // Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a)
    {
        // Here if k no. of bits setted then no. of substrings would
        // be k*(k-1)/2. also equivalent to k!/(k-2)!*2!.

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                count++;
            }
        }
        int res = count * (count - 1) / 2;

        return res;
    }
};