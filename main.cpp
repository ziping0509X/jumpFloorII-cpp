//剑指第9题
//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
// 求该青蛙跳上一个n级的台阶总共有多少种跳法。

#include <iostream>

class Solution {
public:
    int jumpFloorII(int number) {
        if(number==1){
            return 1;
        }
        if(number==2){
            return 2;
        }
        if(number==3){
            return 4;
        }
        if(number>3){

            int result=0;
            for(int n=number-1;n>=1;n--){
                result=result+jumpFloorII(n);
            }
            return result+1;
        }
    }
};

//调试成功！