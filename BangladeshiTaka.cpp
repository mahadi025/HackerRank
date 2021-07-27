/*
In Bangladesh, we have notes of Tk. 1, Tk. 2, Tk. 5, Tk. 10, Tk. 20, Tk. 50, Tk. 100 and Tk. 500 each. Mr Rahim wants to pay Tk. X to someone using the least number of notes. You can assume that he has an unlimited supply of notes of each type. For example, suppose he wants to pay Tk. 1243. He can pay two notes of Tk. 500, two notes of Tk. 100, two notes of Tk. 20, one note of Tk. 2 and one note of Tk. 1. Thus he can pay the amount using eight banknotes.

Input Format

Input consists of a single integer, X, representing the amount of money Mr. Rahim will pay.

Constraints

X<=100000

Output Format

Output a single integer, specifying the minimum number of banknotes needed to make the payment.

Sample Input 0

1243
Sample Output 0

8
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int N,hundred,fifty,twenty,ten,five,two,one,fiveHundred;
    cin>>N;
    fiveHundred=N/500;
    N=N-(500*fiveHundred);
    hundred=N/100;
    N=N-(100*hundred);
    fifty=N/50;
    N=N-(50*fifty);
    twenty=N/20;
    N=N-(20*twenty);
    ten=N/10;
    N=N-(10*ten);
    five=N/5;
    N=N-(5*five);
    two=N/2;
    N=N-(2*two);
    one=N/1;
    cout<<fiveHundred+hundred+fifty+twenty+ten+five+two+one<<endl;
}