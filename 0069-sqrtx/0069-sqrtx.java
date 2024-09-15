class Solution {
    public int mySqrt(int x) {
        long low=1,high=x;
        long ans=1;
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        while(low<=high){
            long mid=(low+high)/2;
            if(mid*mid<=x){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return (int)ans;
    }
}