function solution(s) {
    var answer = [];
    var lastSeen = {}; // 마지막으로 본 위치를 저장하는 표
    
    for (var i = 0 ; i < s.length; i++) {
        var ch = s[i]; // 지금 보고 있는 글자
        
        if(lastSeen.hasOwnProperty(ch)){
            answer.push(i - lastSeen[ch]); // 거리 계산해서 저장
        } else {
            answer.push(-1); // 처음 보는 글자
        }
        
        lastSeen[ch] = i // 지금 위치로 최신화
    }
    return answer;
}