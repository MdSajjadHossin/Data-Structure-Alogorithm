#include<bits/stdc++.h>
using namespace std;


int binSearch(int A[], int n, int key){
    int low = 0;
    int high = n-1; 
    int mid;

    while(low<=high){
        mid = (low+high)/2;

        if(key == A[mid]){
            return mid;//data found
        }

        if(key < A[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return -1;
}

int main(){
    int A [] = {3, 4, 5, 6, 7, 8};
    int key = 5;
    int n = sizeof(A)/sizeof(A[0]);
    int result = binSearch(A, n, key);
    if(result == -1){
        cout<<"Element Not Found"<<endl;
    }else{
        cout<<"Element Found At: "<<result<<endl;
    }
    
    return 0 ;
}