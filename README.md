# Week #11 - Graphs

## Problem 1

An image is represented by an `n x m` integer grid image where `image[i][j]` represents the pixel value of the image.

You are also given three integers `sr`, `sc`, and `color`. You should perform a flood fill on the image starting from the pixel `image[sr][sc]`.

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

Return the modified image after performing the flood fill.

![image](https://github.com/CS-221-DS-ALGO/week11-graphs/assets/129171338/1b49a1da-fddd-49b9-8117-5ddc9a54c50e)

**Example**
```
Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation: From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), 
all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.
```

**Constraints**
```
n == image.length
m == image[i].length
1 <= m, n <= 50
0 <= image[i][j], color < 100
0 <= sr < m
0 <= sc < n
```

## Problem 2

There are $n$ cities numbered from $0$ to $n-1$. Given the array edges where $edges[i] = [from_i, to_i, weight_i]$ represents a bidirectional and weighted edge between cities $from_i$ and $to_i$, and given the integer `distanceThreshold`.

Return the city with the smallest number of cities that are reachable through some path and whose distance is at most `distanceThreshold`, If there are multiple such cities, return the city with the greatest number.

Notice that the distance of a path connecting cities $i$ and $j$ is equal to the sum of the edges' weights along that path.

<img width="277" alt="image" src="https://github.com/CS-221-DS-ALGO/week11-graphs/assets/129171338/66fe1aa5-d437-4db1-bce6-bd229cfe2c32">


**Example**
```
Input: n = 4, edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]], distanceThreshold = 4
Output: 3
Explanation: The figure above describes the graph. 
The neighboring cities at a distanceThreshold = 4 for each city are:
City 0 -> [City 1, City 2] 
City 1 -> [City 0, City 2, City 3] 
City 2 -> [City 0, City 1, City 3] 
City 3 -> [City 1, City 2] 
Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, but we have to return city 3 since it has the greatest number.
```

