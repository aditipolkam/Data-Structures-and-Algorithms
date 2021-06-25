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
import sys

#function for union
def union(list1,list2):
    u_list = list1.copy()
    for i in list2:
        if i not in u_list:
            u_list.append(i)
    return u_list


#function for intersection
def intersection(list1,list2):
    i_list = []
    for i in list1:
        if i in list2:
            i_list.append(i)
    return i_list

#function for difference
def difference(list1,list2):
    d_list = []
    for i in list1:
        if i not in list2:
            d_list.append(i)
    return d_list

#function for symmetric difference
def symm_diff(list1,list2):
    s_list = union(difference(list1,list2),difference(list2,list1))
    return s_list

#print function
def userchoice():
    choice = input("\nDo you want to continue? Type yes/no.")
    return choice

#universal set of students
SEComp = []
total = int(input("Enter the total number of students in class:"))
for i in range(0,total):
    name = input()
    SEComp.append(name)
SEComp = removeDuplicate(SEComp)

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


print("List of students:", str(SEComp))
print("Cricket:",str(cricket))
print("Badminton:",str(badminton))
print("Football:",str(football))

choice = "yes"
while choice == "yes":
    print("1.List of students who play both cricket and badminton.")
    print("2.List of students who play either cricket or badminton but not both.")
    print("3.Number of students who play neither cricket nor badminton.")
    print("4.Number of students cricket and football but not badminton.")
    print("5.Exit menu")
    op = int(input("Enter your choice:"))
    
    if op == 1:
        f_list = intersection(cricket,badminton)
        print("List of students who play both cricket and badminton is :\n", f_list)

    elif op == 2:
        f_list = symm_diff(cricket,badminton)
        print("List of students who play either cricket or badminton but not both is :\n", f_list)
    
    elif op == 3:
        f_list = difference(SEComp,union(cricket,badminton))
        print("Number of students who play neither cricket nor badminton", len(f_list))

    elif op == 4:
        f_list = difference(intersection(cricket,football),badminton)
        print("Number of students cricket and football but not badminton", len(f_list))

    elif op == 5:
        choice = "no"
        sys.exit()

    else:
        print("Wrong Choice")

    userchoice()
