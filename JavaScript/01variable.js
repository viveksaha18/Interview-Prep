// variable : Variables are the container used to store data.
// JavaScript has three ways to declare a variable
// let, const, var


// var was used before ES6(2015)
var name = "Vivek";
console.log(name);

// Functions of var
// 1. Function Scope
// A variable declared with var belongs to the entire function not just a block.
// Example
function test() {
    if(true) {
        var x = 10;
    }
    console.log(x);
}
test();

// 2. Re-decalartion : var supports re-declaration
var x = 10;
var x = 20;
console.log(x);

// 3. Re-assinging : var supports re-assinging
var z = 10;
z=20;
console.log(z);

// Hoisting in var
console.log(a); // shows undefined
var a = 4;
console.log(a);


// let
// 1. Block Scope : Access variables only in the scope
// function test1() {
//     if(true) {
//         let k = 10; // Refrence Error
//     }
//     console.log(k);
// }
//test1();

// 2. Re-declartion : Does not re-decalaration 
// let m = 10;
// let m = 20;
// console.log(m); // Syntax Error : m is already declare

// 3. Re-assigning : Supports Re-assingning
let m = 10;
m=20;
console.log(m);

// Hositing in let
// console.log(n);
// let n = 10; // Refrence Error : Cannot access n before initialization

// 3. Const : Used to store the constant values
const pi = 3.14;
// Doesnot support re-decalarion and re-assinging and well as provides reference error while hoisting and it is block-scoped
