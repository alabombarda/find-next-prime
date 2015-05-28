#include <iostream>

int findNextPrime(int n);   //given a number n, find the next closest prime number above n
bool isPrime(int n);        //given a number n, determine if it is prime

int main()
{
    int input;

    std::cout << "Please enter a prime number: ";
    std::cin >> input;

    std::cout << "\nThe next prime number after " << input << " is " << findNextPrime(input) << ". \n";
}

//given a number n, find the next closest prime number above n
int findNextPrime(int n)
{
    int nextPrime = n;
    bool found = false;

    //loop continuously until isPrime returns true for a number above n
    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }

    return nextPrime;
}

//given a number n, determine if it is prime
bool isPrime(int n)
{
    //loop from 2 to n/2 to check for factors
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)     //found a factor that isn't 1 or n, therefore not prime
            return false;
    }

    return true;
}

/*
SAMPLE OUTPUT

Please enter a prime number: 6

The next prime number after 6 is 7.

Please enter a prime number: 10

The next prime number after 10 is 11.

Please enter a prime number: 11

The next prime number after 11 is 13.

Please enter a prime number: 788

The next prime number after 788 is 797.
*/
