#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#include <bits/stdc++.h>
using namespace std;
void insertion_sort_list(listint_t **list);
{
    for(int i=1; i<n; i++){
        int j=i-1;
        int x=arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
int main()
{
    int arr[]={5,1,6,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
