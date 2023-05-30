#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<vector<int> >& edges, int distanceThreshold) {
    
  //complete the function
   
}

//do not modify the below code
int main()
{
    int n, m, distanceThreshold;
    cin >> n >> m >> distanceThreshold;
    vector<vector<int> > edges;
    for(int i = 1; i <= m; i ++)
    {
        int x, y, weight;
        cin >> x >> y >> weight;
        vector<int> f;
        f.push_back(x);
        f.push_back(y);
        f.push_back(weight);
        edges.push_back(f);
    }

    cout << solve(n, edges, distanceThreshold);
}
