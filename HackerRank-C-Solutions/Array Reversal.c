#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    
    int temp_arr[num];
    for(i = 0; i < num; i++){
        temp_arr[num - 1 - i] = *(arr + i);
    }
    for(i = 0; i < num; i++){
        *(arr + i) = temp_arr[i];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
