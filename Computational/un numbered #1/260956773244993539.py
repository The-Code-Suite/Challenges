# Submission by PleasantlyInebriated#7082
#   Date: 2021-09-14

n = int(input())
for i in range(1,n+1):
    for j in range(1,n+1):
        print(str(i * j),end='')
        if j != n:
            print(',',end='')
    print('')
