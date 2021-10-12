// Submission by kerchooboi420#5927
//   Date: 2021-09-28

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m; // first number they enter
    int n; //second number they enter
    int i = 1; // incramenting varaible 
    int gcd=0; // the gcd
    int max; //This will let me choose when to break out of the while.

    cout << "Please enter your two numbers" << endl; //enter numbers 
    cin >> m >> n;

    max = m; // Here I initialize max to m, and check if max should really be n.
    if (n > m)
        max = n;
    

    while (i <= max) { //Here is where I actually find the gcd. I go until my incramenter is equal to the bigger of m and n
        if (m % i == 0) { //Here I check if m is divisble by i
            if (n % i == 0) { //here I check if m is divisible by i, then if n is too.
                gcd = i; //if they both are, gcd is now i
            }//end if (n%i==0)
            
        }//end if (m%i ==0)
        i = i + 1; //Now we incrament i and go aian.
    }//end while
    
    cout << gcd << endl; //output gcd.
}
