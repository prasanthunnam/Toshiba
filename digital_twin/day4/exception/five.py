lista = [3, 5, 7, 8, 10, 6]

try:
    i = int(input("enter the index:\n"))
    try:
        print(lista[i])
        print(lista[i]/0)
    except IndexError:
        print("sorry, your index should have been within", len(lista))

except ZeroDivisionError:
    print("division by zero not allowed")
except ValueError:
    print("sorry, your index should have been a number")
except:
    print("handles everything")
    
print("remaining part of the code")
