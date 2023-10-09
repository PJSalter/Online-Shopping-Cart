# Online Shopping Cart

This is a C++ application functionality called "Online Shopping Cart" program. This program extends the earlier "Online shopping cart" program.

It includes several classes and functions to manage a shopping cart, add and remove items, and display cart details. Below are the details and instructions for each part of the program.

## ItemToPurchase Class

The `ItemToPurchase` class is extended as per the following specifications:

### Public Member Functions

1. **Parameterized Constructor**: A parameterized constructor is provided to assign item name, item description, item price, and item quantity (with default values of 0).
2. **SetDescription() Mutator & GetDescription() Accessor**: These functions allow you to set and get the item description.
3. **PrintItemCost()**: Outputs the item name followed by the quantity, price, and subtotal.
4. **PrintItemDescription()**: Outputs the item name and description.

### Private Data Members

- `string itemDescription`: Initialized in the default constructor to "none".

## ShoppingCart Class

The `ShoppingCart` class is created with the following specifications:

### Public Member Functions

1. **Default Constructor**: Initializes the shopping cart with default values.
2. **Parameterized Constructor**: Takes the customer name and date as parameters.
3. **GetCustomerName() Accessor**: Returns the customer name.
4. **GetDate() Accessor**: Returns the date.
5. **AddItem()**: Adds an item to the shopping cart.
6. **RemoveItem()**: Removes an item from the shopping cart by name.
7. **ModifyItem()**: Modifies an item's description, price, and/or quantity.
8. **GetNumItemsInCart()**: Returns the total quantity of items in the cart.
9. **GetCostOfCart()**: Calculates and returns the total cost of items in the cart.
10. **PrintTotal()**: Outputs the total cost of items in the cart, or a message if the cart is empty.
11. **PrintDescriptions()**: Outputs the descriptions of each item in the cart.

### Private Data Members

- `string customerName`: Initialized in the default constructor to "none".
- `string currentDate`: Initialized in the default constructor to "January 1, 2016".
- `vector<ItemToPurchase> cartItems`: Stores the items in the shopping cart.

## Main Program

In the `main()` function:

1. The user is prompted to enter a customer's name and today's date.
2. An object of type `ShoppingCart` is created.

### Menu Options

The program provides a menu of options to manipulate the shopping cart:

- `a` - Add item to cart
- `d` - Remove item from cart
- `c` - Change item quantity
- `i` - Output items' descriptions
- `o` - Output shopping cart
- `q` - Quit

### ExecuteMenu() Function

The `ExecuteMenu()` function takes two parameters: a character representing the user's choice and a reference to the shopping cart. It performs the following menu options according to the user's choice:

- `o` - Output shopping cart
- `i` - Output items' descriptions
- `a` - Add item to cart
- `d` - Remove item from cart
- `c` - Change item quantity

## How to Use the Program

1. Compile and run the program using a C++ compiler (e.g., g++).
   ```shell
   g++ main.cpp ItemToPurchase.cpp ShoppingCart.cpp -o shopping_cart
   ./shopping_cart
   ```
