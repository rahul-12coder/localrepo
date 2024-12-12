#Basic Calculator!!
# num1=int(input("Enter Your No. = "))
# num2=int(input("Enter Your Second No. ="))
# print("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division")
# choice=int(input("Enter Your Choice In No. = "))
# if(choice==1):
#     c=num1+num2
#     print(f"Additon of {num1} and {num2} is {c}")
# elif(choice==2):
#     c=num1-num2
#     print(f"Subtraction of {num1} and {num2} is {c}")
# elif(choice==3):
#     c=num1*num2
#     print(f"Multiplication of {num1} and {num2} is {c}")
# elif(choice==4):
#     c=num1/num2
#     print(f"Division of {num1} and {num2} is {c}")
# else:
#     print("Please Enter Correct Input!!")

#Odd or Even
# num=int(input("Enter Your Number = "))
# if(num%2==0):
#     print(f"Even Number {num}")
# else:
#     print(f"Odd number {num}")


#Number Gussing Game
# import random
# print(f"Hello Gamer,and your Welcome in Gussing Game ")
# print(f"Here, You have to Guess a no. in between 1 to 10 ")
# print(f"Let's Start !!")
# ran=random.randint(1,11)
# guess=None
# while guess!=ran:
#     guess=int(input("Enter your guess = ")) 
#     if guess>ran:
#         print("Too High!! Try again!!")
#     elif guess<ran:
#         print("Too low!! Try again!!")
#     else:
#         print("Congratulation!! You have guessed the correct number=",guess)

#Fibonacci Sequence 
# def fibonacci_seq(num):
#     fibonacci=[]
#     a,b=0,1
#     for _ in range(num):
#         fibonacci.append(a)
#         a,b=b,a+b
#     return fibonacci

# n=int(input("Enter your Nth Number = "))
# print(fibonacci_seq(n))