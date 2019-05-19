#include<iostream>
using namespace std;

void checkprime(int N){
        int count = 0;
        for( int i = 1;i <= N;++i )
           {

           if( N % i == 0 )
                count++;}
        if(count == 2)
            cout << N <<" a prime number" ;
        else
            cout << N <<"not prime" << endl;
    }
    int main()
    {
    checkprime(7);
    return 0;
    }
