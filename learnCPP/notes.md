# Learn CPP notes

## CPP variables 
```CPP
// This is wrong:
int a, int b; 

// This is right:
int a, b;
or
int a = 10, b = 20;
```
### variable initialization
Three types of variable initialization
```CPP
// copy init
int a = 5;

// direct init
int a (5);

// list init (preferred)
int a {5 };
int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion of 4.5 to 4
``` 


