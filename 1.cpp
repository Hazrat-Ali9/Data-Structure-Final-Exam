#include <bits/stdc++.h>
using namespace std;

void merge(string arr[], int p, int q, int r)
{
    int x, y, z;
    int n1 = q - p + 1;
    int n2 = r - q;

    string S [n1], T[n2];

    for ( x= 0; x < n1; x++)
        S[x] = arr[p + x];
    for (y = 0; y < n2; y++)
        T[y] = arr[q + 1+ y];

    x = 0;
    y = 0;
    z = p;
    while (x < n1 && y < n2)
    {
        if (S[x] <= T[y])
        {
            arr[z] = S[x];
            x++;
        }
        else
        {
            arr[z] = T[y];
            y++;
        }
        z++;
    }

    while (x < n1)
    {
        arr[z] = S[x];
        x++;
        z++;
    }

    while (y < n2)
    {
        arr[z] = T[y];
        y++;
        z++;
    }
}

 void mergeSort(string arr[], int p, int r)
{
    if (p < r)
    {
        int q = p+(r-p)/2;
        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);

        merge(arr, p, q, r);
    }
}


void printArray(string A[], int size)
{
    for (int i=0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        arr[i] = s;
    }

    int arr_size = sizeof(arr)/sizeof(arr[0]);


    mergeSort(arr, 0, arr_size - 1);

    printArray(arr, arr_size);

    return 0;
}
