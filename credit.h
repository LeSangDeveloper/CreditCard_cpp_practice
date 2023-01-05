#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include<iostream>
#include<string>

class CreditCard {
    public:
        CreditCard(const std::string& no, const std::string& name, int lim, double balance=0);

        std::string getName() {return name;}
        std::string getNumber() {return number;}
        int getLimit() {return limit;}
        double getBalance() {return balance;}

        bool chargeIt(double price);
        void makePayment(double payment);
    private:
        std::string  name;
        std::string  number;
        int limit;
        double balance;
};

std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif