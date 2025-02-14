# Welcome to My Spring Portfolio
***
DEMO       https://stockportfolio.up.railway.app/stock

## Task

MySpringPortfolio
Your team is responsible for building a web application to help keep track of an investor’s active investments.

Technical specifications:
Your platform needs to have the following features:
A home view that provides a summary of each investment and a calculator showing how much if your fund is left to invest. 
You can assume a starting value of $10 million USD.
A detailed view that displays the information of each investment when clicked.
Each investment must include a dollar amount invested, but you are welcome to track more details.

Ability to "Add to Fund”, allowing your users to increase the pool of money available to invest.

Create "Update" capabilities to allow the update of each "Investment Name"
Create a filter that will enable users to sort investments by dollar amount (increasing/decreasing) or alphabetical order.
Bonus: Create a notification to update users 2 minutes after a new investment has been made.
Frontend:
You can use a Bootstrap template

You will deploy this project in the Cloud (AWS/Heroku/Google Cloud/...).

Example of tech stack

- Maven
- Java
- Spring Boot
- JavaScript
- HTML5
- CSS3
- Thymeleaf
- Bootstrap or Tailwindcss
- PostgresSQL (or Sqlite/Mysql)

## Description

The following components create the CRUD capability:
* stockController: Defines the routes
* Stock (model): Defines the variables/model methods, e.g. Stock,
    ID, Amount Invested 
* StockRepository: Manages the persistence of Stock entities.
    It acts as an interface between the application code and the underlying 
    database.
* StockService: Acts as an intermediary between the controller and the
    database, calculating the total investments, managing investment
    limits.
* StockPortfolioApplication: Entry point for the Spring Boot application. 
It was a great experience creating a CRUD application in Java. 
Some future improvements could be:
* Implement in AWS
* Add React for better front end functionality
* Improve sorting implementation and have single sort button

## Installation

* Java
* Spring Boot
* Maven
* Thymeleaf
* Bootstrap
* MySQL (and MySQL Workbench)

## Usage

Web Application
* In Railway, link   https://stockportfolio.up.railway.app/stock 
* This will be the main landing page, showing all stock
* Stock can be viewed by ascending or descending amount

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
