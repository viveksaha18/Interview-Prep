// this -> Refers to current object
// this depends on call site, not where function is written.(IN JavaScript)

console.log(this)  // refers to window object in browser and {} in node environment

// var name = "Vivek";
// console.log(this.name); // show vivek in browser  and shows undefined in node environment

// Inside normal function 
// function show() {
//     console.log(this);
// }
// show();

// "use strict";

// function show1() {
//     console.log(this);
// }

// show1(); // gives undefined Because strict mode automatically global object assign nahi karta.

const person = {
    name : "Vivek", 
    greet() {
        console.log(this.name); // output Vivek this refers to person
    }
}
person.greet();

const p = {
    name : "Akash",
    greet() {
        console.log(this.name);
    }
}
const fn = p.greet;
fn(); // object get loss output will give you undefined

function person1(name) {
    this.name=name;
}
const p1 = new person1("Vivek"); // p1 creates a new object 
console.log(p1.name); // output "Vivek"


// const person = {
//     name: "Vivek",

//     greet: () => {
//         console.log(this.name);
//     }
// };

// person.greet(); // gives undefiend arrow function points outer this 

// call
const person3 = {
    name : "Vivek"
}
function f() {
    console.log("Hello", this.name);
}
f.call(person3);

// apply() same as call difference is how argument passed
const person4 = {
    name : "Vivek"
}
function display(city, age) {
    console.log(this.name, city, age)
}
display.apply(person, ["BBSR", 22])

// bind() returns a new function with this permanently set

// bind() does not execute the function immediately.

// It returns a new function with this permanently set.
const person5 = {
    name: "Vivek"
}

function display1(age) {
    console.log(this.name, age);
}

const ans = display1.bind(person5, 21);

ans();