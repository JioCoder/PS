from collections import Counter

def solution(participant, completion):
    answer = Counter(participant)
    answer -= Counter(completion)
    return list(answer.keys())[0]