#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    bool T = 1;
    string s;

    for(int i =0; i<skill_trees.size(); i++){
        T = 1;
        s = "";
        for(int j = 0; j<skill_trees[i].size(); j++){
            if(skill.find(skill_trees[i][j]) != string::npos){
                s.push_back(skill_trees[i][j]);
            }
        }

        for(int j = 0; j<s.length(); j++){
            if(s[j] != skill[j]){
                T = 0;
                break;
            }
        }

        if(T){
            answer++;
        }
    }

    return answer;
}