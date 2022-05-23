#include <iostream>
using namespace std;

void print(int n);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    print(n);

    return 0;
}

void print(int n){
    if(n > 0)
    {
        print(n-1);
        cout << n << endl;
    }
    
}
