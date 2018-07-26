#include <iostream>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for(i = 1; i < n; ++i)
    {
        key = arr[i];
        j = i - 1;

        while(j>=0 && arr[j] > key)
        {
            std::cout <<"j " << j <<" key " <<key <<" arr[j+1] " <<arr[j+1]  <<" arr[j]: " <<arr[j] <<std::endl;
            arr[j+1] = arr[j];
            j = j - 1;
        }
        std::cout <<"i " << i <<" j " << j <<" key " <<key <<" arr[j+1] " <<arr[j+1]  <<" arr[i]: " <<arr[i] <<std::endl;
        arr[j+1] = key;
    }
}

int main(int argc, char* argv[])
{
    int array1[] = {5,1,2,4,6,3};
    for(const auto& c : array1)
    {
        std::cout << c <<' ';
    }
    std::cout <<std::endl;
    insertionSort(array1, 6);
    for(const auto& c : array1)
    {
        std::cout << c <<' ';
    }
    std::cout <<std::endl;
    return 0;
}
