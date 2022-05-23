#include <iostream>
using namespace std;

int fib(int n);

int main(int argc, char const *argv[])
{
    int n, count, i = 0;
    count = 6;

    while(i < count)
    {
        cout << "solution is " << fib(i) << endl;
        i++;
    }
    

    return 0;
}

int fib(int n) {
    if(n == 0 || n == 1)
    {
        return n;
    } else {
        return (fib(n-1) + fib(n-2));
    }
    
}