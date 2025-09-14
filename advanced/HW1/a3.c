#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) 
{
    uint32_t n, k;
    
    scanf("%d %d", &n, &k);
    
    uint32_t mask = (1 << k) - 1;
    uint32_t result = n & mask;
    
    printf("%" PRIu32 "\n", result);
}