#include <iostream>
#include <vector>

using namespace std;

// The solution to the sparse array function
vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    vector<int> result;
    
    for (int q = 0; q < queries.size(); q++)
    {
        int count = 0;
        
        for (int s = 0; s < strings.size(); s++)
        {
            if (queries[q] == strings[s])
            {
                count++;
            }
        }
        result.push_back(count);
    }
    
    return result;
}



int main(void)
{
    // User input to get the maximum size of the vector containing strings
    int stringsCount;
    cin >> stringsCount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    vector<string> strings(stringsCount);
    
    // User input to fill in the vector containing strings
    for (int i = 0; i < stringsCount; i++)
    {
        string stringItem;
        getline(cin, stringItem);
        
        strings[i] = stringItem;
    }
    
    // User input to get the maximum size of the vector containing queries
    int queriesCount;
    cin >> queriesCount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    vector<string> queries(queriesCount);
    
    // User input to fill in the vector containing queries
    for (int i = 0; i < queriesCount; i++)
    {
        string queriesItem;
        getline(cin, queriesItem);
        
        queries[i] = queriesItem;
    }
    
    vector<int> res = matchingStrings(strings, queries);
    
    // Displaying the result
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        
        if (i != res.size() - 1)
        {
            cout << endl;
        }
    }
    
    cout << endl;
    
    return 0;
}
