//Q9. Write a program to find out the max number from given 10 elements of array

# include<stdio.h>

int main() {
    int arr[10], i, max;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < 10; i++)
        if (arr[i] > max) max = arr[i];

    printf("The maximum number is: %d\n", max);

    return 0;
}
