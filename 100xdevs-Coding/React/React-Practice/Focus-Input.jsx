import React, { useRef } from 'react';

function InputFocus() {

  const useref = useRef()

  const handleClick = () => {
    console.log(useref.current.focus())
  }
  return (
    <div style={{ padding: '20px', textAlign: 'center' }}>
      <input
        type="text"
        placeholder="Type here"
        style={{ padding: '8px', fontSize: '16px', marginRight: '10px' }}
        ref={useref}
      />
      <button style={{ padding: '8px 12px' }} onClick={handleClick} >
        Focus Input
      </button>
    </div>
  );
}

export default InputFocus;


//================================================

// import InputFocus from './InputFocus'
// export default function App() {
//   return <InputFocus/>
// }

//================================================

// body {
//   font-family: sans-serif;
//   -webkit-font-smoothing: auto;
//   -moz-font-smoothing: auto;
//   -moz-osx-font-smoothing: grayscale;
//   font-smoothing: auto;
//   text-rendering: optimizeLegibility;
//   font-smooth: always;
//   -webkit-tap-highlight-color: transparent;
//   -webkit-touch-callout: none;
// }

// h1 {
//   font-size: 1.5rem;
// }