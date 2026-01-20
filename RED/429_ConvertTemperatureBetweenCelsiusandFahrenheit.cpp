class TemperatureConverter {
public:
    double convertTemperature(double temp, string conversionType) {
        // Implement the conversion here
        // double 
        if(conversionType=="CtoF"){
            return (temp*9/5) +32;
        }
        else{
            return (temp-32)*5/9;
        }
    }
};
