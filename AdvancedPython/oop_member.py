################################################################
# LATEST | Learn Advanced Python Programming | SOURCE CODE
# Udemy
################################################################

'''
    Data Member: In object-oriented programming(OOP), a data member is a variable or field
    that is associated with a class or an object. (Zamir, Faisal)
'''


class Student:
    # Data Member
    student_id = 0
    student_name = "Jafri"


student = Student()
print(student.student_name)


'''
    Member Function: A member function, aldo know as a method, is a function that is de4fined
    within a class and operates on the data members and other members of that class. (Zamir, Faisal)
'''


class Student:
    # Data Member
    student_id = 0
    student_name = ""

    # Member Function
    def display_student_info(self):
        print("Student ID: ", self.student_id)
        print("Student Name: ", self.student_name)


stud = Student()
stud.student_id = 10
stud.student_name = "JafriCode"


stud.display_student_info()