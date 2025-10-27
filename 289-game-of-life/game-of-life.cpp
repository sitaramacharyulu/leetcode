class Solution {
public:
    int fun(vector<vector<int>>& curr, int i, int j, int m, int n) {
        int live = 0;

        if (i > 0 && curr[i - 1][j] == 1)
            live++;
        if (i < m - 1 && curr[i + 1][j] == 1)
            live++;
        if (j > 0 && curr[i][j - 1] == 1)
            live++;
        if (j < n - 1 && curr[i][j + 1] == 1)
            live++;

        if (i > 0 && j > 0 && curr[i - 1][j - 1] == 1)
            live++;
        if (i > 0 && j < n - 1 && curr[i - 1][j + 1] == 1)
            live++;
        if (i < m - 1 && j > 0 && curr[i + 1][j - 1] == 1)
            live++;
        if (i < m - 1 && j < n - 1 && curr[i + 1][j + 1] == 1)
            live++;

        return live;
    }

    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> curr = board;
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live = fun(curr, i, j, m, n);

                if (board[i][j] == 0) {
                    if (live == 3)
                        board[i][j] = 1;
                } else {
                    if (live < 2 || live > 3)
                        board[i][j] = 0;
                }
            }
        }
    }
};
