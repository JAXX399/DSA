

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini= i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}


void bubblesort(int arr[],int n){
    for (int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            int temp=0;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }

    }

}

void mergesort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}



void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);

        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}


int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>=pivot && j>low){
            j--;

        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j; // Return the partition index


}

void quicksort(vector<int> &arr,int low,int high){
    if (low >= high) {
        return;
    }
    if(low<high){
        int pindex=partition(arr, low, high);
        quicksort(arr, low, pindex - 1);
        quicksort(arr, pindex + 1, high);
    }


}

vector<int> quicksort(vector<int> arr){
    quicksort(arr,0,arr.size()-1); 
    return arr;

}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"sorting by selection sort"<<endl;
    selection_sort(arr,n);
    print_array(arr, n);

    cout<<"sorting by bubble sort"<<endl;
    bubblesort(arr,n);
    print_array(arr, n);

    cout<<"sorting by insertion sort"<<endl;
    insertion_sort(arr,n);
    print_array(arr, n);

    cout<<"sorting by merge sort"<<endl;
    mergesort(arr, 0, n - 1);
    print_array(arr, n);

    cout<<"sorting by quick sort"<<endl;
    vector<int> vec(arr, arr + n); // Convert array to vector
    quicksort(vec, 0, n - 1);
    print_array(vec.data(), n); // Print vector as array


    return 0;
}