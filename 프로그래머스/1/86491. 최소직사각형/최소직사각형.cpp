#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> x;
    vector<int> y;
    for (auto v : sizes) {
        if (v[0]>v[1]) {
            x.push_back(v[0]);
            y.push_back(v[1]);
        }
        else {
            x.push_back(v[1]);
            y.push_back(v[0]);
        }
    }
    
    int xi=0,yi=0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] > xi) xi = x[i];
        if (y[i] > yi) yi = y[i];
    }
    return xi*yi;
}