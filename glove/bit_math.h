#ifndef BIT_MATH_H
#define BIT_MATH_H

# define SET_BIT(var,BIT_NUMBER)    var|=  (1<<BIT_NUMBER)
# define CLR_BIT(var,BIT_NUMBER)    var&=  (~(1<<BIT_NUMBER))
# define GET_BIT(var,BIT_NUMBER)    ((var>>BIT_NUMBER)&1)
# define TOG_BIT(var,BIT_NUMBER)    var^=  (1<<BIT_NUMBER)


#endif
