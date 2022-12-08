//  An integer N (divbyisible by 3) is given to you.

// Your task is to find three positive (greater than 0) integers a, b and c such that a+b+c = N and the least common multiple (LCM) of a, b and c is the minimum among all possible values of a, b and c. If there are multiple answers, you can print any of them.

// Input
// The first line contains a single integer t (1≤t≤100) — the number of test cases.

// The first line of each test case contains a single integer N (3≤N≤109).

// Output
// For each test case, print three positive integers a, b and c — the answer to the problem. If there are multiple answers, you can print any of them.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int N;
        cin>>N;

        int n=N/3;

        if(n==1) cout<<1<<" "<<1<<" "<<1<<endl;

        else if(n%2==0){
            cout<<n-1<<" "<<n<<" "<<n+1<<endl;
        }

        else if(n%2==1){
            cout<<n-2<<" "<<n<<" "<<n+2<<endl;
        }
    }
}

   