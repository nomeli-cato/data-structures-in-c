#include <stdio.h>

struct Node
{
    int value;
};


int main(){
    printf("First Commit");
    struct Node node = {14};
    printf("value: %d", node.value);
}