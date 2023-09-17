class Solution
{
public:
    // This is best solution with O(N/2) T.Comp.
    vector<int> v;
    int ind = 0;
    while (N > 0)
    {
        v.insert(v.begin() + ind, N);
        v.insert(v.end() - ind, N);
        ind++;
        N = N - 5;
    }
    v.insert(v.begin() + ind, N);
    return v;
};