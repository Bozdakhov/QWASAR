# Welcome to National Parks Uml
***

## Task

This project is an implementation of Unified Modeling Language best practices 
to compose a class diagram modeling the National Park System.
The below National Parks class table was designed to give additional 
insight into behavior logic and provide example instances of each class.
You will have to define the classes, but here is the list of the features we want:

Multiple parks
Users
Rangers per park
Visitors (and a user?)
Lodges
Tickets
Annual Passes
A Visitor can enter a park because he has either a ticket or an annual pass.
A Park ranger can enter a park because he is a park ranger.
...
A Park has lodges/hotels.

## Description

Below is the a class diagram for the National Parks System. 
This diagram models the various classes within the National Park System, their attributes, and corresponding behaviors. 
Additionally following the Notes on Diagram section there is a class table for additional color.
You will have to define the classes, but here is the list of the features we want:
What are UML diagrams?
UML, which stands for Unified Modeling Language, is a way to visually represent the architecture, design, 
and implementation of complex software systems. When you're writing code, there are thousands of lines in an application, 
and it's challenging to keep track of the relationships and hierarchies within a software system. 
UML diagrams divide that software system into components and subcomponents.
Why should you use UML diagrams?
UML is a standardized modeling language that can be used across different programming languages and development processes, 
so most software developers will understand it and be able to apply it to their work.
Though many engineers dread diagrams, they're helpful in an Agile development environment: 
they keep development productive and focused. Treat your UML diagrams as core aspects of documentation; 
instead of thinking of them as just a "nice to have," treat your UML diagrams as core aspects of documentation. 
UML diagrams can help engineering teams:
• Bring new team members or developers switching teams up to speed quickly.
• Navigate source code.
• Plan out new features before any programming takes place.
• Communicate with technical and non-technical audiences more efficiently.
However, diagrams that don't evolve with a project are useless, so it's necessary to have constantly changing diagrams.
What are the types of UML diagrams?
To the uninitiated, it may seem as though there is an infinite number of UML diagrams. Still, in actuality, UML standards identify 13 types of diagrams divided into two groups, defined below.
Structural UML diagrams
As the name would suggest, structural UML diagrams show how the system is structured, including the classes, objects, packages, components, etc., in the design and the relationships between those elements.
Class diagram
Because a lot of software is based on object-oriented programming, where developers define types of functions that can be used, class diagrams are the most commonly used type of UML diagram. Class diagrams show the static structure, including classes, their attributes and behaviors, and the relationships between each class.

A class is represented by a rectangle that contains three compartments stacked vertically—the top compartment has the class's name and is mandatory. Still, the bottom two boxes give details about the class attributes and class operations or behaviors.

## Installation
TODO - How to install your project? npm install? make? make re?

## Usage

1. Association direction: In general relationships and their associated verb are to be read from left to right and from top to bottom. 
Instances where the relationship and verb are to be read from right to left or from bottom to top will be represented by the symbols < and ^ respectively preceding the association verb. 
2. Relationships:

* Associations: 

    * A visitor may visit 0 or more parks. 
    * A visitor purchases 1 to many tickets(permit, pass). 
    * A park employs many employees(and rangers). 
    * Many employees may assist 0 to many visitors. 

* Aggregation: 

    * A park contains many trails. Trails exist independent of National Park. 
    * A park contains 1 to many lodging options. Certain lodging options exist outside of National Park(camp grounds). 

* Inheritance: 

    * Employee is the superclass of the subclass Ranger. 
    * Ticket is the superclass of the subclasses Pass and Permit. 

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
