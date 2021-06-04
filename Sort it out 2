/*
Given an unsorted array, sort it.

Input Format

The first line of the input will contain n, the size of the array. The second line will contain n space separated integers, specifying the elements of the array.

Constraints

1<=n<=106, 1<=ai<=109

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
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
