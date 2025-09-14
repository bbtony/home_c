#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) 
{
    uint32_t n, k;
    
    scanf("%d %d", &n, &k);
    uint32_t mask = (1 << k) - 1;
    
    uint32_t max_val = 0;
    
    for (int i = 0; i <= 32 - k; i++) {
        uint32_t current_chunk = (n & (mask << i));
        
        uint32_t current_val = current_chunk >> i;
        
        if (current_val > max_val) {
            max_val = current_val;
        }
    }
    
    printf("%" PRIu32 "\n", max_val);
    return 0;
}