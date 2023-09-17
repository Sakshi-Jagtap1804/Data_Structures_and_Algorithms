class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {

        long long sum = 0;
        if (n <= 1)
        {
            return 1;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            long long eqisum = sum / 2;
            long long actsum = 0;
            for (int i = 0; i < n; i++)
            {
                actsum += a[i];
                if (actsum > eqisum)
                {
                    return i + 1;
                    break;
                }
            }
        }
    }
};