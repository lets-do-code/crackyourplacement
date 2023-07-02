class Soluton
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {

        int min_diff = INT_MAX;

        if (m == 0 || n == 0)
            return 0;

        if (n < m)
            return -1;

        sort(a.begin(), a.end());

        for (int i = 0; i + m - 1 < n; i++)
        {

            if (a[i + m - 1] - a[i] < min_diff)
                min_diff = a[i + m - 1] - a[i];
        }

        return min_diff;
    }
};