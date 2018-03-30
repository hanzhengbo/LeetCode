#include <cstdlib>

//
// Created by 韩正博 on 18/3/30.
//
bool isPalindrome(int x) {
    if(x<0)
        return false;
    int n=1;
    int num=x;
    int flag=0;
    while((num/10)!=0){
        n++;
        num=num/10;
    }
    int *array=(int*)malloc(sizeof(int)*n);
    for(int i = 0;i < n;i ++){
        array[n-i-1]=x%10;
        x=x/10;
    }
    if((n!=1)){
        for(int i = 0;i<n/2;i++){
            if(array[i]==array[n-i-1])
                flag++;
            if(flag==(n/2))
                return true;
        }
    }
    else{
        return true;
    }
    return false;
}
