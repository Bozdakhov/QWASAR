# Welcome to Reactjs Quest03
***

## Task

It appears that you're providing a detailed explanation of the exercises related to ReactJS props and state, 
as well as requesting guidance on creating a README for your project. 
Below is a template for the README based on the information you've provided:
Well, In this section, describe the task or challenge that this project addresses. 
You can provide an overview of what participants are expected to achieve through these exercises.
ReactJS - What is "Props"?
React has a different approach to data flow & manipulation than other frameworks, and that’s why it can be difficult at the beginning to understand some concepts like props, state and so on.
I believe it’s better to keep explaining them in separated posts and in this article, we’re going to focus on React’s Props feature and how to use it.
To understand how props work, first, you need to have a general understanding of the concept of the components.
"Props" is a special keyword in React, which stands for properties and is being used for passing data from one component to another.
But the important part here is that data with props are being passed in a uni-directional flow. (one way from parent to child)
Furthermore, props data is read-only, which means that data coming from the parent should not be changed by child components.
Your .gitignore must remove node_modules/

## Description

Explain the purpose of the project and how it aligns with the concepts of ReactJS, particularly focusing on the usage of props and state. Highlight the significance of understanding these concepts for building dynamic and interactive React applications.
Create a reactJS project. Replace the current App.js with:
import ParentComponent from './ParentComponent.js';
import './App.css';
function App() {
  return (
    <div className="App">
      <ParentComponent />
    </div>
  );
}

export default App;
In this exercise, we will create two components:
ParentComponent:
$>cat src/ParentComponent.js
import React, { Component } from 'react';
import XXXXXXX from './ChildComponent.js';
export class ParentComponent extends Component {  
    render() {
      return (
        <h1>
          <span className="title">I'm the parent component.</span>
          <ChildComponent text={"XXXXXXX"} />
          <ChildComponent text={"XXXXXXX"} />
          <ChildComponent text={"XXXXXXX"} />
        </h1>
      );
    }
  }

export default ParentComponent;
$>
ChildComponent:

$>cat src/ChildComponent.js
const ChildComponent = (props) => {  
  return <p className="children">{props.text}</p>; 
};
export default ChildComponent;
$>
Replace the XXXXXXX by the necessary code to make it print the correct value.

## Installation

Provide instructions on how to set up the project on a local machine. If there are any dependencies required, mention them along with the necessary installation commands. Use a clear format like this:
bash
Install command:
npx create-react-app .
Tips
You will have to edit package.json in order to change the default port to 8080:
From
"start": "react-scripts start"
To
"start": "PORT=8080 react-scripts start" 

## Usage

Explain how participants can run the project and interact with it. If there are specific scripts or commands to execute, 
provide clear examples. For instance:
bash
To run code:
npm start
The Core Team If applicable, list the core team members who contributed to the project's development. 
This can help give credit and recognition to those involved.
Justification for this Description: In this section, you can explain why you structured the README in this manner. 
You might discuss how the different sections address the common questions or concerns that users might have.
Remember that a good README serves as a comprehensive guide for others to understand, set up, and utilize your project. 
It should provide enough information for someone unfamiliar with your project to navigate and engage with it effectively.


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
