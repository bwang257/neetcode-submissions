class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        // int l_col = 0, l_row = 0;
        // int r_col = cols - 1, r_row = rows - 1;

        int left = 0, right = (rows * cols) - 1;
        while (left <= right){
            int mid = left + (right - left) / 2;
            int mid_r = mid / cols;
            int mid_c = mid - (mid_r * cols);
            int check = matrix[mid_r][mid_c];
            std::cout << check << '\n';
            if (check == target){
                return true;
            } else if (check < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;

    }
};
