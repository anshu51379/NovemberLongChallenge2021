finalInput=int(input())
for _ in range(finalInput):
    n,e=map(int,input().split())
    tmp={n:[]}
    for i in range(1,n):
        tmp[i]=[i+1]
        print(i,i+1)
        e-=1
    end=3
    while e>0:
        for i in range(1,end):
            
            if tmp[i][-1]<end:
                tmp[i].append(end)
                print(i,end)
                e-=1
                if e==0:break

        end+=1
