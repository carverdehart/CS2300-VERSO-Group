#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    //creating string containing set date and time
    std::string date_str = "2022-03-17 10:45:30";
    //creating date_obj
    std::tm date_obj = {};
    //Allows us to treat date_str as an input stream
    std::istringstream ss(date_str);
    //inputs the time and stores it
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    std::stringstream formatted_date_ss;
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    std::string formatted_date = formatted_date_ss.str();

    std::cout << formatted_date << std::endl;

    return 0;
}
