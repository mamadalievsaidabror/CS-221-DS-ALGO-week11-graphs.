#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > solve(vector<vector<int> >& image, int sr, int sc, int color) {

    //completer the function
    int n = image.size();
}

//do not modify the code below
int main()
{
    int n;
    cin >> n;
    vector<vector<int> > image(n, vector<int>(n, 0));
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
            cin >> image[i][j];
    int sr, sc, color;
    cin >> sr >> sc >> color;

    vector<vector<int> > ans = solve(image, sr, sc, color);
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
        {   
            cout << ans[i][j];
            if(j != n - 1)
                cout << ' ';
        }
        if(i != n - 1)
            cout << '\n';
    }
}
