class Solution {
public:
    string determineDayType(int day) {
        // Implement the if-else-if ladder logic to determine if it's a weekday or weekend
    //     if(day=1){
    //         return "Monday";
    //     }
    //    else if(day==2){
    //         return "Tuesday";
    //     }
    //   else  if(day==3){
    //         return "Wednesday";
    //     }
    //    else if(day==4){
    //         return "Thursday";
    //     }
    //   else  if(day==5){
    //         return "Friday";
    //     }
    //    else if(day==6){
    //         return "Saturday";
    //     }
    //     else{
    //         return "Sunday";
    //     }
    switch(day){
        case 1:
        return "Weekday";
        break;
        case 2:
        return "Weekday";
        break;
        case 3:
        return "Weekday";
        break;
        case 4:
        return "Weekday";
        break;
        case 5:
        return "Weekday";
        break;
        case 6:
        return "Weekend";
        break;
        case 7:
        return "Weekend";
        break;
    }
    }
};