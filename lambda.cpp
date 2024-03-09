#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>



bool isPerfect(int n) {
    if (n == 1) return false;
    int sum = 1;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
/*  
int main() {
    std::vector<int> numbers = {6, 28, 496, 8128, 33550336, 10};

    

    std::for_each(numbers.begin(), numbers.end(), [&](int n) {
        if (isPerfect(n)) {
            std::cout << n << " is a perfect number." << std::endl;
        } else {
            std::cout << n << " is not a perfect number." << std::endl;
        }
    });

    return 0;
}

*/