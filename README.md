# structured_programming_practice
This contains all the structured programming practice numbers.


**Name:** Niwampa Blessed Munono
**Registration Number:** S23B26/092
**Course:** CSC1101 – Structured Programming
**Assignment:** GitHub Practice Assignment
**Submission Date:** 26th September,2026
**Reference Book:** Deitel & Deitel, C How to Program, 9th Edition


## Exercise 1 – Basic Output
Reference: Chapter 2, Ex 2.9, Page 132
My Description: Program that displays a simple pattern using printf statements according to the user input.
Concepts: printf, newline \n
How it works:The program uses multiple printf statements to print a fixed pattern of asterisks. Each printf outputs a line of the pattern and uses \n for newlines. No user input is required.

## Exercise 2 – Input, Process, Output
Reference: Chapter 2, Ex 2.16, Page 134
My Description: Program that reads two integers from user, calculates sum, product, difference and quotient.
Concepts: scanf, variables, arithmetic
How it works:The program prompts the user to enter two integers. It uses scanf to read the numbers into variables, performs calculations (sum, product, difference, quotient), and displays the results using printf.

## Exercise 3 – Decision
Reference: Chapter 2, Ex 2.22, Page 134
My Description: Program that checks if a number entered is even or odd using if...else decision.
Concepts: if...else, modulus %
How it works: Reads integer, uses %2 to check remainder, prints result.

## Exercise 4 – Basic Loop
Reference: Chapter 4, Ex 4.7(a), Page 224
My Description: Program that prints odd numbers 1-13 using a for loop.
Concepts: for loop
How it works: Loop initializes i=1, increments by 2, prints each value.

## Exercise 5 – Loop with Calculation
Reference: Chapter 4, Ex 4.3(a), Page 220
My Description: Program that calculates and displays sum of integers from 1 to 100 inside a loop.
Concepts: for loop + accumulator
how it works:The program calculates the sum and count of odd numbers from 1 to 99 using a for loop. It initializes sum and count to 0, then iterates through odd numbers (1, 3, 5...99), printing each, adding it to sum, and incrementing count. Finally, it prints the total sum (2500) and count (50).

## Exercise 6 – Loop with User Input
Reference: Chapter 3, Ex 3.19, Page 178
My Description: The program initializes sum to 0 and count to 0. It then starts a for loop with i = 1, condition i <= 99, and increment i += 2 (so it only goes through odd numbers). Inside the loop, it prints the current value of i, adds i to sum, and increments count. After the loop finishes, it prints the final sum and total count outside the loop.
Concepts: while loop, sentinel-controlled
how it works:This program calculates simple loan interest in a loop. It reads the loan principal and continues while principal is not -1, inside the loop it reads the interest rate and term in days, calculates interest as principal _ rate _ days / 365, prints the charge, then prompts for the next principal. When -1 is entered, it exits and prints "No more loans to give".

## Exercise 7 – Loop with Decision
Reference: Chapter 4, Ex 4.17, Page225
My Description:  The program initializes customer counter to 1 and loops while customer <= 3. For each customer, it reads account number, old limit, and current balance using scanf. It calculates the new limit as `current_limit = limit / 2`. Then it uses an if statement to compare balance vs current_limit. If balance is greater, it prints that credit limit is exceeded, otherwise it prints balance is within range. Counter is then incremented.
Concepts: while loop + if...else
how it works:This program checks credit limits for 3 customers in a loop. For each customer it reads the account number, old limit, and current balance, then calculates the new limit as limit / 2. It prints the new limit and uses an if-else to check if the balance exceeds it, printing either "Balance exceeds current limit" or "Balance is within the current limit range", then moves to the next customer.

## Exercise 8 – Interactive Console Program
Reference: Chapter 3, Ex 3.16, Page176
My Description: The program runs an infinite while(1) loop. Inside, it asks user to enter total amount collected. If the user enters -1, it breaks out of the loop. Otherwise, it asks for the month name. It calculates sales as `total_collected / 1.06` because total includes 6% tax. Then it calculates country tax as 2% of sales and state tax as 4% of sales. Total tax is country + state. Finally it prints a formatted report showing collections, county tax, state tax and total tax.
Concepts: while loop, interactive menu, sentinel
how it works:This program calculates monthly sales tax in an infinite loop.  reads the total amount collected and breaks if -1 is entered, otherwise it reads the month name, then computes sales as total_collected / 1.09, county tax as 5% of sales, state tax as 4% of sales, and total tax as their sum. Finally it prints the collections, both taxes, and total tax for that month.
