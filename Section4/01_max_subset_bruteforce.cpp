#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    //Page:68,  Section:4.1, Brute force solution

    int arr[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    int length = (sizeof(arr) / sizeof(*arr));
    
    int maxSum = INT_MIN;
    int begin, end;

    for(int i=0; i<length; i++)
    {
        for(int j=i; j<length; j++)
        {
            int sum = 0;

            for(int k=i; k<=j; k++)
                sum += arr[k];

            if(sum > maxSum)
            {
                maxSum = sum;
                begin = i;
                end = j;
            } 
        } 
    }

    cout << "Max sum: " << maxSum << " Between: " << begin << " and " << end << endl;
 
    return 0;
}
