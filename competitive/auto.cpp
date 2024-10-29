#include <iostream>
using namespace std;

int ppaartiton(int arr[],int low ,int high)
{
                    int pivot=arr[high];
                    int i=low-1;

                    for(int j=low;j<high;j++){
                        if(arr[j]<=pivot){

                            i++;
                            int temp=arr[i];
                            arr[i]=arr[j];

                            arr[j]=temp;
                            
                        }
                    }
                    int temp=arr[i+1];
                            arr[i+1]=arr[high];

                            arr[high]=temp;
                            return(i+1);
}
 void quicksort(int arr[],int low,int high){
            if(low<high){
                int pi=ppaartiton
                (arr,low,high);
            
            quicksort(arr,low,pi-1);
            quicksort(arr,pi+1,high); 
            }
 }

int_fast32_t main() {
    
        int arr[]={3,2,6,1,0,5};
        quicksort(arr,0,5);
        for(int i=0;i<5;i++){

            cout<<arr[i]<<" ";        }
    return 0;
}
