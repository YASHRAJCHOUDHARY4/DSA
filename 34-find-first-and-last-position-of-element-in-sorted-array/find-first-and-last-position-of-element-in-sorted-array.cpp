class Solution {
public:

int firstoccurance(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    
    while(s <= e){
        int mid = s + (e - s)/2; // mid should be updated inside loop
        if(nums[mid] == target){
            ans = mid;
            e = mid - 1; // go left for first occurrence
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int lastoccurance(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s)/2; // update mid inside loop
        if(nums[mid] == target){
            ans = mid;
            s = mid + 1; // go right for last occurrence
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}


    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstoccurance(nums,target),lastoccurance(nums,target)};
    }
};