class Matrix {
    public :
        vector <vector <int> > a;
};

Matrix operator + (Matrix& p, Matrix& q) {
            Matrix res;
            int col = p.a [0].size ();
            int row = p.a.size ();
            int i, j;
            for (i = 0; i < row; i++) {
                vector <int> r;
                int sum;
                for (j = 0; j < col; j++) {
                    sum = p.a [i][j] + q.a [i][j];
                    r.push_back (sum);
                }
                res.a.push_back (r);
            }
            return res;
        }
