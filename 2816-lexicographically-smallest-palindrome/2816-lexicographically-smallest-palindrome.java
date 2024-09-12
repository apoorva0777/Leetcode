class Solution {
    public String makeSmallestPalindrome(String s) {
        char a[] =s.toCharArray();
        int i=0,j=s.length()-1;
        while(i<j){
            a[i]=(char)Math.min(a[i],a[j]);
            a[j]=(char)Math.min(a[i],a[j]);
            i++;
            j--;
        }
        return new String(a);
    }
}