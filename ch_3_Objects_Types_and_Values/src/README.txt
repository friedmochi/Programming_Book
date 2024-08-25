Terms:

    Object: region of memory with a type that specifies what data can be stored in that region.

    Variable: a named Object

    best practice: 
        define variables short and simple. If space is needed to identify a variables function, include a underscore between the words
        never use all capitals for a function, as it is reserved for macros.

3.8 Types and objects

    Type: potential values and a set of operations
            int, string, boolean,
    Object: memory that takes in a value and specific type
    Value: bit in memory according to the type
    Variable: named objects
    Declaration: statement that gives the name of the object
    Definition: declaration that sets aside memory for the object
    
3.9 Type Safety

    Using a variable before initialization, it not type safe.
    ALWAYS INITIALIZE YOUR variables    
       int x = 20;

    Char to int conversion safe with no signal lost.
        no information was deemed to be a high loss for the US.

    Safe type safety conversions:
        boolean to character
        boolean to integer
        boolean to double
        character to integer
        character to double
        integer to double

    Unsafe conversions:
        double to integer
        double to character
        double to boolean
        integer to character
        integer to boolean
        character to boolean
        * These are accepted in the compiler, even though unsafe

    *Note*

        Integers are 4 bytes 0-1000
        Characters are 1 byte 0-127

        Values ouside the range of characters or integers result in narrowing(data loss). 
        Method to eliminate narrowing is with initializers{}

            ex: 
                int a {1000};       //OK
                char b(a);          //error: integer -> character may narrow
                
                

        
