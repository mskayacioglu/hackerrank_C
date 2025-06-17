# Sum and Difference of Two Numbers

>**Subdomain:** Introduction  
>**Difficulty:** Easy  

**Link:** [Sum and Difference of Two Numbers](https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true)  

## Solution

* [Format Specifiers in C](https://www.tutorialspoint.com/cprogramming/c_format_specifiers.htm)  
* [C Library - printf() function](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)  
* [C Library - scanf() function](https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm)  

### Code:

<pre>
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
</pre>
