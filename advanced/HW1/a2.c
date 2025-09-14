#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) 
{
    uint32_t n, k;
    
    scanf("%d %d", &n, &k);
    
    uint32_t result = (n >> k) | (n << (32 - k));
    
    printf("%" PRIu32 "\n", result);
    
    return 0;
}