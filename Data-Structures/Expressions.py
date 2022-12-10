from queue import LifoQueue

par = LifoQueue()
resp = "S"

x = int(input())



for i in range(0, x):
    pal = input()
    par = LifoQueue()
    resp = "S"
    if pal[0] == ")" or pal[0] == "]" or pal[0] == "}":
        print("N")
        continue
    for sim in pal:
        if sim == "(":
            par.put("(")
        elif sim == "[":
            par.put("[")
        elif sim == "{":
            par.put("{")
        elif sim == ")":
            if par.qsize() == 0:
                resp = "N"
                break
            aux = par.get()
            if aux != "(":
                resp = "N"
            
        elif sim == "]":
            if par.qsize() == 0:
                resp = "N"
                break
            aux = par.get()
            if aux != "[":
                resp = "N"
                
        elif sim == "}":
            if par.qsize() == 0:
                resp = "N"
                break
                
            aux = par.get()
            if aux != "{":
                resp = "N"
    
    tam = par.qsize()
    if tam == 0:
        print(resp)
    else:
        print("N")     
   


