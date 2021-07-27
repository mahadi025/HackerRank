/*
Given an unsorted array, sort it in O(n2) time.

Input Format

The first line of the input will contain n, the size of the array. The second line will contain n space separated integers, specifying the elements of the array.

Constraints

1<=n<=103, 1<=ai<=109

Output Format

Output an array containing n integers separated by a single space in between, in non-decreasing order.

Sample Input 0

5
5 4 3 2 1
Sample Output 0

1 2 3 4 5
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

int main()
{
    ll n;
    cin>>n;
    ll arr[n],i,pivot,mark;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(pivot=0;pivot<n;pivot++){
        mark=pivot;
        for(i=pivot+1;i<n;i++){
            if(arr[i]<arr[mark]){
                mark=i;
            }
        }
        if(mark!=pivot){
            swap(arr[mark],arr[pivot]);
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
