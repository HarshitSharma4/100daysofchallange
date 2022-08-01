#if !defined(_ACOUNT_H_)
#define _ACOUNT_H_
#include <string>

class Account
{
private:
    /* data */
    std:: string name;
    double balance;
public:
    void set_balance(double bal){
        balance=bal;
    }
    double get_balance(){
        return balance;
    }
    void set_name(std::string n);
    std::string get_name();

    bool deposit (double amount);
    bool withdraw(double amount);
};

void Account::set_name(std::string n){
    name=n;
}
std::string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    balance +=amount;
    return true;
}
bool Account :: withdraw(double amount){
    if(balance-amount >= 0){
        balance -=amount;
        return true;
    }
    else{
        return false;
    }
}

#endif // _ACOUNT_H_
