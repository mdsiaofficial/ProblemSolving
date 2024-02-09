function fibonacci(n) {
    // Handle potential invalid input
    if (n <= 0) {
        
    }
  
    // Initialize first and second values
    let first = 0;
    let second = 1;
  
    // Print initial values
    console.log(first, second);
  
    // Loop for remaining terms
    for (let i = 2; i <= n; i++) {
      // Calculate next term
      let next = first + second;
  
      // Print term
      console.log(next);
  
      // Update values for next iteration
      first = second;
      second = next;
    }
}
  
  // Get input from user
  let n = Number(prompt("Enter a positive integer:"));
  
  // Call the function and handle potential errors
  try {
    fibonacci(n);
  } catch (error) {
    console.error(error.message);
  }
  