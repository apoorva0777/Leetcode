class Solution {
public:
    public:
    bool checkValidity(const vector<int>& derived, int start) {
        int n = derived.size();
        vector<int> original(n);
        original[0] = start;

        for (int i = 1; i < n; i++) {
            original[i] = original[i - 1] ^ derived[i - 1];
        }

        return (original[n - 1] ^ original[0]) == derived[n - 1];
    }

    bool doesValidArrayExist(vector<int>& derived) {
        return checkValidity(derived, 0) || checkValidity(derived, 1);
    }
};