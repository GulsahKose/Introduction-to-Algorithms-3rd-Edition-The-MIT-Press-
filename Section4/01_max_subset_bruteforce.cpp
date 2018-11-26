#include <iostream>

using namespace std;

int main()
{
    int arr[] = {-2, 11, -4, 13, -5, 2};
    int length = (sizeof(arr) / sizeof(*arr));
    
    int maxSum = 0;
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
