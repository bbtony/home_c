#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) 
{
    uint32_t n;
    
    scanf("%d", &n);
    uint32_t mask = 0xFF000000;
    uint32_t result = n ^ mask;
    printf("%" PRIu32 "\n", result);
    
    return 0;
}