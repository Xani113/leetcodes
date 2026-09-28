class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1);
        int* data = row.data();
        data[0] = 1;

        long long val = 1;
        for (int i = 1; i <= rowIndex; ++i) {
            val = val * (rowIndex - i + 1) / i;
            data[i] = val;
        }

        return row;
    }
};