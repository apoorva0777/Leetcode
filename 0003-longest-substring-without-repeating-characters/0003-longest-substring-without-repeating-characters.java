import java.util.HashSet;

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxLen = 0; // To keep track of the maximum length of substring
        int i = 0; // Left pointer of the window
        int j = 0; // Right pointer of the window
        HashSet<Character> set = new HashSet<>(); // To track the characters in the current window

        // Use sliding window technique
        while (j < n) { // Iterate over the string with the right pointer
            // If s[j] is not in the set, add it to the set and move j to the right (expand window)
            if (!set.contains(s.charAt(j))) {
                set.add(s.charAt(j++));
                // Update the maximum length of the substring
                maxLen = Math.max(maxLen, j - i);
            } else {
                // If s[j] is already in the set, remove s[i] from the set and move i to the right (shrink window)
                set.remove(s.charAt(i++));
            }
        }

        return maxLen; // Return the maximum length of substring without repeating characters
    }
}
