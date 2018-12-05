#include <iostream>
#include <limits.h>

using namespace std;

struct ArrayInfo {
    int begin;
    int end;
    int sum;
};

ArrayInfo FindMaxCrossingSubArray( int arr[], int low, int mid, int high )
{
    ArrayInfo aInfo;
    int left_sum = INT_MIN;    
    int right_sum = INT_MIN;
    int begin_index;
    int end_index;
    int sum = 0;

    for(int i=mid; i>=low; i--)
    {
        sum += arr[i];

        if(sum > left_sum)
        {
            left_sum = sum;
            aInfo.begin = i;
        }
    }

    sum = 0;
        
    for(int j=mid+1; j<=high; j++)
    {
        sum += arr[j];

        if(sum > right_sum)
        {
            right_sum = sum;
            aInfo.end = j;
        }
    }

    aInfo.sum = left_sum + right_sum;

    return aInfo;
}

ArrayInfo FindMaxSubArray(int arr[], int low, int high)
{
    ArrayInfo left, right, cross;
    int base_sum;
    int mid;

    if(low == high)
    {
        ArrayInfo base = {low, high, arr[low]};
        return base;
    }
    else
    {
        mid = (low + high) / 2;
        left = FindMaxSubArray(arr, low, mid);
        right = FindMaxSubArray(arr, mid+1, high);
        cross = FindMaxCrossingSubArray(arr, low, mid, high);

        if(left.sum >= right.sum && left.sum >= cross.sum)
            return left;
        else if(right.sum >= left.sum && right.sum >= cross.sum)
            return right;
        else
            return cross;
    }
}

int main()
{
    //Page:70,  Section:4.1, Divide and conquer solution

//    int arr[] = {13, -3, 25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
//    int arr[] = {13, -3, 25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
//    int arr[] = {13, -3, 25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    int arr[] = {-3, 2, 5, -8, 1, -4};
    int length = (sizeof(arr) / sizeof(*arr));

    ArrayInfo aInfo = FindMaxSubArray(arr, 0, length-1);

    cout << "Begin Index: " <<  aInfo.begin << endl;
    cout << "End Index: " <<  aInfo.end << endl;
    cout << "MaxSum: " <<  aInfo.sum << endl;
 
    return 0;
}
