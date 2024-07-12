#simplify fraction 
#most simplified version of any fraction is when the common factor is 1
num=8
den=8
if den<=num:
    i=2
    while(i<=den):
        if (num%i==0 and den%i==0):
            num=num/i
            den=den/i
            i=2
        else:
            i=i+1
                
elif den>num:
    i=2
    while(i<=num):
        if (num%i==0 and den%i==0):
            num=num/i
            den=den/i
            i=2
        else:
            i=i+1
     
print("{}/{}".format(num,den))
