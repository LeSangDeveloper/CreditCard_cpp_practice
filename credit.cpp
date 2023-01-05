#include "credit.h"

CreditCard::CreditCard(const std::string& no, const std::string& nm, int lim, double bal=0) {
    number = no;
    name = nm;
    limit = lim;
    balance = bal;
}

bool CreditCard::chargeIt(double price) {
    if (price + balance > double(limit)) {
        return false;
    }
    balance += price;
    return true;
}

void CreditCard::makePayment(double payment) {
    balance -= payment;
}

std::ostream& CreditCard::operator<<(std::ostream& out, const CreditCard& c) {
    out << "Number = " << c.getNumber() << "\n" << "Name = " << c.getName() << "\n" << "Balance = " << c.getBalance() << "\n" << "Limit = " << c.getLimit() << "\n";
    return out;
}