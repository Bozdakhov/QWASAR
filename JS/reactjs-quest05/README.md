# Welcome to Reactjs Quest05
***

## Task

Description
Let's build a multiple page application!
Generate a ReactJS project
and inside it install react router:
npm install react-router-dom
or
yarn add react-router-dom
We are going to create an application with 3 pages:
/
/users
/about
Edit App.js with this content:
import React from "react";
import {
  BrowserRouter as Router,
  Switch,
  Route,
  Link
} from "react-router-dom";
export default function App() {
  return (
    <Router>
      <div>
        <nav>
          <ul>
            <li>
              <Link to="/">Home</Link>
            </li>
            <li>
              <XXXXX to="/about">About</Link>
            </li>
            <li>
              <XXXXX to="/users">Users</Link>
            </li>
          </ul>
        </nav>

        <Switch>
          <Route path="/about">
            <About />
          </Route>
          <Route path="/users">
            <XXXXX />
          </Route>
          <Route path="/">
            <Home />
          </Route>
        </Switch>
      </div>
    </Router>
  );
}

function XXXXX() {
  return <h2>Home</h2>;
}

function About() {
  return <h2>XXXXX</h2>;
}

function Users() {
  return <h2>Users</h2>;
}
Replace the XXXXXXX by the necessary code to make it print the correct value.

## Description

React is a JavaScript library for building user interfaces. We can also extend it to build multi-page applications with the help of React Router. This is a third-party library that enables routing in our React apps.
React Router is a collection of navigational components that compose declaratively with your application.
Your .gitignore must remove node_modules/
React as a JavaScript Library for User Interfaces:
React is a popular JavaScript library used for building user interfaces. 
It was developed by Facebook and is now maintained by both Facebook and a community of individual developers.
Extending React for Multi-Page Applications:
While React is primarily used for building single-page applications (SPAs),
it can be extended to create multi-page applications (MPAs) with the help of additional tools and libraries.
React Router for Routing:
React Router is a third-party library specifically designed for implementing routing in React applications. 
Routing is the process of managing the navigation within a web application, allowing users to move between different views or pages.

## Installation

Let's build a multiple page application!
Generate a ReactJS project
and inside it install react router:
npm install react-router-dom
or
yarn add react-router-dom
We are going to create an application with 3 pages:

/
/users
/about
Edit App.js with this content:
Collection of Navigational Components:
React Router provides a set of components that facilitate navigation in a React application. 
These components include things like BrowserRouter, Route, Link, and others. 
They allow you to define the routes and links between different parts of your application.

## Usage

`npm start`
Runs the app in the development mode.\
Open [http://localhost:3000](http://localhost:3000) to view it in your browser.
The page will reload when you make changes.\
You may also see any lint errors in the console.
`npm test`
Launches the test runner in the interactive watch mode.\
See the section about [running tests](https://facebook.github.io/create-react-app/docs/running-tests) for more information.
`npm run build`
Builds the app for production to the `build` folder.\
It correctly bundles React in production mode and optimizes the build for the best performance.
The build is minified and the filenames include the hashes.\
Your app is ready to be deployed!
See the section about [deployment](https://facebook.github.io/create-react-app/docs/deployment) for more information.
Ignoring node_modules/ in .gitignore:
.gitignore is a file used in version control systems like Git to specify files and directories that should be ignored and not tracked by the repository. 
By including node_modules/ in the .gitignore file, you're instructing Git to ignore this directory. 
This is important because node_modules/ contains all the third-party dependencies used in your project, and it can be very large. 
It's typically not necessary to include it in version control because developers can use package managers like npm or yarn to install the required dependencies locally on their own machines.
In summary, React Router is a crucial tool for implementing routing in React applications, allowing developers to create multi-page applications with ease. 
Additionally, including node_modules/ in the .gitignore file helps keep the repository size manageable by excluding the large directory containing third-party dependencies.

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
