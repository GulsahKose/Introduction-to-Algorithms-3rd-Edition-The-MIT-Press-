#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int v = 15;
    bool stat = false;

    int length = (sizeof(arr) / sizeof(*arr));

    for(int i=1; i<length; i++)
    {
        if(v == arr[i])
            stat = true;
    }

    cout << stat << endl;
 
    return 0;
}
