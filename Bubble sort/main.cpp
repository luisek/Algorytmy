#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n -i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void recBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    int i;
    for (i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    recBubbleSort(arr, n - 1);
}

int main(int argc, char* argv[])
{
    int arr[] = {4,2,1,3,5};

    bubbleSort(arr, 5);

    for (const auto& c : arr)
    {
        cout << c;
    }
    cout <<endl;

    cout <<"Rec bubble\n";
    int arr2[] = {4,2,1,3,5};
    recBubbleSort(arr2, 5);
    for (const auto& c : arr2)
    {
        cout << c;
    }
    cout <<endl;

    return 0;
}
