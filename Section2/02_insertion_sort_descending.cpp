#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(arr)/sizeof(*arr);
    int i, j, tmp;

    for(i=1; i<length; i++)
    {
        j = i;

        while(j > 0 && arr[j-1] < arr[j])
        {
            tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }

    for (const auto& e : arr)
        cout << e << " ";
    cout << endl;

    return 0;
}
