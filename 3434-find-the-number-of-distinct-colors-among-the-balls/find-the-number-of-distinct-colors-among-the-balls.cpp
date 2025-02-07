class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballColor;
        unordered_set<int> distinctColors;
        vector<int> result;

        for (auto& query : queries) {
            int ball = query[0], color = query[1];

            if (ballColor.count(ball)) {
                int prevColor = ballColor[ball];
                if (prevColor != color) {
                    ballColor[ball] = color;

                    bool stillExists = false;
                    for (auto& it : ballColor) {
                        if (it.second == prevColor) {
                            stillExists = true;
                            break;
                        }
                    }
                    if (!stillExists) distinctColors.erase(prevColor);
                }
            } else {
                ballColor[ball] = color;
            }

            distinctColors.insert(color);
            result.push_back(distinctColors.size());
        }

        return result;
    }
};