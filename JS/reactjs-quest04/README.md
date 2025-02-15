# Welcome to Reactjs Quest04
***

## Task

Creating the MyLocation Component
In this task, you are required to create a React component called MyLocation that demonstrates the use of local state within a class-based component. The goal is to render a message with a dynamic location value stored in the component's state.
Generating the React Project:
Create a new React project by running the following command in your preferred terminal:
bash
Creating code:
npx create-react-app my-location-app
cd my-location-app
Creating the MyLocation Component:
Replace the content of the src/MyLocation.js file with the following code:
import React, { Component } from 'react';
class MyLocation extends Component {
    constructor(props){
      super(props);
      this.state = {
        location: 'local state',
      }
    }
    render() {
      return (<div id="location">This content is from the {this.state.location}!</div>);
    }
}

export default MyLocation;

## Description

It seems like you want a comprehensive explanation of the provided tasks along with the corrections needed for both the 
MyLocation and List components. Here's a detailed description for each of the tasks along with the corrected code:
Stateful and stateless components have many different names.
They are also known as:
– Container vs Presentational components
– Smart vs Dumb components
The literal difference is that one has state, and the other doesn’t. 
That means the stateful components are keeping track of changing data, 
while stateless components print out what is given to them via props, or they always render the same thing.
Stateful/Container/Smart component:
When should I make a component stateful or stateless?
You probably won’t know exactly how a component will turn out as soon as you start writing one — you will figure it out as you go, following some guidelines. Here are some good ones:
Type out or visualize your website as if it were one component. Busy, right? Break it down from there into smaller components.
You’ll need state somewhere when information dynamically changes, like a user’s current favorite songs or top scores. Aim to have a parent component keep all the information, and pass it down to its children stateless components.
Your .gitignore must remove node_modules/

## Installation

Building the List Component
In this task, you'll create a List component that takes a list of items as props and renders them in a user-friendly format.
Generating the React Project:
If you're still working within the same React project from Task 1, you can proceed to the next step. Otherwise, create a new React project as shown earlier.
Creating the List Component:
Create a new file named src/List.js and replace its content with the following code:
Stateless Component
They are designed to be reusable. You won’t reuse every single stateless/presentational component, even though you should build in React so your components are as reusable as possible.
Let's build a List component.
Generate a ReactJS project.
Replace App.js with:

## Usage

Run the development server again using:
bash
Run code:
npm start
This will display two lists: one containing shoe names and another containing animal names.
Remember to ensure that you have the appropriate CSS styles for the components to be displayed properly. 
Additionally, you might need to adjust the port configuration in your package.json as specified in the tips.
Feel free to customize the project structure, styles, and other elements as needed. 
This walkthrough should provide a clear understanding of how to create and use stateful and reusable components 
in a React application.
You will have to edit package.json in order to change the default port to 8080:
From:
"start": "react-scripts start"
To:
"start": "PORT=8080 react-scripts start" 


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
