/*
Vasya goes to visit his classmate Petya. Vasya knows that Petya's apartment number is n.

There is only one entrance in Petya's house and the distribution of apartments is the following: the first floor contains 2 apartments, every other floor contains x apartments each. Apartments are numbered starting from one, from the first floor. I.e. apartments on the first floor have numbers 1 and 2, apartments on the second floor have numbers from 3 to (x+2), apartments on the third floor have numbers from (x+3) to (2⋅x+2), and so on.

Your task is to find the number of floor on which Petya lives. Assume that the house is always high enough to fit at least n apartments.

You have to answer t independent test cases.
##Input
The first line of the input contains one integer t (1≤t≤1000) — the number of test cases. Then t test cases follow.

The only line of the test case contains two integers n and x (1≤n,x≤1000) — the number of Petya's apartment and the number of apartments on each floor of the house except the first one (there are two apartments on the first floor).

##Output
For each test case, print the answer: the number of floor on which Petya lives.

##Example
##input
4
7 3
1 5
22 5
987 13
##output
3
1
5
77
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int f;
        if(n==1 || n==2)
            f=1;
        else
        {
            for(int i=2; i<n; i++)
            {
                if( n >= (i-2)*x + 3  && n <= (i-1)*x + 2)
                {
                    f = i;
                    break;
                }
            }
        }
        cout<<f<<endl;
    }
	return 0;
}