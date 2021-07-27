/*This problem is the same as Largest Range (easy), but has different constraints

Given an array a of size n, find the largest contiguous (i.e. unbroken) segment, so that the sum of the elements in the segment does not exceed a given limit l.

For example, given the array [5, 4, 2, 1, 1, 6, 7, 1, 1] the largest possible contiguous segment for l=4 is (2, 1, 1). Note that the segment [1, 1, 1, 1] is invalid since it ignores the elements {6, 7} in the middle and is, thus, not unbroken. Your solution should run in at most O(n log n) time.

Input Format

The input starts with an integer n, denoting the size of the array. The next line of the input will containg n space-separated integers, specifying the elements of the array a. The third and final line of the input will contain l, denoting the given limit.

Constraints

1 <= n <= 105 1 <= ai <= 104 1 <= l <= 109

Output Format

Your output should consist of a single integer written in a single line, denoting the size of the largest contiguous segment.

Sample Input 0

9
5 4 2 1 1 6 7 1 1
4
Sample Output 0

3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int r=0,l=0,sum=0,limit=0,max=-1;
   cin>>limit;
   while(r<n){
       sum+=arr[r];
       while(sum>limit){
           sum-=arr[l];
           l++;
       }
       if(r-l+1>max){
           max=r-l+1;
       }
       r++;
   }
   cout<<max<<endl;
}