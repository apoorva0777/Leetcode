class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for (const auto& edge : edges) {
            graph[edge[0] - 1].push_back(edge[1] - 1);  
            graph[edge[1] - 1].push_back(edge[0] - 1);
        }
        auto bfs = [&](int start) -> int {
            queue<pair<int, int>> q;  // {node, group}
            vector<int> visited(n, -1);
            
            q.push({start, 1});
            visited[start] = 1;
            int maxGroup = 1;
            
            while (!q.empty()) {
                auto [node, group] = q.front();
                q.pop();
                
                for (int next : graph[node]) {
                    if (visited[next] != -1) {
                        if (abs(visited[next] - group) != 1) {
                            return -1;
                        }
                    } else {
                        visited[next] = group + 1;
                        maxGroup = max(maxGroup, group + 1);
                        q.push({next, group + 1});
                    }
                }
            }
            
            return maxGroup;
        };
        
        auto findComponents = [&]() -> vector<vector<int>> {
            vector<bool> seen(n);
            vector<vector<int>> components;
            
            for (int node = 0; node < n; node++) {
                if (!seen[node]) {
                    vector<int> component;
                    queue<int> q;
                    q.push(node);
                    
                    while (!q.empty()) {
                        int curr = q.front();
                        q.pop();
                        
                        if (!seen[curr]) {
                            seen[curr] = true;
                            component.push_back(curr);
                            
                            for (int next : graph[curr]) {
                                if (!seen[next]) {
                                    q.push(next);
                                }
                            }
                        }
                    }
                    components.push_back(component);
                }
            }
            
            return components;
        };
        int result = 0;
        vector<vector<int>> components = findComponents();
        
        for (const auto& component : components) {
            int maxGroups = -1;
            
            for (int start : component) {
                int groups = bfs(start);
                maxGroups = max(maxGroups, groups);
            }
        
            if (maxGroups == -1) {
                return -1;
            }
            
            result += maxGroups;
        }
        
        return result;
    }
};