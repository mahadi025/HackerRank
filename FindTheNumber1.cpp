/*
Given a sorted array a consisting of n distinct integers arranged in increasing order, answer q queries, each specifying an integer x. For each query, print the index (0-based) of the element in the array whose value is equal to x. If no such element exists, print -1. Your solution should search for x in O(log2n) time.

Input Format

The first line of the input contains n and q, as specified above. The next line contains n space separated integers, each specifying each element of the array in order. Then follows q lines, each specifying an integer x, which is to be searched in the array.

Constraints

1<=n, q<=105,
1<=ai<=109,
1<=x<=109

Output Format

For each query, print a single line specifying the index of the element in the array whose value is equal to x. If no such element exists, print "-1" in a single line. Do not forget to add a newline character after printing each integer.

Sample Input 0

5 3
1 2 3 4 5
2
1
6
Sample Output 0

1
0
-1
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string.h>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<list>
using namespace std;
typedef long long int ll;

ll binarySearch(ll arr[],ll n,ll target)
{
    ll high=n-1;
    ll low=0;
    ll mid;
    while(high>=low){
        mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    ll n,i,m;
    cin>>n>>m;
    ll arr[n],queries[m];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<m;i++){
        cin>>queries[i];
    }
    for(i=0;i<m;i++){
        cout<<binarySearch(arr,n,queries[i])<<endl;
    }
    
}