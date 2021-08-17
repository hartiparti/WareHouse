# WareHouse
Project for "Programming in C++" 

Order/Warehouse management system written in C++

The Warehouse management system is inspired by a project that I did with few other
students in User Centred Software Development, the design is a warehouse/order
management system, for companies such as IKEA. The system serves the warehouse
worker, who has to picket items from stock into these orders.

Short description of the project:
The system is a Graphical Interface for the warehouse worker. It is written in C++ and
developed with QtCreator and Qt which is a very powerful cross-platform
C++ does not have a default JSON library within the STL. QtCreator has a
straightforward library to work with JSON objects, keys, values and arrays.

Details on how the application works
● The application reads from two data sources/databases (two JSON files) called
items.json and orders.json.

● Inventory menu
By clicking the Inventory button, all items that exist within the warehouse are
printed to a table. Within the menu you can create a new item, by pressing a
button. When a new item is created the user is prompted to give it a name, attach
an image to the item, set it’s height, weight and the total stock of that item, along
with selecting one of the available locations.

● Order menu
All orders are printed to a table, you can mouse click on any order and it’s details
will appear within a tree on the right side in the “Order details”, the order details
shows the items that were ordered, along with their location and the quantity of
that item within the order. Orders are flagged as Ready or NotReady.

● Picking/finalize
The user can click an order that is NotReady from the order table and press the
Picking/finalize button to start the process of “Picking” an order, in the picking
menu the user has a view of the most important item details, such as id, location
and an image of the item. The user would then “scan” the items one by one until
reaching the total items needed, when that happens a checkbox is marked and
the order gets flagged as “Ready.”

● Create new order
From the create new order menu, the user can select items that exist in the
inventory, the user can select an item by it’s id, and add it to an order by selecting
it with a mouse. By selecting an item the user gets to see more details about an
item such as the image, description and height and width. The user can add
items to an order, except if the item that has a total stock of 0, as that would say
that the item is out of stock. When completed the new order is automatically
flagged as NotReady.

