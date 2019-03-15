
# 2.5
# Use the techniques of Section 1.7 to revise the charge and make payment methods 
# of the CreditCard class to ensure that the caller sends a number as a parameter.

# 2.6
# If the parameter to the make payment method of the CreditCard class were a 
# negative number, that would have the effect of raising the balance on the account.
# Revise the implementation so that it raises a ValueError if a negative value is sent.

# 2.7
# The CreditCard class of Section 2.3 initializes the balance of a new account to zero.
# Modify that class so that a new account can be given a nonzero balance using an optional 
# fifth parameter to the constructor. The four-parameter constructor syntax should 
# continue to produce an account with zero balance.

# 2.8
# Modify the declaration of the first for loop in the CreditCard tests, from Code
# Fragment 2.3, so that it will eventually cause exactly one of the three credit 
# cards to go over its credit limit. Which credit card is it?

# A. Wallet 3, iteration 58

class CreditCard:
    """A consumer credit card."""

    def __init__(self, customer, bank, account, limit, balance = 0):
        """Create a new credit card instance.
        
        The initial balance is zero.

        customer    the name of the customer (e.g. 'John Bowman')
        bank        the name of the bank  (e.g., 'California Savings')
        account     the account identifier (e.g., '5391 0375 9387 5309')
        limit       credit limit (measured in dollars)
        """

        self._customer = customer
        self._bank = bank
        self._account = account
        self._limit = limit
        self._balance = balance

    def get_customer(self):
        """Return name of the customer."""
        return self._customer

    def get_bank(self):
        """Return the bank's name."""
        return self._bank

    def get_account(self):
        """Return the card identifying number (typically stored as a string)."""
        return self._account

    def get_limit(self):
        """Return credit card limit."""
        return self._limit

    def get_balance(self):
        """Return current balance."""
        return self._balance

    def charge(self, price):
        """Charge given price to the card, assuming sufficient credit limit.

        Return True if charge was processed; False if charge was denied.
        """

        if not isinstance(price, (int, float)):
            raise TypeError('price must be numeric')
        elif price < 0:
            raise ValueError('price cannot be negative')
        elif price + self._balance > self._limit:
            return False
        else:
            self._balance += price
            return True

    def make_payment(self, amount):
        """Process customer payment that reduces balance."""
        if not isinstance(amount, (int, float)):
            raise TypeError('amount must be numeric')
        elif amount < 0:
            raise ValueError('amount cannot be negative')
        else:
            self._balance -= amount

def validate():

    cc = CreditCard('John Doe', 'California Savings', 
                            '5391 0375 9387 5309', 2500)

    try:
        cc.charge("-100")
    except TypeError as e:
        print("'charge' Error: ", e)

    try:
        cc.charge(-100)
    except ValueError as e:
        print("'charge' Error: ", e)

    try:
        cc.make_payment(-100)
    except ValueError as e:
        print("'make_paymenet' Error: ", e)

def test():
    wallet = []

    wallet.append(CreditCard('John Doe', 'California Savings', 
                            '5391 0375 9387 5309', 2500))

    wallet.append(CreditCard('John Doe', 'California Federal', 
                            '5391 0375 9387 5309', 3500))

    wallet.append(CreditCard('John Doe', 'California Finance', 
                            '5391 0375 9387 5309', 5000))

    print('Credit Cards = ', len(wallet))

    for val in range(1, 100):
        if not wallet[0].charge(val):
            print('wallet 1 overcharged at iter: ', val)
            break

        if not wallet[1].charge(2*val):
            print('wallet 2 overcharged at iter: ', val)
            break

        if not wallet[2].charge(3*val):
            print('wallet 3 overcharged at iter: ', val)
            break

    for c in range(3):
        print('Customer = ', wallet[c].get_customer())
        print('Bank = ', wallet[c].get_bank())
        print('Account = ', wallet[c].get_account())
        print('Limit = ', wallet[c].get_limit())
        print('Balance = ', wallet[c].get_balance())
        
        while wallet[c].get_balance() > 100:
            wallet[c].make_payment(100)
            print('New Balance = ', wallet[c].get_balance())

# validate()
test()