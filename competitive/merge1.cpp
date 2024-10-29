#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>&v1,int left,int mid,int right){

            int n1=mid-left+1;
            int  n2 =right-mid;  int leftarr[n1],rightarr[n2];

                    for(int i=0;i<n1;i++){
                        leftarr[i]=v1[left+i];
                    }
                    for (int i=0;i<n2;i++)
                    {
                        rightarr[i]=v1[mid+1+i];
                    }
                            int i=0,j=0,k=left;

                            while(i<n1 && j<n2){
                                if(leftarr[i]<=rightarr[j]){

                                    v1[k]=leftarr[i];
                                    i++;
                                }
                                else{

                                    v1[k]=rightarr[j];
                                    j++;
                                }
                                k++;
                            }
                            while(i<n1){
                                v1[k]=leftarr[i];

                                i++;
                                k++;
                            }
                            while(j<n2){
                                v1[k]=rightarr[j];

                                j++;
                                k++;
                            }
}

void mergesort(vector<int>&v1,int left,int right){
                
                            if(left>=right) return;
   
        int mid= left +(right-left)/2;

                mergesort(v1,left,mid);
                mergesort(v1,mid+1,right);

                merge(v1,left,mid,right);
}





int main()
{
    vector<int>v1={4,2,1,5,3};
    mergesort(v1,0,v1.size()-1);

    for(auto m:v1){
        cout<<m<<" ";
    }

return 0;
}
