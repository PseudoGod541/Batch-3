class student:
    def __init__(self,name,current_class,id):
        self.name=name
        self.current_class=current_class
        self.id=id

    def __repr__(self):
        return f'Student name:{self.name},class:{self.current_class},id:{self.id}'

class teacher:
    def __init__(self,name,subject,id):
        self.name=name
        self.subject=subject
        self.id=id
    
    def __repr__(self):
        return f'teacher name is {self.name} subject:{self.subject} id:{self.id}'

class school:
    def __init__(self,name):
        self.name=name
        self.teacher=[]
        self.students=[]
    
    def add_teacher(self,name,subject):
        id= len(self.teacher)+101
        Teacher=teacher(name,subject,id)
        self.teacher.append(Teacher)
    def enroll(self,name,fee):
        if fee<6500:
            return f'not enough'
        else:
            id=len(self.students)+1
            students=student(name,'C',id)
            self.students.append(students)
            return f'{name} is enrolled with id:{id},extra money {fee-6500}'


