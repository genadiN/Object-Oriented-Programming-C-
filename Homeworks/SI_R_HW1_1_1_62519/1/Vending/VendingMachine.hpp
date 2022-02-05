
#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include "Drink.hpp"


class VendingMachine {
public:
    VendingMachine();
    VendingMachine(const VendingMachine& from);
    VendingMachine& operator=(const VendingMachine& from );
    ~VendingMachine();
    bool add_drink(const Drink& to_add);
    int buy_drink(const char* drink_name, const double money);

    double get_income() const;

private:
  Drink *dr;
  int capacity ;
  int counting;
  int income;
};

#endif // VENDINGMACHINE_H
