#include<bits/stdc++.h>
using namespace std;

// Fibonnacci Recursive
int fib_recur(int n) {
    // Base case
    if (n <= 1)
        return n;

    return fib_recur(n - 1) + fib_recur(n - 2);
}

// Fibonacci Iterative
int fib_iter(int n) {
     
    // Declare an array to store Fibonacci numbers.
    int f[n + 2];
    int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++) {
       // Add the previous 2 numbers in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    cout << "Enter any number to find Fibonacci number at that place\n";
    int n; cin >> n;
    cout << "Recursive " << fib_recur(n) << '\n';
    cout << "Iterative " << fib_iter(n) << '\n';
    return 0;
}ß