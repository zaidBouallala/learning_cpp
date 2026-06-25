#include <iostream>
using namespace std;
int  main()
{

    // 19 #  Area of Circle
    float diameter;
    const float PI = 3.14;
    cout << "Enter the diameter of the circle : "<< endl;
    cin >> diameter;
    cout << "The value of the area of the circle is : "<< (PI * diameter * diameter) / 4 <<endl;

    // 20# area of circle in a square
    float side;
    cout << "Enter the value of the side of the square : "<< endl;
    cin >> side;
    cout << "The value of the area of the circle in a square is : "<< (PI * side * side) / 4 <<endl;

    // 21# area of circle with a surrounding circle 
    float surrounding ;
    cout << "Enter the value of the surrounding circle : "<< endl;
    cin >> surrounding;
    cout << "The value of the area of the circle with a surrounding circle is : "<< (surrounding * surrounding) / 4*PI <<endl;


    // 22# area of circle inside a isosceles triangle
    float base, a;
    cout << "Enter the value of the base of the isosceles triangle : "<< endl;
    cin >> base;
    cout << "Enter the value of the equal sides of the isosceles triangle : "<< endl;
    cin >> a;
    cout << "The value of the area of the circle inside a isosceles triangle is : "<< PI* ( a*a*( 2* base - a)) / 4*(2*base +a) <<endl;

    // 31# power of a number
    float number, power;
    cout << "Enter the value of the number : "<< endl;
    cin >> number;
    cout << "the value of the power 2 of the number is : "<< number * number <<endl;
    cout << "the value of the power 3 of the number is : "<< number * number * number <<endl;
    cout << "the value of the power 4 of the number is : "<< number * number * number * number <<endl;

    // 35# Piggy  Bank calculator
   float  pennies, nickels, dimes , quarters, dollars;
   cout << "Enter the value of the dimes : "<< endl;
   cin >> dimes;
   cout << "Enter the value of the nickels : "<< endl;
   cin >> nickels;
   cout << "Enter the value of the quarters : "<< endl;
   cin >> quarters;
   cout << "Enter the value of the pennies : "<< endl;
   cin >> pennies;

    dollars = (dimes * 0.10) + (nickels * 0.05) + (quarters * 0.25) + (pennies * 0.01);
    cout << "The total value in the piggy bank is : $" << dollars << endl;

    // 39 #  REmainder cash
    float total_cash, item_price, remainder_cash;
    cout << "Enter the total cash you have : "<< endl;
    cin >> total_cash;
    cout << "Enter the price of the item you want to buy : "<< endl;
    cin >> item_price;
    remainder_cash = total_cash - item_price;
    cout << "The remaining cash is : $" << remainder_cash << endl;

    // 40# service fee and slkes tax
    float service_fee, sales_tax = 0.1, total_amount; // Assuming sales tax is 10%
    cout << "Enter the service fee : "<< endl;
    cin >> service_fee;
    total_amount = service_fee + (service_fee * sales_tax);
    cout << "The total amount to be paid is : $" << total_amount << endl;

    // 42# task duration in seconds 
    unsigned int days, hours, minutes, seconds, total_seconds;
    cout << "Enter the number of days : "<< endl;
    cin>> days ;
    cout << "Enter the number of hours : "<< endl;
    cin>> hours ;
    cout << "Enter the number of minutes : "<< endl;
    cin>> minutes ;
    cout << "Enter the number of seconds : "<< endl;
    cin>> seconds ;

    total_seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
    cout << "The total duration in seconds is : " << total_seconds << endl;

    // 43# seconds to days , hours , minutes and seconds
    unsigned int total_seconds_input, days_output, hours_output, minutes_output, seconds_output;
    cout << "Enter the total number of seconds : "<< endl;
    cin >> total_seconds_input;
    days_output = total_seconds_input / (24 * 60 * 60);
    hours_output = (total_seconds_input % (24 * 60 * 60)) / (60 * 60);
    minutes_output = (total_seconds_input % (60 * 60)) / 60;
    seconds_output = total_seconds_input % 60;

    cout << "The duration is : " << days_output << " days, " << hours_output << " hours, " << minutes_output << " minutes, and " << seconds_output << " seconds." << endl;

    // 47#  loan calculator monthly installment 
    float total_loan_amount;
    unsigned int loan_duration_months;
    cout << "Enter the total loan amount : "<< endl;
    cin >> total_loan_amount;
    cout << "Enter the loan duration in months : "<< endl;
    cin >> loan_duration_months;

    float monthly_installment = total_loan_amount / loan_duration_months;
    cout << "The monthly installment is : $" << monthly_installment << endl;


    // 48# loan calculator + how many months to pay off the loan
    float loan_amount, monthly_payment;
    cout << "Enter the total loan amount : "<< endl;
    cin >> loan_amount;
    cout << "Enter the monthly payment amount : "<< endl;
    cin >> monthly_payment;
    unsigned int months_to_pay_off = loan_amount / monthly_payment;
    cout << "The loan will be paid off in : " << months_to_pay_off << " months." << endl;


    return 0;
}