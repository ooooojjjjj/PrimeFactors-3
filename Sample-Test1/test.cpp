#include "pch.h"
#include "../TDD_PrimeFactors_3/prime_factors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
    PrimeFactors prime_factor;
    vector<int> expected = {};

    EXPECT_EQ(expected, prime_factor.of(1));
}