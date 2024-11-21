#include <stdio.h>

int searchInsert(const int* nums, const int numsSize, const int target) {
    
    for(int i = 0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
    }
    int i = 0;
    while(i < numsSize && nums[i] < target){
        i++;
    }
    return i;

}

int main(){

    const int nums[] = {2, 3, 5, 6};
    const int numsSize = sizeof(nums) / sizeof(nums[0]);
    const int target = 7;
    const int idk = searchInsert(nums, numsSize, target);
    printf("%d", idk);
    return 0;
}