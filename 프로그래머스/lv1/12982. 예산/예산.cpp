#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    for(int i=0; i<d.size(); i++){
        if(budget>=d[i]){
            budget -= d[i];
            answer++;
        }
    }
    return answer;
}