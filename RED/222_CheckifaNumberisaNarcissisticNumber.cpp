class Solution {
public:
    string isNarcissistic(int num) {
        // Implement logic to check if num is Narcissistic

        //Count number of Digits in num 
        //Create a copy of num
        int num2=0;
        int count=0;
        int temp =num;
    while(temp>0){
        temp/=10;
        count++;
    }
    //Find num2 which should be equal to num
    temp=num;
    
    while(temp>0){
        int digit = temp%10;
        num2 = num2+pow(digit,count);
        temp=temp/10;
    }
    //Check if num = num2 or not
    if(num==num2){
        return "Yes";
    }
    else{
        return "No";
    }
    }
};