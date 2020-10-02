vector<string> split_string(string);

vector<int> shift_left(vector<int> a,int d,int n)
    {
        for (int i = 0; i < d; i++)
        {
        int temp = a[0];
            for (int j =1; j<n; j++)
            {
                a[j-1] = a[j];
            }
            a[n-1] = temp;
        }
        return a;
    }
