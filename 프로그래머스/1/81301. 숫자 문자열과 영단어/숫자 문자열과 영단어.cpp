#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = 0; i < 10; i++) {
        size_t pos;
        while ((pos = s.find(words[i])) != string::npos) {
            s.replace(pos, words[i].length(), to_string(i));
        }
    }
    
    return stoi(s);
}