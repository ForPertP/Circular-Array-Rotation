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
