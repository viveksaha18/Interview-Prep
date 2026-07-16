// A closure is a function that remembers and can access variables from its outer (lexical) scope even after the outer function has finished executing.
// Example :
function f1() {
    let msg = "Hello";
    function f2() {
        console.log(msg);
    }
    return f2;
}
const msg = f1();
msg();


// Common question : 
function counter() {
    let cnt = 0;
    return function() {
        cnt=cnt+1;
        console.log(cnt);
    }
}
const c = counter();
c(); // 1
c(); // 2
c(); // 3

// c contains the inner return function
// c remembers the count and after calling it increments the previous cnt
