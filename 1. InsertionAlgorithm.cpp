#include <iostream>

template <class T>
void insertionSort(T tab[], const int& tabQuantity)
{
    for(int i = 1; i < tabQuantity; i++)
    {
        T key = tab[i];
        int j = i - 1;

        while(j >= 0 && tab[j] > key)
        {
            tab[j+1] = tab[j];
            j--;
        }

        tab[j+1] = key;
    }
}

template <class T>
void showTab(const T tab[], const int& tabQuantity)
{
    for(int i = 0; i < tabQuantity; i++)
        std::cout << tab[i] << " ";

    std::cout << std::endl;
}

int main()
{
    float fTab[] = {12.32, 4.2, 2.1, 33.6, 6.2334, 776.654, 9.878, 6.04, 23.66, 455.12, 5.66, 3.54, 8.56, 0.1};
    int fMax = sizeof(fTab)/sizeof(float);

    int iTab[] = {43, 2, 3, 23, 434, 66, 8, 88, 9, 1, 233};
    int iMax = sizeof(iTab)/sizeof(int);

    long lTab[] = {32323232, 4, 4334, 4567887, 88438, 2122, 374637437, 383848, 283293299, 2312312, 32, 1, 3, 4,5 ,43434, 322, 34435555};
    int lMax = sizeof(lTab)/sizeof(long);

    std::cout << "INT : " << std::endl;
    insertionSort(iTab, iMax);
    showTab(iTab, iMax);

    std::cout << "LONG : " << std::endl;
    insertionSort(lTab, lMax);
    showTab(lTab, lMax);

    std::cout << "FLOAT : " << std::endl;
    insertionSort(fTab, fMax);
    showTab(fTab, fMax);

    return 0;
}

