#include<iostream>

using namespace std;
void primes(int N) {
        bool isPrime[N+1];
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
        for(int i=0;i<=N;i++)
        {
        if(isPrime[i]==true)
        cout<<i<<" ";
        }
    }
    int main()
    {
    primes(10);
    return 0;
    }
