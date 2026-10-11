#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    char arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int r,c;
    cin >> r >> c;

    r--;
    c--;

    bool found = true;

    // Up
    if(r-1 >= 0)
    {
        if(arr[r-1][c] != 'x')
        {
            found = false;
        }
    }

    // Down
    if(r+1 < n)
    {
        if(arr[r+1][c] != 'x')
        {
            found = false;
        }
    }

    // Left
    if(c-1 >= 0)
    {
        if(arr[r][c-1] != 'x')
        {
            found = false;
        }
    }

    // Right
    if(c+1 < m)
    {
        if(arr[r][c+1] != 'x')
        {
            found = false;
        }
    }

    // Upper Left
    if(r-1 >= 0 && c-1 >= 0)
    {
        if(arr[r-1][c-1] != 'x')
        {
            found = false;
        }
    }

    // Upper Right
    if(r-1 >= 0 && c+1 < m)
    {
        if(arr[r-1][c+1] != 'x')
        {
            found = false;
        }
    }

    // Lower Left
    if(r+1 < n && c-1 >= 0)
    {
        if(arr[r+1][c-1] != 'x')
        {
            found = false;
        }
    }

    // Lower Right
    if(r+1 < n && c+1 < m)
    {
        if(arr[r+1][c+1] != 'x')
        {
            found = false;
        }
    }

    if(found)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    char arr[101][101];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    int r,c;
    cin >> r >> c;

    r--; c--;

    bool found = true;

    for(int i=r-1;i<=r+1;i++)
    {
        for(int j=c-1;j<=c+1;j++)
        {
            if(i==r && j==c) continue;

            if(i>=0 && i<n && j>=0 && j<m)
            {
                if(arr[i][j] != 'x')
                {
                    found = false;
                }
            }
        }
    }

    cout << (found ? "yes" : "no") << endl;

    return 0;
}
