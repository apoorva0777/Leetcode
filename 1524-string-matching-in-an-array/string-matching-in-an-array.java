class Solution {
    public List<String> stringMatching(String[] words) {
            List<String> result = new ArrayList<>();
            Set<String> added = new HashSet<>();

            for (int i = 0; i < words.length; i++) {
                for (int j = 0; j < words.length; j++) {
                    if (i != j && words[j].contains(words[i]) && added.add(words[i])) {
                    result.add(words[i]);
                }
            }
        }
        return result;
    }
}