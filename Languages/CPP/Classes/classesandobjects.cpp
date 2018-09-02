class Student {
    public :
        int a, b, c, d, e;
        void Input () {
            cin >> a >> b >> c >> d >> e;
        }
        
        int CalculateTotalScore () {
            return a + b + c + d + e;
        }
};
