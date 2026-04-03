import os

l = 5
name = []
grade = []
count = 0

while True:
    print("\n1. Add\n2. View\n3. Delete\n4. Sort\n5. Average\n6. Exit")
    choice = input("Choice: ")
    
    os.system('cls' if os.name == 'nt' else 'clear') 
    
    match choice:
        case "1":
            if count < l:
                n = input("Name: ")
                g = int(input("Grade: "))
                name.append(n)
                grade.append(g)
                count += 1
            else:
                print("Full!")
        
        case "2":
            if count == 0:
                print("No Records Yet!")
                continue
            
            total = 0
            for i in range(count):
                print(f"{i+1}. {name[i]} - {grade[i]}")
                total += grade[i]
            print(f"Average: {total / count}")
        
        case "3":
            if count == 0:
                print("No Records Yet!")
                continue
            
            deluser = int(input("Select user to delete: "))
            deluser -= 1
            
            if 0 <= deluser < count:
                name.pop(deluser)
                grade.pop(deluser)
                count -= 1
                print("User Deleted!")
            else:
                print("Invalid selection!")
        
        case "4":
            if count == 0:
                print("No Records Yet!")
                continue

            for i in range(count - 1):
                for j in range(i + 1, count):
                    if name[i] > name[j]:
                        name[i], name[j] = name[j], name[i]
                        grade[i], grade[j] = grade[j], grade[i]
            print("Sorted by name!")
        
        case "5":
            if count == 0:
                print("No Records Yet!")
                continue
            
            total = 0
            for i in range(count):
                total += grade[i]
            print(f"Average: {total / count}")
        
        case "6":
            print("Program Exited!")
            break
        
        case _:
            print("Invalid choice")