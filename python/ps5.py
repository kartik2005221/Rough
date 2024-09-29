# Create an empty dictionary. Allow 4 friends to enter their favorite language as value and use key as their names. Assume that the names are unique
kk={}

a1=input("Enter Your name : ")
b1=input("enter your fav language : ")
a2=input("\nEnter Your name : ")
b2=input("enter your fav language : ")
a3=input("\nEnter Your name : ")
b3=input("enter your fav language : ")
a4=input("\nEnter Your name : ")
b4=input("enter your fav language : ")

kk.update({a1:b1, a2:b2, a3:b3, a4:b4})
print(kk)