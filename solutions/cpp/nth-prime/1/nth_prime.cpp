#include "nth_prime.h"
#include <stdexcept>

namespace nth_prime {

// TODO: add your solution here

  bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int nth(int n) {
    if (n < 1) {
        throw std::domain_error("error");
    }

    int count = 0;
    int candidate = 1;

    while (count < n) {
        candidate++;
        if (is_prime(candidate)) {
            count++;
        }
    }

    return candidate;
}

}  // namespace nth_prime
