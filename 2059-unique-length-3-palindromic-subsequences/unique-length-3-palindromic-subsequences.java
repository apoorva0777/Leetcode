class Solution {
    public int countPalindromicSubsequence(String s) {
        int[] freq = new int[26]; 
        HashSet<String> uniquePalindromes = new HashSet<>();
        for (char c : s.toCharArray()) {
            freq[c - 'a']++;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            int first = s.indexOf(c);
            int last = s.lastIndexOf(c);
            if (first != -1 && last != -1 && first < last) {
                HashSet<Character> betweenSet = new HashSet<>();
                for (int i = first + 1; i < last; i++) {
                    betweenSet.add(s.charAt(i));
                }
                for (char middle : betweenSet) {
                    uniquePalindromes.add("" + c + middle + c);
                }
            }
        }
        
        return uniquePalindromes.size();
    }
}