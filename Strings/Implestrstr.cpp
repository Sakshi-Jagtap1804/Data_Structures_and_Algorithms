int strstr(string s, string x)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.find(x) != string::npos)
        {
            return i;
        }
    }

    return -1;
}