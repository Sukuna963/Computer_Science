/***************************************************************
* Author: Leonardo Marques
* LeetCode: Medium
***************************************************************/

/* RunTime = 121ms
    Code Sample (Runtime: 121ms)

class Solution {
public:
    vector<vector<int>>&& onesMinusZeros(vector<vector<int>>& grid) {
        const int M = grid.size();
        const int N = grid[0].size();

        row_sum_[0] = 0;
        for (int j = 0; j < N; ++j) {
            col_sum_[j] = grid[0][j];
            row_sum_[0] += grid[0][j];
        }

        for (int i = 1; i < M; ++i) {
            row_sum_[i] = 0;
            for (int j = 0; j < N; ++j) {
                row_sum_[i] += grid[i][j];
                col_sum_[j] += grid[i][j];
            }
        }

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                grid[i][j] = 2 * row_sum_[i] + 2 * col_sum_[j] - M - N;
            }
        }

        return move(grid);
    }

private:
    static constexpr int LIMIT = 1e5;
    static array<int, LIMIT> col_sum_;
    static array<int, LIMIT> row_sum_;
};

array<int, Solution::LIMIT> Solution::col_sum_;
array<int, Solution::LIMIT> Solution::row_sum_;

static const int FAST__ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
*/

// RunTime = 183ms
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row_size = grid.size(), col_size = grid[0].size();
        vector<int> onesRow(row_size, 0);
        vector<int> onesCol(col_size, 0);

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                if(grid[i][j] == 1) {
                    onesRow[i]++;
                }
            }
        }

        for(int i = 0; i < col_size; i++) {
            for(int j = 0; j < row_size; j++) {
                if(grid[j][i] == 1) {
                    onesCol[i]++;
                }
            }
        }

        vector<vector<int>> diff(row_size, vector<int>(col_size));

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                diff[i][j] = onesRow[i] + onesCol[j] - (row_size - onesRow[i]) - (col_size - onesCol[j]);
            }
        }

        return diff;
    }
};