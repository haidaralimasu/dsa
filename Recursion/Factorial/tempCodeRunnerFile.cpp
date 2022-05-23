#include <iostream>
using namespace std;
 
int factorial(int n);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a positive value" << endl;
    cin >> n;
    cout << "Factorial is " << factorial(n) << endl;
    return 0;
}

int factorial(int n) {
    if(n > 1)
    {
       return n * factorial(n-1);
    } else {
        return 1;
    }
    
}
