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
uint64_t nPrime(uint64_t k) {
  uint64_t b = 0;
  uint64_t m = 0;
  while (m != k) {
    b++;
    if (checkPrime(b))
      m++;
  }
  return b;
}

uint64_t nextPrime(uint64_t value) {
  value++;
   
    while (checkPrime(value) != true) {
      value++;
    }
    return value;
