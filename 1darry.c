#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Small element = %d\n", min);
    return 0;
}
