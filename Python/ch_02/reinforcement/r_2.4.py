# Write a Python class, Flower, that has three instance variables of type 
# str, int, and float, that respectively represent the name of the flower, 
# its number of petals, and its price. Your class must include a constructor
# method that initializes each variable to an appropriate value, and your
# class should include methods for setting the value of each type, and 
# retrieving the value of each type.

class Flower:

    def __init__(self, name, petals, price):
        self._name = name
        self._petals = petals
        self._price = price

    def get_name(self):
        return self._name

    def set_name(self, name):
        self._name = name

    def get_petals(self):
        return self._petals

    def set_petals(self, petals):
        self._petals = petals

    def get_price(self):
        return self._price

    def set_price(self, price):
        self._price = price

    def print_inst(self):
        print("Name: {0}, Petals: {1}, Price: {2}".format(self._name, self._petals, self._price))

def main():

    f = Flower("Dilly", 10, 3.50)

    f.print_inst()

    f.set_name("Red Dilly")
    f.set_petals(3)
    f.set_price(12.35)

    f.print_inst()
    
main()