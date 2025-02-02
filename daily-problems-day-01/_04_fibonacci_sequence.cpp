#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> fibonacci(int n){
    int first = 0;
    int second = 1;
    int next = 0;

    vector<int> series;

    series.push_back(second);
    
    for(int i=3;i<=n;i++){
        next = first+second;
        first = second;
        second = next;
        series.push_back(next);
    }
    return series;
}

int main()
{
    int n;
    cin>>n;

    vector<int> new_vec = fibonacci(n);
    for(const auto ele: new_vec){
        cout<<ele<<" ";
    }
    return 0;
}