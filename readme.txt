PA5 - WareHouseManagement

Hartmann Ingvarsson - hartmann14@ru.is

* My Setup
* OS: Windows, 
* Compiler: MinGW-W64 GCC-8.1.0, 
* QtCreator: Version, 4.14.1, 
* Qt  5.15.x

* QtCreator is cross platform, so the application should work on any system as 
* long as you use the 4.14.1 version, a C++ compiler, and the Qt toolkit.

* Dependencies:
* Compiler: MinGW-W64 GCC-8.1.0
* QtCreator: Version, 4.14.1  (OpenSource)
* Qt 5.15.x 
* Ming in your systems path

* Online Install:(Maybe the easiest way?) 
* I did a clean install on another computer with the online installer, and I managed to run it.
* Downloads for open source users
* Link: https://www.qt.io/download 
* An online installer that will install the required Qt dependencies (Except the compiler)

* Offline install:

* QtCreator: windows-x86_64-4.14.1.exe
* Link: https://download.qt.io/official_releases/qtcreator/4.14/4.14.1/
* Possibly need to register with a "dummy" or a real QtCreator account

* MinGW
* Link: https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe

* Qt 5.15.2
* Link: http://download.qt.io/official_releases/qt/5.15/5.15.2/single/qt-everywhere-src-5.15.2.zip

* Setting up the SDK within the QtCreator, see the screeshot "MySetup"

* Images are curtosy of https://www.ikea.is/


Short info:

* Warehouse Management
* Add items to inventory
* Create new orders, with items picked from Inventory
* "Picket" the orders, and mark them as ready.



* Known issues
* When creating a new order, if you have selected some items, and then cancel the order.
* the stock of the item still changes (So you can't really cancel an order). 
* This is because when you add an item to the selected list, it will reduce the total stock.

* Fixaround: would be to not update the items stock until the dialog is done, or maintain it in a cleaner/better way.


* When you make an order, and you pick items with the same id (i.e, pick the same Id twice or more)
* and you select them with a different quantity. 
* then Picketing/selecting that order will go bonkers, as it searches for only the first ItemId in the JSON array, 
* so the quantity for the item will always be based on the first id it finds 

* Fixaround: searching for the array index instead, not just directly searching for the key "itemId" 

* orders.json, some keys not being used.
* items.json, some keys not being used.

* Things to improve: Could generate the layout better, fix the UI, clean up the code, add filters, add search?
* Delete orders, edit orders, delete items, edit items. 


Run: 

1.  Open the WarehouseManagement.pro, via File -> Open file or Project -> WarehouseManagement.pro.
2.  Press the "run/play" button. 
3.  Do stuff!