class Solution {
    public int[] findThePrefixCommonArray(int[] a, int[] b) {
        int arr[] = new int[a.length];
        int idx=0;
         int cnt=0;
        int m[] = new int[a.length+1];
        for(int i=0;i<a.length;i++){
            m[a[i]]++;
            m[b[i]]++;
           if(a[i]==b[i]){
            cnt++;
           }else{
             if(m[a[i]]==2){
                cnt++;
            }
            if(m[b[i]]==2){
                cnt++;
            }
           }
            arr[idx++]=cnt;
        }
        return arr;
    }
}