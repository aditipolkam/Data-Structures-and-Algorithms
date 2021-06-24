'''
Practical No. 1 : In a second year computer engineering class, group A students play cricket, group B students play
                   badminton and group C students play football.
                   Write a python program using functions to compute following:
                   a) List of students who play both cricket and badminton.
                   b) List of students who play either cricket or badminton but not both.
                   c) Number of students who play neither cricket nor badminton.
                   d) Number of students who play cricket and football but not badminton.
(NOTE : While realising the group, duplicate entries should be avoided. Do not use SET built-in functions)
''' 
#function to remove duplicate values
def removeDuplicate(d):
    lst=[]
    for i in d:
        if i not in lst:
            lst.append(i)
    return lst

#universal set of students
SEComp = []
total = int(input("Enter the total number of students in class:"))
for i in range(0,total):
    name = input()
    SEComp.append(name)

#set of students playing cricket
cricket = []
c_total = int(input("Enter the total number of students playing cricket:"))
for i in range(0,c_total):
    c_name = input()
    cricket.append(c_name)

#set of students playing badminton
badminton = []
b_total = int(input("Enter the total number of students playing badminton:"))
for i in range(0,b_total):
    b_name = input()
    badminton.append(b_name)

#set of students playing football
football = []
f_total = int(input("Enter the total number of students playing football:"))
for i in range(0,f_total):
    f_name = input()
    football.append(f_name)


print("List of students:",+ str(SEComp))

choice = "yes"
while choice == "yes":
    print("1.List of students who play both cricket and badminton.")
    print("2.List of students who play either cricket and badminton but not both.")
    print("3.Number of students who play neither cricket nor badminton.")
    print("4.Number of students cricket and football but not badminton.")
    print("5.Exit menu")
    op = int(input("Enter your choice:"))
    
    if op == 1:
        #
    elif op == 2:
        #
    elif op == 3:
    
    elif op == 4:

    elif op == 5:

    else:
        choice = "no"

    choice = input("Do you want to continue? Type yes/no.")

#to be continued