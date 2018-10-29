#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int length = (sizeof(arr)/sizeof(*arr));
    int smallest, tmp;

    for(int i=0; i<length; i++)
    {
        smallest = i;

        for(int j = i+1; j<length; j++)
        {
            if(arr[j] < arr[smallest])
                smallest = j;
        }

        tmp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = tmp;
    }

    for (const auto& e : arr)
        cout << e << " ";
    cout << endl;
 
    return 0;
}
