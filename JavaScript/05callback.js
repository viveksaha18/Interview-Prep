// Problem 1 — Greeting

// Create a function greetUser that takes:

// name
// a callback function

// The function should print:

// Hello Vivek

// and then execute the callback.

// Expected:

// Hello Vivek
// Welcome to JavaScript!

// function greetUser(name, callback) {
//     console.log("Hello", name)
//     callback()
// }

// greetUser("Vivek", () => {
//     console.log("Welcome to JavaScript!")
// })






// 🟢 Problem 2

// Now make it slightly harder.

// Create:

// calculate(a, b, callback)

// It should:

// Add a and b
// Pass the result to callback
// The callback should print:
// Result: 30

// function calculate(a, b, callback) {
//     res = a + b
//     callback(res)
// }
// calculate(10, 20, (res) => {
//     console.log(res)
// })





// 🟢 Question 3 — Even or Odd

// Ab thoda logic add karte hain.

// Create:

// checkNumber(number, callback)

// Requirements:

// Number even hai → callback ko "Even" pass karo
// Number odd hai → callback ko "Odd" pass karo

// function checkNumber(number, callback) {
//     if(number % 2 == 0) {
//         callback("Even")
//     }
//     else callback("Odd")
// }

// checkNumber(3, (res) => {
//     console.log(res)
// })


// Question 4 — Callback + Async

// Imagine tum server se data fetch kar rahe ho.

// Create:

// fetchData(callback)

// Function ko:

// "Fetching data..." print karna hai.
// setTimeout() se 2 seconds ka delay create karna hai.
// 2 seconds ke baad ye data callback ko dena hai:
// {
//     id: 101,
//     name: "Vivek"
// }

// Expected output:

// Fetching data...


// // 2 seconds later


// Data received:
// { id: 101, name: "Vivek" }

// function fetchData(callback) {
//     console.log("Fetching data..........")
//     setTimeout(() => {
//         const user = {
//             id: 101,
//             name: "Vivek"
//         }
//         callback(user)
//     }, 2000)
// }
// fetchData((user) => {
//     console.log(user)
// })



// Question 5 : Nested Callback Function 

// function getPayment(orders, callback) {
//     setTimeout(() => {
//         const order = {
//             orderId : 1,
//             payment : "paid"
//         }
//         callback(order)
//     }, 1000)
// }

// function getOrders(users, callback) {
//     setTimeout(() => {
//         const orders = [
//             { orderId: 1, product: "Laptop" },
//             { orderId: 2, product: "Mouse" }
//         ]
//         getPayment(orders, (orders) => {
//             callback(orders)
//         })
//     }, 1500)
// }


// function getUsers(callback) {
//     setTimeout(()=> {
//         const users = {
//             id: 101,
//             name: "Vivek"
//         }
//         getOrders(users, (orders) => {
//             callback(orders)
//         })
//     }, 2000)
// }


// getUsers((orders) => {
//     console.log(orders)
// })