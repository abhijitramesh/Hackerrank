a = int(input())
b = list(map(float,input().split(' ')))
positive = 0
zero = 0
negative =0
for i in range(a):
	if(b[i]>0):
		positive = positive + 1
	elif(b[i]==0):
		zero = zero + 1
	elif(b[i]<0):
		negative = negative + 1
pos = '{:.6f}'.format(round((positive/a),6))
neg = '{:.6f}'.format(round((negative/a),6))
zer = '{:.6f}'.format(round((zero/a),6))
print(pos)
print(neg)
print(zer)