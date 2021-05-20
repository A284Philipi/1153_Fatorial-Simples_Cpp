#include <iostream>

using namespace std;

int main()
{
    long long int n, fatorial = 1;
    cin >> n;
    if (n == 1 || n == 0){
        cout << 1 <<endl;
    }else{
        while (n >= 2){
            fatorial = fatorial * n;
            n--;
        }
        cout << fatorial <<endl;
    }
    return 0;
}
