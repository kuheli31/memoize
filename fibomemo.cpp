#include <iostream>

namespace MyNamespace
{
    int f[10];

    int fib(int n)
    {
        if (n <= 1)
        {
            f[n] = n;
            return n;
        }
        else
        {
            if (f[n - 2] == -1)
            {
                f[n - 2] = fib(n - 2);
            }
            if (f[n - 1] == -1)
            {
                f[n - 1] = fib(n - 1);
            }
            f[n] = f[n - 2] + f[n - 1];
            return f[n];
        }
    }
}

int main()
{
    int x;
    std::cout << "Enter limit = ";
    std::cin >> x;

    // Initialize memoization array
    for (int i = 0; i < 10; ++i)
    {
        MyNamespace::f[i] = -1;
    }

    std::cout << "Fibonacci series: ";
    for (int i = 0; i < x; ++i)
    {
        std::cout << MyNamespace::fib(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
