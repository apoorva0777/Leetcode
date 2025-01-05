class Solution {
    public String shiftingLetters(String s, int[][] shifts) {
        int n = s.length();
        int[] diff = new int[n + 1];
        for (int[] shift : shifts) {
            int start = shift[0];
            int end = shift[1];
            int direction = shift[2];
            int change = (direction == 1) ? 1 : -1;

            diff[start] += change;
            diff[end + 1] -= change; 
        }
        int[] cumulativeShifts = new int[n];
        int runningSum = 0;
        for (int i = 0; i < n; i++) {
            runningSum += diff[i];
            cumulativeShifts[i] = runningSum;
        }
        char[] chars = s.toCharArray();
        for (int i = 0; i < n; i++) {
            int shiftAmount = cumulativeShifts[i] % 26;
            int newChar = (chars[i] - 'a' + shiftAmount + 26) % 26 + 'a';
            chars[i] = (char) newChar;
        }
        return new String(chars);
    }
}