# Debug-Print (In C)

Print variable's value easily with its name by just one easy command.\
Sometimes you need to print some variables with their values for debugging purposes. Something like this:\
```number1: 10```\
```age: 45```\
```name: Bruce```

But printing this with ```printf()``` is a little time-consuming as you need to print it like this:\
```printf("number1: %d\n age: %d\n name: %s\n", number1, age, name);```

With these macros, all you need to do is:\
```DEBUG_PRINT3(number1, age, name);```

Done! Easy!\
You can pass variables as many as you want or any type you want!
