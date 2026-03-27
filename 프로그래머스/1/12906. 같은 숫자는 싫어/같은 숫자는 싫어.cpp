#include <vector>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    stack<int> s;
    for(auto i : arr)
    {
        if (s.empty()) s.push(i);
        else if (s.top() != i) s.push(i);
    }
    
    while(!s.empty()) {
        answer.push_back(s.top());
        s.pop();
    }

    reverse(answer.begin(), answer.end());
    return answer;
}