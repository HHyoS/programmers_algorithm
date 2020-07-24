#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(int a = 0; a < participant.size(); a++){
        auto iter = find(completion.begin(), completion.end(), participant[a]);
        if(iter!= completion.end()){
           int index = distance(completion.begin(), iter);
            completion.erase(completion.begin()+index);
           }
        else{
            answer = participant[a];
            break;
    }
    }
    return answer;
}
