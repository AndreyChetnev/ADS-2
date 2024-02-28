// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  }
  else {
    return value * pown(value, n - 1);
  }
}

uint64_t fact(uint16_t n) {
  if (n == 1 || n == 0) {
    return 1;
  }
  else {
    return n * fact(n-1);
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double res = 0;
  for (uint16_t i = 0; i < count; i++) {
    res+= calcItem(x, i);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res = 0;
  uint16_t = 1;
  for (uint16_t i = 1; i < count * 2 + 1; i+=2) {
    res += sign * calcItem(x, i);
    sign = -sign;
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0;
  uint16_t sign = 1;
  for (uint16_t = 0; i < count * 2; i += 2) {
    res += sign * calcItem(x,i);
    sign = -sign;
  }
  return res;
}
