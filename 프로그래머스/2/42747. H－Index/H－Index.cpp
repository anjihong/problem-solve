#include <string>

#include <vector>

#include <bits/stdc++.h>



using namespace std;



int find(int low, int high, const vector<int>& c) {
    if (low > high) return high; // 탐색 종료 조건

    int mid = (low + high) / 2;
    int q = 0;

    // mid번 이상 인용된 논문 개수(q)를 직접 카운트
    for (int x : c) {
        if (x >= mid) q++;
    }

    if (q >= mid) {
        // mid만큼은 만족했으니, 더 큰 값이 있는지 오른쪽을 찾음
        return find(mid + 1, high, c);
    } else {
        // mid를 만족 못 했으니, 더 작은 범위인 왼쪽을 찾음
        return find(low, mid - 1, c);
    }
}

int solution(vector<int> citations) {
    // low는 0, high는 논문의 총 개수로 잡는 것이 정확합니다.
    return find(0, citations.size(), citations);
}