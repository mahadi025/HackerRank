/*
Robiul plans to take a road trip and drive through n cities in a day. The cities are connected one after another via highways. Robiul's car has a fuel tank that can hold a maximum of k litres of gas. Each city that Robiul plans to visit has a filling station where he can refill his tank. However, there are no filling stations in the highways connecting the cities. To plan his trip, Robiul noted down the number of litres of gas he estimates will be necessary to pass through each highway connecting the cities that he wants to visit one after another. Robiul dislikes stopping during journeys and would like to stop at as few filling stations as possible. However, Robiul also wants to make sure he does not run out of gas mid-trip. Help Robiul figure out the minimum number of stops he needs to make at the filling stations.

Note that Robiul will initially start with an empty tank, so he will have to refill at his starting position, i.e. the town where he is at.

Input Format

The input will start with a line containing two integers, n and k respectively, denoting the number of cities Robiul will visit and the capacity of his car's fuel tank. Assume that Robiul starts from his home-town (city numbered 0), and then plans to drive through n cities respectively, numbered from 1 to n. The second line of input contains n space-separated integers, with the i-th integer denoting the number of litres of oil Robiul will need to travel from the (i-1)-th city to the i-th one.

Constraints

1<=n<=105
1<=k<=109
1<=No. of litres of oil necessary to travel between two consecutive trips<=min(104, k)

Output Format

Output a single integer, denoting the number of stops Robiul will need to make at the filling stations. It is guaranteed that Robiul's tank will have enough capacity to ensure that he can complete the trip.

Sample Input 0

5 4
2 1 2 2 3
Sample Output 0

3
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n,k,i,cnt=1,sum;
    cin>>n>>k;
    ll arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sum=k;
    for(i=0;i<n;i++){
        if(sum>=arr[i]){
            sum-=arr[i];
        }
        else{
            cnt++;
            sum=k;
            i--;
        }
    }
    cout<<cnt<<endl;
}