def hipotenusa(c1,c2):
    if c1 > 0 and c2 > 0:
        hipotenusa = (c1**2+c2**2)**1/2
        return hipotenusa
    else:
        return "Error, los valores de los catetos deben ser positivos"
c1 = float(input("ingrese valor de cateto 1: "))
c2 = float(input("ingrese valor de cateto 2:"))

print(hipotenusa(c1,c2))
    
