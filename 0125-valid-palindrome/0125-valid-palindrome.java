class Solution {
    public boolean isPalindrome(String s) {
        String cleanedString = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        StringBuilder sb=new StringBuilder(cleanedString);
        String reverse=sb.reverse().toString();
        return cleanedString.equals(reverse);

    }
}