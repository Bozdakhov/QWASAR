# Welcome to Reactjs Quest01
***

## Task

Description is that:
Welcome to your first exercise with ReactJS.
First, We will setup an environment for React then we will dive into the files hierarchie.
Create a react project: cd ex00  npx create-react-app .
You will that see multiple files/directories have been generated.
Important files are: package.json It contains how to guide npm with your project: How to install it? How to run (start) it? how to test it? You will have to edit it in order to change the default port to 8080: From
"start": "react-scripts start"  To  "start": "PORT=8080 react-scripts start" 
src/   This directory will contain your files. Some files have already been generated.
public/  It's for public static files.
(- build/  It's where your application will be build (compiled) for production)
To develop locally, run:  npm start    It should give you a server. You will have to change the default port:
stackOverFlow  Gandalf is reviewing this project. Gandalf will review a "production" version of your code.
Gandalf will automatically build a production version but you can test it with the command:
yarn build  In order to test with Gandalf, no server can be running. (It causes a broken pipe inside yarn)
Requirement for this exercise: Create a React project. :-)
Tips: You will have to edit package.json in order to change the default port to 8080:
From
"start": "react-scripts start"
To
"start": "PORT=8080 react-scripts start" 
How can I access my docode server from the browser?
Add web- in between http:// and the docode-uid.docode.YOURZONE.qwasar.io
Tips: You can use gandalf.

## Description

It looks like you have provided a task description for setting up a ReactJS project and making some modifications to certain files.
 Here's a breakdown of the task and the steps to solve it:
Problem and Challenge is that:
The problem is to create a ReactJS project, set up the environment, and make specific changes to configuration files. 
The challenge involves correctly configuring the project, making the required changes to files, 
and ensuring that the project can be developed and tested as specified.
Solution Steps
Create a React Project: Navigate to the desired directory and use the following command to create a React project named "ex00":
npx create-react-app ex00
Navigate to Project Directory: Move into the newly created project directory:
Edit package.json: Open the package.json file located in the root directory of your project. Modify the "start" script to include the PORT environment variable, changing the default port to 8080. It should look like this:
"scripts": {
  "start": "PORT=8080 react-scripts start",
  // other scripts...
}
Develop Locally: To start the development server, use the following command:
npm start
This will start the React development server on port 8080.
Access the Development Server: To access your development server from the browser, you will need to use the URL format: http://web-docode-uid.docode.YOURZONE.qwasar.io:8080.
Testing with Gandalf: If you want to test your project with Gandalf, you'll need to build a production version of your code. Run the following command:
yarn build
This will generate a production build of your application.
Review by Gandalf: Gandalf will automatically build and review a production version of your code. Make sure you don't have a development server running while testing with Gandalf.

## Installation

Installation is that: npm start to run server.
There's no additional installation required beyond setting up the React project using create-react-app. 
The commands mentioned above cover the setup process.
Project Structure:
Here is an overview of the important directories and files you will be working with:

src/: This directory contains your project's source code.
public/: This directory is for public static files.
build/: This is where your application will be built (compiled) for production.
Development Server:
To start the development server and run your React app locally on port 8080, use the following command:
npm start

## Usage

Usage is that:
To start the development server, navigate to your project directory and run:
npm start
Access your development server from the browser using the URL: http://web-docode-uid.docode.YOURZONE.qwasar.io:8080.
To test your project with Gandalf, build the production version using:
yarn build
Ensure there's no development server running while testing with Gandalf.
Remember that this guide provides a general overview of the process. 
You should follow the steps and adapt them to your specific development environment and needs.
Keep in mind that when testing with Gandalf, no local server should be running.
Remember, you're required to create a React project, modify the package.json file,
 and follow the provided instructions to set up the development and production environment correctly. 
 Once you complete these steps, your project should be ready for testing and review.
For any further specific instructions or questions, feel free to ask!


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
