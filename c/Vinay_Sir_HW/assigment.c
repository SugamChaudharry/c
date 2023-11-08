#include <stdio.h>
#include <math.h>

// Function to display array
void displayArray(int arr[], int N)
{
    printf("Array elements are: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to display array in reverse order
void displayReverseArray(int arr[], int N)
{
    printf("Array elements in reverse order are: ");
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find sum and average of array elements
void findSumAndAverage(int arr[], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / N;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}

// Function to count positives, negatives, and zeros
void countPositivesNegativesZeros(int arr[], int N)
{
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }

    printf("Positive elements: %d\n", positiveCount);
    printf("Negative elements: %d\n", negativeCount);
    printf("Zero elements: %d\n", zeroCount);
}

// Function to separate even and odd numbers into different arrays
void separateEvenOddArrays(int arr[], int N)
{
    int evenArr[N], oddArr[N];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenCount++] = arr[i];
        }
        else
        {
            oddArr[oddCount++] = arr[i];
        }
    }
    displayArray(evenArr, N);
    displayArray(oddArr, N);

    printf("Even array: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Odd array: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArr[i]);
    }
    printf("\n");
}


int main()
{
    int N;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    displayArray(arr, N);
    displayReverseArray(arr, N);
    findSumAndAverage(arr, N);
    countPositivesNegativesZeros(arr, N);
    separateEvenOddArrays(arr, N);
  

    return 0;
}
