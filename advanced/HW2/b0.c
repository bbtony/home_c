#include <stdio.h>
#include <inttypes.h>

typedef struct list
{
    uint64_t address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

uint64_t findMaxBlock(list *head)
{
    uint64_t max_address = 0;
    size_t max_value = 0;
    if (head == NULL) {
        return 0;
    }

    for (list *block = head; block != NULL; block = block->next)
    {
        if (block->size > max_value)
        {
            max_value = block->size;
            max_address = block->address;
        }
    }

    return max_address;
}

size_t totalMemoryUsage(list *head) {
    size_t sum_size = 0;
    if (head == NULL) {
        return 0;
    }

    for (list *block = head; block != NULL; block = block->next)
    {
        sum_size += block->size;
    }

    return sum_size;
}

int main(int argc, char *argv[])
{
    // Создание узлов (блоков)
    list item_l = { .address = 140525067852320, .size = 10, .comment = "Block L" };
    list item_b = { .address = 140525067852350, .size = 30, .comment = "Block B" };
    list item_a = { .address = 140525067852900, .size = 100, .comment = "Block A" };

    item_l.next = &item_b;
    item_b.next = &item_a;
    item_a.next = NULL;

    uint64_t result_address = findMaxBlock(&item_l); 

    printf("Result Address: %" PRIu64 "\n", result_address);

    uint64_t sum_size = totalMemoryUsage(&item_l);

    printf("Result size %" PRIu64 "\n", sum_size);

    return 0;
}