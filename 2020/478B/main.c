#include <stdio.h>
#include <stdint.h>


int64_t solve (int64_t a) { 
  return (int64_t) (((a - 1) / 2.0) * a); 
}

int main() {
  int64_t a, b, max_g, solve_max, min_g, min_t, solve_min;
  scanf("%lld %lld", &a, &b);

  // MAX
  max_g = a - (b - 1);
  solve_max = solve(max_g);

  // MIN
  min_g = a / b;
  min_t = a % b;
  solve_min = solve(min_g + 1) * min_t; 
  solve_min += solve(min_g) * (b - min_t);

  printf("%lld %lld\n", solve_min, solve_max);
  return 0;
}
