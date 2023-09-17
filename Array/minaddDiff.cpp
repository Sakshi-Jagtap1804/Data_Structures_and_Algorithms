int minAdjDiff(int arr[], int n)
{
    int res = INT_MAX;
    int ediff = abs(arr[0] - arr[n - 1]);
    int diff;
    for (int i = 1; i < n; i++)
    {
        diff = abs(arr[i] - arr[i - 1]);
        res = min(res, diff);
    }
    res = min(res, ediff);

    return res;
}