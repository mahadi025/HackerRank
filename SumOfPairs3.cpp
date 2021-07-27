/*
Given an array a consisting of n integers, and an integer x, find the number of pairs (i, j) so that 0<=i, j< n and ai+aj=x.

Input Format

The first line of input contains two integers, n and x, as described above. The second line contains n space separated integers, denoting the elements of a in order (i.e. a0, a1, a2, ... an).

Constraints

1<=n<=105, 1<=ai<=109

Output Format

Print a single integer, specifying the number of pairs as described above. Reminder that the output may be greater than the maxium number that can be stored as an "int" variable in C/C++, so use long long int.

Sample Input 0

5 6
1 2 3 4 5
Sample Output 0

5
Explanation 0

a[0]+a[4]=1+5=6,
a[1]+a[3]=2+4=6,
a[2]+a[2]=3+3=6,
a[3]+a[1]=4+2=6,
a[4]+a[0]=5+1=6,
Thus, there are 5 pairs (0, 4), (1, 3), (2, 2), (3, 1), (4, 0) form the indices for pairs of elements that sum up to x=6.
*/
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
unordered_map<ll, ll> a;
int main()
{
    ll n,x,cnt=0;
    cin>>n>>x;
    ll arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
        a[arr[i]]++;
    }
    for(i=0;i<n;i++){
        cnt+=a[x-arr[i]];
    }
    cout<<cnt<<endl;

}
