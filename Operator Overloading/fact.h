
int fact(int num){
    int iteration,fact = 1;
    for(iteration  = 1;iteration<=num;iteration++){
        fact = fact *iteration;
    }
    return fact;
}