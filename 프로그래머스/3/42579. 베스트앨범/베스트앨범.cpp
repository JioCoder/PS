#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    map<string, int> genre_total;
    map<string, vector<pair<int,int>>> genre_songs;
    
    for (int i = 0; i <genres.size(); i++) {
        genre_total[genres[i]] += plays[i];
        genre_songs[genres[i]].push_back({plays[i], i});
    }
    
    vector<pair<int, string>> sorted_genres;
    for (auto& [genre, total] : genre_total) {
        sorted_genres.push_back({total, genre});
    }
    
    sort(sorted_genres.begin(), sorted_genres.end(), greater<>());
    
    for (auto& [total, genre] : sorted_genres) {
        auto& songs = genre_songs[genre];
        
        sort(songs.begin(), songs.end(), [](const pair<int, int>& a, const pair<int,int>& b){
            if(a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });
        
        for (int i = 0; i < min(2, (int)songs.size()); i++) {
            answer.push_back(songs[i].second);
        }
    }
    
    return answer;
}