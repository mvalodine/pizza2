Pizza Order Calculator

Description:
This program calculates the number and sizes of pizzas needed for a given number of guests, determines the total and per-person pizza area, and computes the final cost including a user-specified tip.

How It Works:
- The user enters the number of guests.
- The program calculates the required number of large (14-inch), medium (8-inch), and small (6-inch) pizzas.
- It computes the total pizza area and the area each person receives.
- The user inputs the tip percentage.
- The program calculates the final cost, rounding to the nearest dollar.
- The total cost is displayed.

Requirements:
- C++ compiler
- Standard input/output console

Installation: g++ pizza_order.cpp -o pizza_order
Usage: ./pizza_order
Follow the prompts to input the number of guests and tip percentage.
View the output for pizza distribution, total area, and cost.

Example Output:

How many guests? 2
Large: 0 Medium: 0 Small: 2
The total area is 226.194 square inches.
The area per person is 113.097 square inches.
What percent tip do you want to leave? (0-100) 15
The total cost will be 17 dollars.
Press any key to continue . . .

Notes:
- The program assumes large pizzas serve 7 people, medium pizzas serve 3, and small pizzas serve individual guests.
- Prices for different pizza sizes are predefined in the code.
- The total cost is rounded to the nearest whole dollar.

