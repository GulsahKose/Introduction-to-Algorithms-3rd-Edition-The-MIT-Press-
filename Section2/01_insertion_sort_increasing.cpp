#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int key, i, j, length;

    length = (sizeof(arr)/sizeof(*arr));

    for(j=1; j<length; j++)
    {
        key = arr[j];
        i = j-1;

        while(i>=0 && arr[i]>key)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }

    for (const auto& e : arr)
        cout << e << " ";
    cout << endl;
 
    return 0;
}
