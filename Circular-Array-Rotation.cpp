#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'circularArrayRotation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 */

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    int n = a.size();
    vector<int> result(n);
    
    for (int i = 0; i < n; ++i)
    {
        result[(i+k) % n] = a[i];
    }
    
    for (int i = 0; i < queries.size(); ++i)
    {
        queries[i] = result[queries[i]];
    }    
                        
    return queries;        
}
