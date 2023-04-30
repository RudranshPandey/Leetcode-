class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;//start 
        int e=nums.size();//end 
        int mid;
        if(target>nums[e-1]){
            return e;
        }
        while(s<=e){
              mid=(s+e)/2;
            if(nums[mid]==target){  
                return mid;
            }
          
            if(target<nums[mid]){     
            e=mid-1;    
            }else{
            s=mid+1;        
            }
          
        }
         return  s;   
    }
};
