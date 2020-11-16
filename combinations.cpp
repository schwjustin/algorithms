void helper(vector<vector<string> > matrix, vector<vector<string> > &r, vector<string> arr, int i, int max) {
    int l = matrix[0].size();
    for (int j = 0; j<l; j++) {
        vector<string> a = arr;
        a.push_back(matrix[i][j]);
        if (i == max) {
            r.push_back(a);
        } else {
            helper(matrix, r, a, i+1, max);
        }
    }
}

// generates a matrix of all combinations of sets of one element from each array from n arrays
vector<vector<string> > combos(vector<vector<string> > matrix) {
    vector<vector<string> > r; 
    vector<string> arr;
    int max = matrix.size()-1;
    helper(matrix, r, arr, 0, max);
    return r;
}