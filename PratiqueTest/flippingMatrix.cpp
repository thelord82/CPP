#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int flippingMatrix(vector<vector<int> > matrix) {
    int n = matrix.size();
    cout << "n vaut : " << n << endl;
    int result = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp1 = matrix[i][j];
            int temp2 = matrix[n - i - 1][j];
            int temp3 = matrix[i][n - j - 1];
            int temp4 = matrix[n - i - 1][n - j - 1];
            result += std::max(std::max(temp1, temp2), std::max(temp3, temp4));
        }
    }
    return result;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<vector<int>> matrix(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            matrix[i].resize(2 * n);

            string matrix_row_temp_temp;
            getline(cin, matrix_row_temp_temp);

            vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

            for (int j = 0; j < 2 * n; j++) {
                int matrix_row_item = stoi(matrix_row_temp[j]);

                matrix[i][j] = matrix_row_item;
            }
        }

        int result = flippingMatrix(matrix);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}