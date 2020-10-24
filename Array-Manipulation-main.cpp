#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries)
{
    vector<long int> outputArray(n, 0);
    
    for (long i = 0; i < queries.size(); i++)
    {
        outputArray[(queries[i][0]) - 1] += queries[i][2];
        // outputArray[(queries[i][0]) - 1] = outputArray[(queries[i][0]) - 1] + queries[i][2];
        
        if (queries[i][1] < n)
        {
            outputArray[(queries[i][1])] -= queries[i][2];
            // outputArray[(queries[i][1])] = outputArray[(queries[i][1])] - queries[i][2];
        }
    }
    long max = 0;
    long sum   = 0;
    
    for (long i = 0; i < n; i++)
    {
        sum += outputArray[i];   // sum = sum + outputArray[i];
        
        if (sum > max)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    string nm_temp;
    getline(cin, nm_temp);
    
    vector<string> nm = split_string(nm_temp);
    
    int n = stoi(nm[0]);
    
    int m = stoi(nm[1]);
    
    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++)
    {
        queries[i].resize(3);
        
        for (int j = 0; j < 3; j++)
        {
            cin >> queries[i][j];
        }
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    long result = arrayManipulation(n, queries);
    
    cout << result << endl;
    
    return 0;
} // end of main

vector<string> split_string(string input_string)
{
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
} // end of split_string

