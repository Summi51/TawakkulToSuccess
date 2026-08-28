

// What is JSX and how does it work?

// JSX allows us to write HTML-like code inside JavaScript.


// 1. JSX

// <header>
//   <h1>Hello React!</h1>
// </header>

//  2. Babel converts JSX into JavaScript


//  React.createElement(
//   'header',
//   null,
//   React.createElement('h1', null, 'Hello React!')
// ); // null - style - ccolor etc.

// 3. React uses this JavaScript to create the UI

// Browser shows:

// Hello React!

//++++++++++++++++++++++++++++++++++=

// Remember this:
// JSX → Babel → JavaScript → React → UI