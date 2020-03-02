#include <bits/stdc++.h>
using namespace std;

int partition(int *a,int s,int e){
    int pivot = a[e];
    int i=s-1;
    for(int j = s;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
  int partition_r(int arr[], int low, int high) 
{ 
    
    srand(time(NULL)); 
    int random = low + rand() % (high - low); 
  
    // Swap A[random] with A[high] 
    swap(arr[random], arr[high]); 
  
    return partition(arr, low, high); 
} 
    swap(a[i+1],a[e]);
    return i+1;
}
void quickSort(int *a,int s,int e){
    if(s>= e)return;
    int p = partition_r(a, s, e);
    quickSort( a,s,p-1);
    quickSort(a, p+1, e);
}

int main() {
	// your code goes here
	int arr[5] = {9,5,6,2,3};
	quickSort(arr,0,5);
	for(int i =0;i<5;i++){
	    cout << arr[i]<< " ";
	}
	return 0;
}