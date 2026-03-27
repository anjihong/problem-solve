#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void make_num(string combined, string others, set<int>& nums)
{
    if (combined != "") nums.insert(stoi(combined));
    for (int i = 0; i < others.size(); i++)
    {   
        make_num(combined + others[i], others.substr(0,i)+others.substr(i+1), nums);
    }
}

bool is_prime(int num) 
{
    if (num < 2) return false;
    if (num == 2) return true;
    for (int i = 2; i*i <= num; i++) {
        if (num%i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    set<int> s;
    make_num("",numbers,s);
    for (auto it = s.begin(); it != s.end(); it++) {
        if (is_prime(*it)) answer++;
    }

    return answer;
}