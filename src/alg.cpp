// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value <=1)
    return false;
  for (int m = 2; m <= (value/2); m++) {
    if ((value % m) == 0)
      return false;
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  uint64_t s = 0;
  uint64_t m = 0;
  while (m != n) {
    s++;
    if (checkPrime(s))
      m++;
  }
  return s;
}

uint64_t nextPrime(uint64_t value) {
  value++;
    while (checkPrime (value) != true) {
    while (checkPrime(value) != true) {
      value++;
    }
    return value;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
    for (uint64_t m = 2; m < hbound; m++) {
      if (checkPrime(m) == true)
        sum += m;
    }
    return sum;
}
