# Welcome to Java Quest04
***

## Task

The problem is to simulate vehicles (bicycle and bike) with different states and behaviors. 
The challenge may involve understanding and implementing interfaces and classes in Java.
The problem is to simulate vehicles (bicycle and bike) with different states and behaviors. 
The challenge may involve understanding and implementing interfaces and classes in Java.
Java Code Explanation:
Vehicle Interface:
An interface defining the methods that any vehicle should implement: changeGear, speedUp, and applyBrakes.
java
Copy code
interface Vehicle {
    void changeGear(int gear);
    void speedUp(int speed);
    void applyBrakes(int brake);
}
Bicycle and Bike Classes:
Both Bicycle and Bike classes implement the Vehicle interface, providing concrete implementations for the interface methods.
Each class has attributes speed and gear to represent the state of the vehicle.
The printStates method is used to print the current state of the vehicle.

## Description

The solution involves creating an interface named `Vehicle` with methods for changing gear, speeding up, and applying brakes. 
Two classes, `Bicycle` and `Bike`, implement this interface, providing specific implementations for the methods. 
The `Index` class serves as the entry point, creating instances of both vehicles, performing actions, and printing their states.
Java Code Explanation:
Vehicle Interface:
An interface defining the methods that any vehicle should implement: changeGear, speedUp, and applyBrakes.
java
Copy code
interface Vehicle {
    void changeGear(int gear);
    void speedUp(int speed);
    void applyBrakes(int brake);
}
Bicycle and Bike Classes:
Both Bicycle and Bike classes implement the Vehicle interface, providing concrete implementations for the interface methods.
Each class has attributes speed and gear to represent the state of the vehicle.
The printStates method is used to print the current state of the vehicle.

## Installation

No installation is required for this Java project. 
Ensure you have a Java Development Kit (JDK) installed to compile and run the program.


## Usage


Compile the Java code and run the `Index` class. 
The program simulates a bicycle and a bike, changing their gears, speeding up, and applying brakes. 
The current state of each vehicle is then printed to the console.

bash
javac Index.java
java Index


## The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
