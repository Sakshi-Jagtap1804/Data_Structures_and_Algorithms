bool searchPattern(string str, string pat)
{
    int n = str.length();
    int m = pat.length();
    int count = 0;
    while (n > m)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (str[j] == pat[i])
                {
                    count++;
                }
                else
                {
                    count = 0;
                    break;
                }
            }
        }
    }
    if (count == m)
    {
        return true;
    }
    else
    {
        return false;
    }
}