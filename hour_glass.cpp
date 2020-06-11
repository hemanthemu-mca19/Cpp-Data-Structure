#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int maxSum = -63, k=0;
    for (int i = 0; i<4; i++)
    {
        int sum = 0;
        for (int j = k; j<k+3; j++)
        {
            sum += arr[i][j];
            if ( j == k) sum += arr[i+1][k+1];
            sum += arr[i+2][j];
        }
        
        if(k != 3)
        k+=1;
        else k = 0;
        maxSum = max(sum, maxSum);
        if(k != 0) i--;
    }
    return maxSum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
