#!/usr/bin/python3
a=input("input a:");
b=input("input b:");
num1=int(a);
num2=int(b);
sum=0;
while num2!=0 :
		sum=num1^num2
		num2=int((num1&num2)<<1)
		print(num2) 
		print("\n")
		num1=sum
print(num1)