def solution(board, moves):
    basket = []
    answer = 0
    
    for m in moves:
        col = m - 1
        for row in range(len(board)):
            doll = board[row][col]
            if doll != 0:
                board[row][col] = 0
                if basket and basket[-1] == doll:
                    basket.pop()
                    answer += 2
                else:
                    basket.append(doll)
                break
                
    return answer