function solution(t, p) {
    var answer = 0;
    var len = p.length;
    
    for (var i = 0; i + len <= t.length; i++){
        var sub = t.substring(i, i + len);
        if (sub <= p) answer++;
    }
    return answer;
}