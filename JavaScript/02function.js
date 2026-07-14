// Function : A block of code which performs a specific task.
// function greet() {
//     console.log("Good Morning, Everyone present here!");
// }
// greet();
// parameterized function 
// function add(a, b) {
//     return a + b;
// }
// let ans = add(2, 3);
// console.log(ans);

// Hoisted Completely
sayHi();
function sayHi() {
    console.log("Hi, .....")
}

// Function Expression 
// A function store inside a variable
const fExpression = function mul(a, b) {
    return a * b;
}
let ans1 = fExpression(3, 4);
console.log(ans1);

// // Not fully Hoisted 
// greet(); // Reference Error Cannot access greet before intialization

// const greet = function () {
//     console.log("Hello");
// };

// Arrow Function 
const value = (a, b) => {
    return a + b;
}
console.log("Arrow Function: ", value(3, 7));


// Arrow Function and this

// Here, this refer to person and that's the reason this.name gives Vivek
// const person = {
//     name : "Vivek",
//     greet : function() {
//         console.log(this.name);
//     }
// }
// person.greet(); // Working fine

// With arrow function 

// Important Question : Arrow Function does not have their own this they inherit from surrounding scope. 
// The surrounding scope is outside the object not the object itself.
const person = {
    name : "Vivek",
    greet : () => {
        console.log(this.name);
    }
}
person.greet(); // Gives undefined


// Callback function 
// A callback function is a function which is passed as an argument to another function.
// -----------------------------------------------------------
// High-Order Function 
// A high-order function is a function which takes a function as an argument or return a function.
// Example
function highOrderFunction(a, b, cb) {
    let result = a+b;
    cb("I am Callback Function......");
}
highOrderFunction(2, 3, function(val) {
    console.log(val);
})

// Defualt Parameters
function vivek(name="Guest") {
    console.log("Hello", name);
}
vivek();
vivek("Vivek");