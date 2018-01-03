#include <iostream>

//p - is the index of the first element
//q - is the index of the last element in the first half of array
//r - is the index of the last element in array

template <class T>
void mergeIt(T*& tab, const int& p, const int& q, const int& r)
{
    int i = p, j = q +1, k = p;

    T * tmp = new T[r+1];

    for(int i = p; i <= r; i++)
        tmp[i] = tab[i];

    while(i <= q || j <= r)
    {
        if( (tmp[i] < tmp[j] && i < q+1) || (j > r) )
            tab[k++] = tmp[i++];
        else
            tab[k++] = tmp[j++];
    }

    delete [] tmp;
}

template <class T>
void mergeSort(T*& tab, const int& p, const int& r)
{
    if(p >= r)
        return;

    int q = (p+r)/2;
    mergeSort(tab, p, q);
    mergeSort(tab, q+1, r);
    mergeIt(tab, p, q, r);
}

template <class T>
void showTab(T tab[], const int & r)
{
    for(int i = 0; i < r; i++)
        std::cout << tab[i] << " ";

    std::cout << std::endl;
}

int main()
{
    float fTab[] = {12.32, 4.2, 2.1, 33.6, 6.2334, 776.654, 9.878, 6.04, 23.66, 455.12, 5.66, 3.54, 8.56, 0.1};
    int fMax = sizeof(fTab)/sizeof(float);
    float * fPtr = fTab;

    int iTab[] = {43, 2, 3, 23, 434, 66, 8, 88, 9, 1, 233};
    int iMax = sizeof(iTab)/sizeof(int);
    int * iPtr = iTab;

    long lTab[] = {32323232, 4, 4334, 4567887, 88438, 2122, 374637437, 383848, 283293299, 2312312, 32, 1, 3, 4,5 ,43434, 322, 34435555};
    int lMax = sizeof(lTab)/sizeof(long);
    long* lPtr = lTab;

    std::cout << "INT : " << std::endl;
    mergeSort(iPtr, 0, iMax-1);
    showTab(iTab, iMax);

    std::cout << "LONG : " << std::endl;
    mergeSort(lPtr, 0, lMax-1);
    showTab(lTab, lMax);

    std::cout << "FLOAT : " << std::endl;
    mergeSort(fPtr, 0, fMax-1);
    showTab(fTab, fMax);


    return 0;
}
