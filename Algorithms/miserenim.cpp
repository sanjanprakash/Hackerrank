#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the misereNim function below.
string misereNim(vector<int> s) {
    int ans = 0, i,num_ones = 0;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == 1)
            num_ones++;
        ans ^= s[i];
    }
    if (num_ones == s.size() && ans != 0 && num_ones % 2 == 1)
        return "Second";
    else if (num_ones == s.size() && ans != 0 && num_ones % 2 == 0)
        return "First";
    else if (num_ones >= 0 && ans == 0 && num_ones < s.size())
        return "Second";
    else
        return "First";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string s_temp_temp;
        getline(cin, s_temp_temp);

        vector<string> s_temp = split_string(s_temp_temp);

        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            int s_item = stoi(s_temp[i]);

            s[i] = s_item;
        }

        string result = misereNim(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
