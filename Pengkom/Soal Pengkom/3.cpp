#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int B, K;
    cin >> B >> K;
    int cube[B+2][K+2];
    memset(cube, 0, sizeof(cube));


    for(int i = 1; i <= B; i++) 
    {
        for(int j = 1; j <= K; j++) 
        {
            cin >> cube[i][j];
        }
    }

    int area = B * K * 2;
    for(int i = 1; i <= B; i++) 
    {
        for(int j = 1; j <= K; j++) 
        {
            area += max(0, cube[i][j] - cube[i][j - 1]);
            area += max(0, cube[i][j] - cube[i][j + 1]);
            area += max(0, cube[i][j] - cube[i - 1][j]);
            area += max(0, cube[i][j] - cube[i + 1][j]);
        }
    }
    // cout << area;
    if(area % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
}
