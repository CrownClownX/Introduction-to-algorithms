#include <iostream>

//tabQuantity is needed because sizeof(tab) can't get size of array in function

void insertionSort(float tab[], const int& tabQuantity)
{
    float key = 0.0;

    for(int i = 1; i < tabQuantity; i++)
    {
        key = tab[i];
        int j = i - 1;

        while(j >= 0 && tab[j] > key)
        {
            tab[j+1] = tab[j];
            j = j - 1;
        }

        tab[j+1] = key;
    }
}

int main()
{
    float tab[] = {3.3, 1.1, 22.3, 4.5, 88.7, 22.3, 55.2, 1.1};
    insertionSort(tab, sizeof(tab)/sizeof(float));

    for(int i = 0; i < sizeof(tab)/sizeof(float); i++)
        std::cout << tab[i] << std::endl;

    return 0;
}
