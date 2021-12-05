I learned to use debugger and finally find the wrong statement: `if (onlyExecuteOnce = 1)` which should be `if (onlyExecuteOne == 1)`.

When I open the debugger and go through the statement, I found the value of `onlyExecuteOnce` changed back into 1, then I suddenly discover the mistake.

If I didn't learn to use the tool, debugger, I would use much more time to solve this small mistake.