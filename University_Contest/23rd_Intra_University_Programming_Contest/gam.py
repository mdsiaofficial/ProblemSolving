t=int(input())
for h in range(1,t+1):
    n=int(input())
    ss=input()
    lc=0
    uc=0
    for i in range(len(ss)):
        arr=[n]
        arr[i]=ss[i]
        for j in range(len(ss)):
            if arr[j]>='a' and arr[j]<='z':
                lc+=1
            elif arr[j]>='A' and arr[j]<='Z':
                uc+=1

    if lc>uc:
        print("Alice")
    elif uc>lc:
        print("Bob")
