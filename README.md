# Online Shopping System

This is a simple console-based online shopping system implemented in C++ using Object-Oriented Programming principles. The system allows users to register, browse products by category, add products to a shopping cart, and proceed to checkout.

## Features

- User registration and authentication
- Product browsing by category (Electronics, Clothing, Groceries)
- Shopping cart management
- Dynamic discount application
- Checkout process including payment and shipping details

## Directory Structure

OnlineShoppingSystem/
│
├── include/
│ ├── Product.h
│ ├── ElectronicProduct.h
│ ├── ClothingProduct.h
│ ├── GroceryProduct.h
│ ├── DiscountManager.h
│ ├── ShoppingCart.h
│ ├── CheckoutProcess.h
│ ├── User.h
│ └── Person.h
│
├── src/
│ ├── main.cpp
│ ├── Product.cpp
│ ├── ElectronicProduct.cpp
│ ├── ClothingProduct.cpp
│ ├── GroceryProduct.cpp
│ ├── DiscountManager.cpp
│ ├── ShoppingCart.cpp
│ ├── CheckoutProcess.cpp
│ ├── User.cpp
│ └── Person.cpp
│
└── Makefile



## Classes and Their Purpose

### Header Files (include/)
- **Person.h**: Declaration of the `Person` class representing a basic user with attributes like full name, email, and phone number.
- **User.h**: Inherits from `Person` and includes additional attributes like username and password for authentication.
- **Product.h**: Declaration of the `Product` class (abstract) representing a generic product with attributes like ID, name, and price.
- **ElectronicProduct.h**: Inherits from `Product` and includes additional attributes specific to electronic products.
- **ClothingProduct.h**: Inherits from `Product` and includes additional attributes specific to clothing products.
- **GroceryProduct.h**: Inherits from `Product` and includes additional attributes specific to grocery products.
- **DiscountManager.h**: Manages discounts based on product type or promotional periods.
- **ShoppingCart.h**: Represents the user's shopping cart, containing methods to add, remove, and update items, and to calculate the total cost considering discounts and shipping.
- **CheckoutProcess.h**: Handles the checkout process, including tax calculations, discount application, and order confirmation.

### Source Files (src/)
- **main.cpp**: Entry point of the program, manages user interface, user registration, and shopping process.
- **Product.cpp**: Implementation of `Product` class methods.
- **ElectronicProduct.cpp**: Implementation of methods specific to `ElectronicProduct`.
- **ClothingProduct.cpp**: Implementation of methods specific to `ClothingProduct`.
- **GroceryProduct.cpp**: Implementation of methods specific to `GroceryProduct`.
- **DiscountManager.cpp**: Implementation of discount calculation and application methods.
- **ShoppingCart.cpp**: Implementation of shopping cart functionality.
- **CheckoutProcess.cpp**: Implementation of checkout process methods.
- **User.cpp**: Implementation of user management and authentication methods.
- **Person.cpp**: Implementation of `Person` class methods.

## Building the Project

To build the project, you need to have a C++ compiler (like `g++`) installed on your system. Use the provided `Makefile` to compile the project. Open a terminal, navigate to the project directory, and run:

Running the Program
After building the project, run the executable:

./OnlineShoppingSystem

Usage Guide
User Registration: When you start the program, it will prompt you to register by entering your full name, email, phone number, username, and password.

Browsing Products: After registration, you can browse products by category:

Electronics
Clothing
Groceries
Adding Products to Cart: For each category, a list of products will be displayed. You can select products to add to your shopping cart.

Shopping Cart Management: You can view your shopping cart, see the total cost of selected items, and modify the cart by adding or removing items.

Checkout Process: Once you are ready to purchase, proceed to checkout where you will be prompted to enter payment details and shipping address. The program will display the order confirmation and total cost.

Example
Here is an example of running the program:

Welcome to the Online Shopping System!
Please register to continue.
Enter full name: John Doe
Enter email: john.doe@example.com
Enter phone number: 555-1234
Enter username: johndoe
Enter password: ********

Please select a product category:
1. Electronics
2. Clothing
3. Groceries
4. Exit
5. 
Follow the on-screen prompts to browse products, add them to your cart, and proceed to checkout.

Future Enhancements
Implement additional product categories.
Enhance discount logic with more complex rules.
Add persistence by saving user data and shopping cart to a file or database.
Improve user interface with graphical elements.
License
This project is licensed under the MIT License.

Feel free to ask for more details on any section or specific aspect of the project!


This `README.md` file provides a clear and structured guide for users and developers to understand and use your online shopping system. Adjust the details as needed to fit your specific project implementation.



