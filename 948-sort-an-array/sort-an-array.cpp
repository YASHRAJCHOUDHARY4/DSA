class Solution {
public:

    void merge( vector<int> &arr, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int [len1];
    int *second = new int [len2];
    // copy values
    int mainarrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainarrayIndex++];
    }
    mainarrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainarrayIndex++];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainarrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainarrayIndex++] = first[index1++];
        }
        else{
             arr[mainarrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
          arr[mainarrayIndex++] = first[index1++];
    }
    while(index2 < len2){
          arr[mainarrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergesort(vector<int> &arr, int s, int e){
    //base case
    if(s >= e){
        return ;
    }

    int mid = s +(e - s)/2;

    // sort left part
    mergesort(arr,s,mid);

    // sort right part
    mergesort(arr,mid+1,e);

    // merge
    merge(arr,s,e);
}

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};