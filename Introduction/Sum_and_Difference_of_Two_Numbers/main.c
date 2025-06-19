#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num_1, num_2;
  float num_3, num_4;

  scanf("%d %d", &num_1, &num_2);
  scanf("%f %f", &num_3, &num_4);

  printf("%d %d\n", (num_1 + num_2), (num_1 - num_2));
  printf("%.1f %.1f", (num_3 + num_4), (num_3 - num_4));

  return 0;
}
