# Write a program to accept marks of 6 students and display them in a sorted manner

list = []

a=int(input("enter marks of student 1 : "))
list.append(a)
b=int(input("enter marks of student 2 : "))
list.append(b)
c=int(input("enter marks of student 3 : "))
list.append(c)
d=int(input("enter marks of student 4 : "))
list.append(d)
e=int(input("enter marks of student 5 : "))
list.append(e)
f=int(input("enter marks of student 6 : "))
list.append(f)

list.sort()

print(list)