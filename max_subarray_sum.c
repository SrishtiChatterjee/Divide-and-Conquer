#include <stdio.h>
#include <limits.h>
int maximum_sum(int nums[], int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;    
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            // if current subarray sum greater than the max sum calculated so far, update max sum
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
 
    return max_sum;
}
 
int main(void)
{
    int n;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum sum of the subarray is %d", maximum_sum(arr, n));
    return 0;
}
