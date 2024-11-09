vector<double> convertTemperature(double celsius) {
           vector<double>ans;
           double kelvin;
           double Fahren;
           kelvin = celsius + 273.15;
           Fahren = celsius * 1.80 + 32.00;
           ans.push_back(kelvin);
           ans.push_back(Fahren);
           return ans;
    }