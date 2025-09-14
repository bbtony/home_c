#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) 
{
    uint32_t n;
    int count = 0;
    
    scanf("%d", &n);
    
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    
    printf("%d\n", count);
    
    return 0;
}