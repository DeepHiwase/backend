// function funkyFunction(music, isWhiteBoy) {
//   // function declaration - function keyword - named function, name of function is used for calling the function and also for stack traces
//   if (isWhiteBoy) {
//     console.log("Play: " + music);
//   }
// }

// Calling a function
// funkyFunction("that funky music", true);

// ananymous function - function expression - assigned to a variable, used in stack traces
// They may show up as 'anonymous function' in stack traces when passed into other functions as callbacks

// This example is still an anonymous function even though we used the `function` keyword, as it doesn't have a name.
const funkyFunction = function (music, isWhiteBoy) {
  if (isWhiteBoy) {
    console.log("Play: " + music);
  }
};

// // This is called an arrow function, we'll get into these soon.
// const funkyFunction = (music, isWhiteBoy) => {
//   if (isWhiteBoy) {
//     console.log("Play: " + music);
//   }
// };

// functions are first class citizens -> can be assigned to a variable, can be passed as an argument to another function, can be returned from another function

// const playThe = (funky) => {
//   return funky + " music";
// };

// const playThe = funky => {
//   return funky + " music";
// };

const playThe = (funky) => funky + " music";

// If there is only one argument, the parenthesis () can be omitted
// if arrow functions are one line, the brackets {} can be omitted.
// When omitting the brackets, the arrow function returns the evaluated expression without requiring the return keyword.

// callbacks
const notes = ["do", "re", "me"];

notes.forEach((note) => console.log(note));

notes.forEach(function (note) {
  console.log(note);
});

// This one is tricky, but will make more sense later
notes.forEach(console.log);
