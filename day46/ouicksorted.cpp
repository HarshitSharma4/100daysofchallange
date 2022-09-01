#include<iostream>
using namespace std;
swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int s,int e){
    int count=0;
    int i=s+1;
    while(i<e){
        if(arr[i]<arr[s]){
            count++;
        }
    }
    swap(arr[count],arr[s]);
    i=s;
    int j=e;
    while(i<j){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
    return count;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[10]={2,7,3,7,4,8,4,3,5,9};
    quicksort(arr,0,10);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
    return 0;
}