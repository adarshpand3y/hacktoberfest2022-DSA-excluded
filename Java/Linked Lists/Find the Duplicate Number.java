public int findDuplicate(int[] nums) {
    Arrays.sort(nums);
    int mask = nums[0];
    
    for(int i = 1; i < nums.length; i++){
        mask ^= nums[i];
        if(mask == 0){
            return nums[i];
        }
        mask = nums[i];
    }
    return -1;
}
