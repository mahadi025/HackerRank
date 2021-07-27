/*
Given an array a of size n, find the largest contiguous (i.e. unbroken) segment, so that the sum of the elements in the segment does not exceed a given limit l.

For example, given the array [5, 4, 2, 1, 1, 6, 7, 1, 1] the largest possible contiguous segment for l=4 is (2, 1, 1). Note that the segment [1, 1, 1, 1] is invalid since it ignores the elements {6, 7} in the middle and is, thus, not unbroken. Your solution should run in O(n2) time.

Input Format

The input starts with an integer n, denoting the size of the array. The next line of the input will containg n space-separated integers, specifying the elements of the array a. The third and final line of the input will contain l, denoting the given limit.

Constraints

1 <= n <= 103 1 <= ai <= 104 1 <= l <= 109

Output Format

Your output should consist of a single integer written in a single line, denoting the size of the largest contiguous segment.

Sample Input 0

9
5 4 2 1 1 6 7 1 1
4
Sample Output 0

3
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,l,max=0,size,sum;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>l;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
            if(sum>l){
                break;
            }
            size=j-i+1;
            if(size>max){
                max=size;
            }
        }
    }
    cout<<max<<endl;
}