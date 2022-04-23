/*

Tiling Problem!

Problem : You are given N tiles of size 1 x M, There is a floor of size N x M which you have to cover with tiles. Find the number of ways the floor can be completely covered if you can place the tiles in both horizontal and vertical manner.

Input Format:
In the function, two integers N and M are passed.

Output Format:
Return a single integer denoting the number of ways.

Sample Input:
4 3

Sample Output:
3

*/

//Expected Time Complexity: O(2^n)

#include <iostream>
using namespace std;

int tiles(int n,int m){
    if(n<m) return 1;
	int op1 = tiles(n-1, m);
	int op2 = tiles(n-m, m);
	return (op1 + op2);
}

int tillingProblem(int n, int m){
    return tiles(n, m);
}