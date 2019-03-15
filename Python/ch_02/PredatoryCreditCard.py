import CreditCard

class PredatoryCreditCard(CreditCard):

    OVERLIMIT_FEE = 5

    def __init__(self, customer, bank, account, limit, apr):
        """Create a new predatory credit card instance.

        The initial balance is zero.

        customer    the name of the customer (e.g. 'John Bowman')
        bank        the name of the bank  (e.g., 'California Savings')
        account     the account identifier (e.g., '5391 0375 9387 5309')
        limit       credit limit (measured in dollars)
        apr         annual percentage rate (e.g., 0.0825, for 8.25% APR)
        """

        super().__init__(customer, bank, account, limit)
        self._apr = apr

    def charge(self, price):
        """Charge given price to the card, assuming sufficient credit limit.

        Return True if charge was processed.
        Return False and assess $5 fee if charge is denied.
        """

        success = super().charge(price)

        if not success:
            self._balance += PredatoryCreditCard.OVERLIMIT_FEE
        return success

    def process_month(self):
        """Assess monthly intrest on outstanding balance."""

        if self._balance > 0:
            monthly_factor = pow(1 + self._apr, 1/12)
            self._balance *= monthly_factor

def main():

    pcc = PredatoryCreditCard('John Doe', 'California Finance', 
                            '5391 0375 9387 5309', 5000, .0825)

    pcc.charge(6000) # over limit, should incur $5 fee.

    pcc.charge(2000) # should charge the purchase.

    pcc.process_month()

    print('balance after fee: ', pcc.get_balance())

main()