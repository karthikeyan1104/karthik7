def avg(l,n):
	sum=0
	for i in range(n):
		sum+=l[i]
	print(sum/nu)
def main():
	try:
		n=int(input())
		l=[]
		for i in range(n):
			l.append(int(input()))
		avg(l,n)
	except:
		print('invalid')
main()
