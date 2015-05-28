#include <iostream>

int findNextPrime(int n);   //given a prime number n, find the next closest prime number above n
bool isPrime(int n);        //given a number n, determine if it is prime

int main()
{
    bool goodInput = false;
    int input;

    //make sure we're getting prime numbers
    while (!goodInput)
    {
        std::cout << "Please enter a prime number: ";
        std::cin >> input;
        if (isPrime(input))     //carry on, nothing to see here
            goodInput = true;
        else                    //try again
            std::cout << input << " is not a prime number. \n";
    }

    std::cout << "\nThe next prime number after " << input << " is " << findNextPrime(input) << ". \n";
}

//given a prime number n, find the next closest prime number above n
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
