#include <iostream>

int main ()
{
    double under = 1.0;
    double over = 1.0;
    int N = 0;

    do
    {
        under = under/2;

        over = over*2;

        ++N;

        std::cout << N << "\t"  << under << "\t" << over << "\n";
    }
        while (N < 2048);
}
