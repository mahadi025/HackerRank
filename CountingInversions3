/*
Given an integer n, and an array a consisting of n integers, find the number of inversions in the array. An inversion is a pair of integers (i, j), such that 1ijn and ai  aj.

Input Format

The input will consist of two lines, the first line containing a single integer, specifying the value of n. The second line contains n space separated integers, specifying the values of a.

Constraints

1n106
1ai109

Output Format

Print a single integer, specifying the number of inversions.

Sample Input 0

5
3 2 5 1 4
Sample Output 0

5
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
ll cnt=0;

void mergeSort(ll arr[],ll n)
{
    if(n==1){
        return;
    }
    ll i,idx=0;
    ll leftSize=n/2;
    ll rightSize=n-leftSize;
    ll left[leftSize],right[rightSize];
    for(i=0;i<leftSize;i++){
        left[i]=arr[i];
    }
    for(i=leftSize;i<n;i++){
        right[i-leftSize]=arr[i];
    }
    mergeSort(left,leftSize);
    mergeSort(right,rightSize);
    ll leftMarker=0,rightMarker=0;
    while(leftMarker<leftSize&&rightMarker<rightSize){
        if(left[leftMarker]<=right[rightMarker]){
            arr[idx]=left[leftMarker];
            idx++;
            leftMarker++;
        }
        else{
            arr[idx]=right[rightMarker];
            idx++;
            rightMarker++;
            cnt+=leftSize-leftMarker;
        }
    }
    while(leftMarker<leftSize){
        arr[idx]=left[leftMarker];
        idx++;
        leftMarker++;
    }
    while(rightMarker<rightSize){
        arr[idx]=right[rightMarker];
        idx++;
        rightMarker++;
    }
}

int main()
{
    ll i,n;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,n);
    cout<<cnt<<endl;
}
