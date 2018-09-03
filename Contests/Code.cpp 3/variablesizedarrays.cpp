    int n, q, i = 0, j;
    int t;
    cin >> n >> q;
    int *arr [n];
    
    while (i < n) {
       j = 0;
       cin >> t;
        arr [i] = new int [t];
        while (j < t) {
            cin >> arr [i][j];
            j++;
        }
        i++;
    }
    while (q > 0) {
        int a, b;
        cin >> a >> b;
        cout << arr [a][b] << endl;
        q--;
    }
	return 0;
}
