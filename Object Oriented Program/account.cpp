#include "account.h"

bool account :: deposite(double amount){
    balance +=amount;
    return true;
}
bool account :: withdraw(double amount){
    if((balance -amount)>0){
    balance -=amount;
    return true;
    }
    else {
        return false;
    }

}