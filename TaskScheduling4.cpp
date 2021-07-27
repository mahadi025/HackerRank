/*
Given n tasks, each with a scheduled starting time and a finishing time, find the maximum number of tasks you can complete without having to perform two tasks at the same time. You can start a task at the exact time as when another ends. Once you start a work, you must complete doing it.

Input Format

The first line of the input will contain a single integer, denoting n. n lines will follow, each containing two integers, denoting the starting and finishing time of the tasks.

Constraints

1<=n<=10^6
1<=Starting and finishing times of each task108

Output Format

Write a single integer, denoting the maximum number of tasks you can complete.

Sample Input 0

3
2 6
4 8
7 10
Sample Output 0

2
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Scheduling{
    ll start,end;
};

bool sorting(Scheduling a,Scheduling b)
{
    return a.end<b.end;
}
int main()
{
    ll n,i;
    cin>>n;
    Scheduling arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i].start>>arr[i].end;
    }
    sort(arr,arr+n,sorting);
    i=0;
    ll j,cnt=1;
    for(j=1;j<n;j++){
        if(arr[j].start>=arr[i].end){
            i=j;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}