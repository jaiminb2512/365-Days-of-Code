int getpivot(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }
    return s;
}

int bs(vector<int>& arr, int s, int e, int key){

    int mid = s + (e-s)/2;

    while(s <= e){

        if (arr[mid] == key){
            return mid;
        }

        if (key > arr[mid]){
            s = mid +1;
        }

        else{
            e = mid  - 1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = getpivot(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return bs(arr, pivot, n-1, k);
    }

    else{
        return bs(arr, 0, pivot -1, k);
    }
}
