#include <bits/stdc++.h>
using namespace std;

void floydWarshall(vector<vector<int>>& dist, int n) {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int solve(int n, vector<vector<int>>& edges, int distanceThreshold) {
    vector<vector<int>> dist(n, vector<int>(n, INT_MAX));

    // Initialize the distance matrix with edge weights
    for (int i = 0; i < n; ++i) {
        dist[i][i] = 0;
    }
    for (const auto& edge : edges) {
        int from = edge[0];
        int to = edge[1];
        int weight = edge[2];
        dist[from][to] = weight;
        dist[to][from] = weight;
    }

    // Apply Floyd-Warshall algorithm to compute all-pairs shortest paths
    floydWarshall(dist, n);

    int minCities = n + 1;
    int minCity = -1;

    // Check the number of reachable cities for each city
    for (int i = 0; i < n; ++i) {
        int reachableCities = 0;
        for (int j = 0; j < n; ++j) {
            if (i != j && dist[i][j] <= distanceThreshold) {
                ++reachableCities;
            }
        }
        if (reachableCities <= minCities) {
            minCities = reachableCities;
            minCity = i;
        }
    }

    return minCity;
}

int main() {
    int n, m, distanceThreshold;
    cin >> n >> m >> distanceThreshold;
    vector<vector<int>> edges;
    for (int i = 1; i <= m; ++i) {
        int x, y, weight;
        cin >> x >> y >> weight;
        vector<int> f;
        f.push_back(x);
        f.push_back(y);
        f.push_back(weight);
        edges.push_back(f);
    }

    cout << solve(n, edges, distanceThreshold);

    return 0;
}
