class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return solve(grid, 0, n, 0, n);
    }

    Node* solve(vector<vector<int>>& grid, int r1, int r2, int c1, int c2) {
        int check_val = grid[r1][c1];
        bool leaf = true;

        for (int i = r1; i < r2; i++) {
            for (int j = c1; j < c2; j++) {
                if (grid[i][j] != check_val) {
                    leaf = false;
                    break;
                }
            }
            if (!leaf) break;
        }

        if (leaf) {
            return new Node(check_val, true);
        }

        int rm = (r1 + r2) / 2;
        int cm = (c1 + c2) / 2;

        Node* node = new Node(0, false);

        node->topLeft = solve(grid, r1, rm, c1, cm);
        node->topRight = solve(grid, r1, rm, cm, c2);
        node->bottomLeft = solve(grid, rm, r2, c1, cm);
        node->bottomRight = solve(grid, rm, r2, cm, c2);

        return node;
    }
};