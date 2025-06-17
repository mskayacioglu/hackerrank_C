# "Hello World!" in C

>**Subdomain:** Introduction  
>**Difficulty:** Easy  

**Link:** ["Hello World!" in C](https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true)  

## Solution

* ["Hello, World!" program by Brian Kernighan](https://upload.wikimedia.org/wikipedia/commons/2/21/Hello_World_Brian_Kernighan_1978.jpg)

### Code:

<pre>
#include <stdio.h>

int main(void) {
  char s[100];
  scanf("%[^\n]%*c", &s);
  printf("Hello, World!\n");
  printf("%s", s);
    
  return 0;
}
</pre>
