#A discovered check which exposes my king needs to be accounted for

def waysToGiveACheck(board):
    pawns,bish,rook,queen = [],[],[],[]
    #print board
    for i in range(8) :
        for j in range(8) :
            if (board[i][0][j] == 'Q') :
                queen.append((i,j))
            elif (board[i][0][j] == 'R') :
                rook.append((i,j))
            elif (board[i][0][j] == 'B') :
                bish.append((i,j))            
            if (i == 1) :
                if (board[i][0][j] == 'P') :
                    pawns.append(j)
            if (board[i][0][j] == 'k') :
                bk_r,bk_c = i,j
            if (board[i][0][j] == 'K') :
                wk_r,wk_c = i,j

    #If white king is under check from a black knight
    if (wk_r > 0 and wk_c > 1 and board[wk_r - 1][0][wk_c - 2] == 'n') :
        return 0
    if (wk_r > 0 and wk_c < 6 and board[wk_r - 1][0][wk_c + 2] == 'n') :
        return 0
    if (wk_r < 7 and wk_c > 1 and board[wk_r + 1][0][wk_c - 2] == 'n') :
        return 0
    if (wk_r < 7 and wk_c < 6 and board[wk_r + 1][0][wk_c + 2] == 'n') :
        return 0
    if (wk_r > 1 and wk_c > 0 and board[wk_r - 2][0][wk_c - 1] == 'n') :
        return 0
    if (wk_r > 1 and wk_c < 7 and board[wk_r - 2][0][wk_c + 1] == 'n') :
        return 0
    if (wk_r < 6 and wk_c > 0 and board[wk_r + 2][0][wk_c - 1] == 'n') :
        return 0
    if (wk_r < 6 and wk_c < 7 and board[wk_r + 2][0][wk_c + 1] == 'n') :
        return 0
    
    #If white king is under check from a black rook or black queen - horizontal
    if (wk_r > 0) :
        i = wk_c + 1
        block = False
        while (i < 8 and block == False) :
            if (board[wk_r][0][i] == 'q' or board[wk_r][0][i] == 'r') :
                return 0
            elif (board[wk_r][0][i] != '#') :
                block = True
            i += 1
        i = wk_c - 1
        block = False
        while (i >= 0 and block == False) :
            if (board[wk_r][0][i] == 'q' or board[wk_r][0][i] == 'r') :
                return 0
            elif (board[wk_r][0][i] != '#') :
                block = True
            i -= 1
    if (wk_r == 0) :
        i = wk_c + 1
        check,block = False,False
        while (i < 8 and check == False and block == False) :
            if (board[wk_r][0][i] == 'q' or board[wk_r][0][i] == 'r') :
                check = True
            elif (board[wk_r][0][i] != '#') :
                block = True
            i += 1
        if (check == True) :
            count = 0
            for pc in pawns :
                if (pc <= wk_c or pc >= i - 1) :
                    count += 1
            if (count == len(pawns)) :
                return 0
        i = wk_c - 1
        check,block = False,False
        while (i >= 0 and check == False and block == False) :
            if (board[wk_r][0][i] == 'q' or board[wk_r][0][i] == 'r') :
                check = True
            elif (board[wk_r][0][i] != '#') :
                block = True           
            i -= 1
        if (check == True) :
            count = 0
            for pc in pawns :
                if (pc >= wk_c or pc <= i + 1) :
                    count += 1
            if (count == len(pawns)) :
                return 0

    #If white king is under check from a black rook or black queen - vertical
    i = wk_r + 1
    block = False
    while (i < 8 and block == False) :
        if (board[i][0][wk_c] == 'r' or board[i][0][wk_c] == 'q') :
            return 0
        elif (board[i][0][wk_c] != '#') :
            block = True
        i += 1   
    i = wk_r - 1
    block = False
    while (i >= 8 and block == False) :
        if (board[i][0][wk_c] == 'r' or board[i][0][wk_c] == 'q') :
            return 0
        elif (board[i][0][wk_c] != '#') :
            block = True
        i -= 1
    
    #If white king is under check from a black bishop or black queen - diagonal
    i,j = wk_r - 1,wk_c - 1
    block = False
    while (i >= 0 and j >= 0 and block == False) :
        if (board[i][0][j] == 'b' or board[i][0][j] == 'q') :
            return 0
        elif (board[i][0][j] != '#') :
            block = True
        i -= 1
        j -= 1
    i,j = wk_r - 1,wk_c + 1
    block = False
    while (i >= 0 and j < 8 and block == False) :
        if (board[i][0][j] == 'b' or board[i][0][j] == 'q') :
            return 0
        elif (board[i][0][j] != '#') :
            block = True
        i -= 1
        j += 1
    i,j = wk_r + 1,wk_c - 1
    block = False
    while (i < 8 and j >= 0 and block == False) :
        if (board[i][0][j] == 'b' or board[i][0][j] == 'q') :
            return 0
        elif (board[i][0][j] != '#') :
            block = True
        i += 1
        j -= 1
    i,j = wk_r + 1,wk_c + 1
    block = False
    while (i < 8 and j < 8 and block == False) :
        if (board[i][0][j] == 'b' or board[i][0][j] == 'q') :
            return 0
        elif (board[i][0][j] != '#') :
            block = True
        i += 1
        j += 1

    #Checking if it is safe to move pawn
    #Threat from black rook or black queen
    if (wk_r == 1) :
        cnt = 0
        for j in xrange(len(pawns)) :
            j -= cnt
            #__P__K__
            if (pawns[j] < wk_c) :
                i = pawns[j] - 1
                block,safe = False,True
                while (block == False and i >= 0 and safe == True) :
                    if (board[1][0][i] == 'q' or board[1][0][i] == 'r') : 
                        safe = False
                    elif (board[1][0][i] != '#') :
                        block = True                   
                    i -= 1
                #Check from black rook or black queen
                if (safe == False) :
                    pawns.pop(j)
                    cnt += 1
            #__K__P__            
            else :
                i = pawns[j] + 1
                block,safe = False,True
                while (block == False and i < 8 and safe == True) :
                    if (board[1][0][i] == 'q' or board[1][0][i] == 'r') : 
                        safe = False
                    elif (board[1][0][i] != '#') :
                        block = True                   
                    i += 1
                #Check from black rook or black queen
                if (safe == False) :
                    pawns.pop(j)
                    cnt += 1
    
    if (wk_r == 0) :
        cnt = 0
        for j in xrange(len(pawns)) :
            j -= cnt
            if (pawns[j] - wk_c == 1) :
                r,c = 2,pawns[j] + 1
                block,safe = False,True
                while (block == False and r < 8 and safe == True and c < 8) :
                    if (board[r][0][c] == 'q' or board[r][0][c] == 'b') : 
                        safe = False
                    elif (board[r][0][c] != '#') :
                        block = True                   
                    r += 1
                    c += 1
                if (safe == False) :
                    pawns.pop(j)
                    cnt += 1
            if (wk_c - pawns[j] == 1) :
                r,c = 2,pawns[j] - 1
                block,safe = False,True
                while (block == False and r < 8 and safe == True and c >= 0) :
                    if (board[r][0][c] == 'q' or board[r][0][c] == 'b') : 
                        safe = False
                    elif (board[r][0][c] != '#') :
                        block = True                   
                    r += 1
                    c -= 1
                if (safe == False) :
                    pawns.pop(j)
                    cnt += 1
    else :
        cnt = 0
        for j in xrange(len(pawns)) :
            j -= cnt
            if (wk_r - 1 == abs(wk_c - pawns[j])) :
                if (wk_c > pawns[j]) :
                    r,c = 2,pawns[j] + 1
                    block,safe = False,True
                    while (block == False and r < wk_r and safe == True and c < wk_c) :
                        if (board[r][0][c] == 'q' or board[r][0][c] == 'b') : 
                            safe = False
                        elif (board[r][0][c] != '#') :
                            block = True                   
                        r += 1
                        c += 1
                    if (safe == False) :
                        pawns.pop(j)
                        cnt += 1
                if (wk_c < pawns[j]) :
                    r,c = 2,pawns[j] - 1
                    block,safe = False,True
                    while (block == False and r < wk_r and safe == True and c > wk_c) :
                        if (board[r][0][c] == 'q' or board[r][0][c] == 'b') : 
                            safe = False
                        elif (board[r][0][c] != '#') :
                            block = True                   
                        r += 1
                        c -= 1
                    if (safe == False) :
                        pawns.pop(j)
                        cnt += 1
                        
    
    ans = 0
    #For checks as soon as conversion
    if (bk_r == 0) :
        for pc in pawns :
            if (bk_c < pc) :
                l,r = bk_c,pc
            else :
                l,r = pc,bk_c
            i = l + 1
            block = False
            while (i < r and block == False) :
                if (board[0][0][i] != '#') :
                    block = True
                i += 1
            #Rook or Queen
            if (block == False and board[0][0][pc] == '#') :
                ans += 2
    #For discovered checks by a rook/horizontal queen
    if (bk_r == 1) :
        for pc in pawns :
            #_k___P__
            if (bk_c < pc) :
                i = bk_c + 1
                left_block = False
                while (i < pc and left_block == False) :
                    if (board[1][0][i] != '#') :
                        left_block = True                
                    i += 1
                if (left_block == False) :
                    i = pc + 1
                    block,attack = False, False
                    while (i < 8 and block == False and attack == False) :
                        if (board[1][0][i] == 'K' or board[1][0][i] == 'N' or board[1][0][i] == 'B' or board[1][0][i] == 'p' or board[1][0][i] == 'P' or board[1][0][i] == 'q' or board[1][0][i] == 'r' or board[1][0][i] == 'n' or board[1][0][i] == 'b') :
                            block = True
                        if (board[1][0][i] == 'Q' or board[1][0][i] == 'R') :
                            attack = True
                        i += 1
                    #Any conversion will do
                    if (attack == True and board[0][0][pc] == '#') :
                        ans += 4
                    if (attack == False and board[0][0][pc] == '#') :
                        #Knight                        
                        if (abs(pc - bk_c) == 2) :
                            ans += 1
                        #Bishop or Queen
                        elif (abs(pc - bk_c) == 1) :
                            ans += 2
            #__P__k__          
            else :
                i = pc + 1
                right_block = False
                while (i < bk_c and right_block == False) :
                    if (board[1][0][i] != '#') :
                        right_block = True                
                    i += 1
                if (right_block == False) :
                    i = pc - 1
                    block,attack = False, False
                    while (i >= 0 and block == False and attack == False) :
                        if (board[1][0][i] == 'K' or board[1][0][i] == 'N' or board[1][0][i] == 'B' or board[1][0][i] == 'p' or board[1][0][i] == 'P' or board[1][0][i] == 'q' or board[1][0][i] == 'r' or board[1][0][i] == 'n' or board[1][0][i] == 'b') :
                            block = True
                        if (board[1][0][i] == 'Q' or board[1][0][i] == 'R') :
                            attack = True
                        i -= 1
                    #Any conversion will do
                    if (attack == True and board[0][0][pc] == '#') :
                        ans += 4
                    if (attack == False and board[0][0][pc] == '#') :
                        #Knight                        
                        if (abs(pc - bk_c) == 2) :
                            ans += 1
                        #Bishop or Queen
                        elif (abs(pc - bk_c) == 1) :
                            ans += 2
    else :
        for pc in pawns :
            #For discovered checks by a bishop/diagonal queen
            if (abs(1 - bk_r) == abs(pc - bk_c)) :
                #For this kind of diagonal - /            
                if (bk_c < pc) :
                    block = False
                    r,c = 2,pc - 1
                    while (r < bk_r and c > bk_c and block == False) :
                        if (board[r][0][c] != '#') :
                            block = True                    
                        r += 1
                        c -= 1
                    #Any conversion will do
                    if (block == False and board[0][0][pc] == '#' and board[0][0][pc + 1] == 'Q') :
                        ans += 4
                    #Any conversion will do
                    if (block == False and board[0][0][pc] == '#' and board[0][0][pc + 1] == 'B') :
                        ans += 4
                    #Knight
                    if (block == True and board[0][0][pc] == '#' and bk_r == 2 and abs(bk_c - pc) == 1) :
                        ans += 1
                #For this kind of diagonal - \
                if (bk_c > pc) :
                    block = False
                    r,c = 2,pc + 1
                    while (r < bk_r and c < bk_c and block == False) :
                        if (board[r][0][c] != '#') :
                            block = True                    
                        r += 1
                        c += 1
                    #Any conversion will do
                    if (block == False and board[0][0][pc] == '#' and board[0][0][pc - 1] == 'Q') :
                        ans += 4
                    #Any conversion will do
                    if (block == False and board[0][0][pc] == '#' and board[0][0][pc - 1] == 'B') :
                        ans += 4
                    #Knight
                    if (block == True and board[0][0][pc] == '#' and bk_r == 2 and abs(bk_c - pc) == 1) :
                        ans += 1
            
            block = False
            r = 2
            #Rook or vertical Queen
            if (pc == bk_c) :
                while (r < bk_r and block == False) :
                    if (board[r][0][pc] != '#') :
                        block = True
                    r += 1
                if (board[0][0][pc] == '#' and block == False) :
                    ans += 2
            #Bishop or diagonal Queen
            if (board[0][0][pc] == '#') :
                #For this kind of diagonal - \                
                if (pc < bk_c and bk_c - pc == bk_r) :
                    r,c = 1,pc + 1
                    block = False
                    while (r < bk_r and c < bk_c and block == False) :
                        if (board[r][0][c] != '#') :
                            block = True
                        c += 1
                        r += 1
                    if (block == False) :
                        ans += 2
                #For this kind of diagonal - /               
                if (pc > bk_c and pc - bk_c == bk_r) :
                    r,c = 1,pc - 1
                    block = False
                    while (r < bk_r and c > bk_c and block == False) :
                        if (board[r][0][c] != '#') :
                            block = True
                        c -= 1
                        r += 1
                    if (block == False) :
                        ans += 2
    return ans  

if __name__ == "__main__":
    t = int(raw_input().strip())
    for a0 in xrange(t):
        board = []
        for board_i in xrange(8):
            board_temp = map(str,raw_input().strip().split(' '))
            board.append(board_temp)
        result = waysToGiveACheck(board)
        print result
