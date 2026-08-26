def kiem_tra_toan_chan(s):
    for char in s:
        if char not in '02468':
            return False 
    return True
t = int(input())
for _ in range(t):
    n = int(input())
    for i in range(2, 889): 
        nua_dau = str(i)
        if kiem_tra_toan_chan(nua_dau):
            m_str = nua_dau + nua_dau[::-1]        
            m = int(m_str) 
            if m >= n:
                break
                
            print(m, end=" ")
            
    print()
    