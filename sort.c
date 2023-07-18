#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int data[MAX_SIZE];
    int num, i;
    num = 0;
    while(1){
        scanf("%d", &data[num]);
        if (data[num] == -1) {
            break;
        }
        num++;
    }

    qsort(data, num, sizeof(int), compare);

    for (i = 0; i < num; i++){
        printf("%d\n", data[i]);
    }

    return 0;
}
