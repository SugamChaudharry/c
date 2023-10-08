//  is there any difference between while and do while if yes then explain with three suitable example

// Yes, there is a difference between while and do-while loops.

// While loop

// A while loop is an entry-controlled loop, which means that the condition is checked before the loop body is executed. If the condition is false, the loop body is skipped and the loop terminates. Otherwise, the loop body is executed and the condition is checked again. This process continues until the condition is false.

// Do-while loop

// A do-while loop is an exit-controlled loop, which means that the condition is checked after the loop body is executed. This means that the loop body is always executed at least once, even if the condition is false. After the loop body is executed, the condition is checked. If the condition is true, the loop body is executed again. Otherwise, the loop terminates.

// Example 1:

// # While loop
// i = 0
// while i < 10:
//   print(i)
//   i += 1

// # Output:
// # 0
// # 1
// # 2
// # 3
// # 4
// # 5
// # 6
// # 7
// # 8
// # 9
// Example 2:

// # Do-while loop
// i = 0
// do:
//   print(i)
//   i += 1
// while i < 10

// # Output:
// # 0
// # 1
// # 2
// # 3
// # 4
// # 5
// # 6
// # 7
// # 8
// # 9
// In both of these examples, the loop body will be executed 10 times. However, the difference is that the while loop will only execute the loop body if the condition is true before the loop is entered. The do-while loop, on the other hand, will always execute the loop body at least once, even if the condition is false.

// Example 3:

// # While loop
// user_input = input("Enter a number: ")
// while not user_input.isdigit():
//   print("Invalid input. Please enter a number.")
//   user_input = input("Enter a number: ")

// # Do-while loop
// user_input = input("Enter a number: ")
// do:
//   if not user_input.isdigit():
//     print("Invalid input. Please enter a number.")
//   user_input = input("Enter a number: ")
// while not user_input.isdigit()
// In both of these examples, the user will be prompted to enter a number until they enter a valid number. However, the difference is that the while loop will only prompt the user for input if the condition is true before the loop is entered. The do-while loop, on the other hand, will always prompt the user for input at least once, even if the condition is false