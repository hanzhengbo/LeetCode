//
// Created by 韩正博 on 18/3/30.
//

double power(double x,int n);
double myPow(double x, int n) {
    double result = 1;
    if(n<0){
        n=-n;
        x=1/x;
    }
    result=power(x,n);
    return result;
}
double power(double x,int n){
    if(n==1) return x;
    if(n==0) return 1;

    double v = power(x,n/2);

    if(n%2==0){
        return v*v;
    }
    else{
        return v*v*x;
    }

}