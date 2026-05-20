
def solution(s):
        balance = 0
        is_valid = True
        
        for ch in s:
            if ch == '(':
                balance += 1
            elif ch == ')':
                balance -= 1
            if balance < 0:
                is_valid = False
                
        if is_valid and balance == 0:
            return True
        else:
            return False