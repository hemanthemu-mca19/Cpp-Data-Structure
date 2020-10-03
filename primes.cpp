#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>
int main()
{
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::size_t testcases;
    std::cin >> testcases;

    std::vector<std::uint64_t> primes;
    primes.reserve(testcases);
    for(auto i = 0ull; i < testcases; i++)
    {
        std::uint64_t prime;
        std::cin >> prime;
        primes.push_back(prime);
    }

    for(auto prime : primes)
    {
        [&]{
            if(prime == 1)
            {
                std::cout << "No\n";
                return;
            }
            for(std::uint64_t divisor = 2; divisor <= std::sqrt(prime); divisor++)
            {
                if(prime % divisor == 0)
                {
                    std::cout << "No\n";
                    return;
                }
            }
            std::cout << "Yes\n";
        }();
    }
}
