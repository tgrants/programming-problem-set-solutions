# One Line Task: Hard Fibonacci Numbers
# Python 3.11
# Work-in-progress

# === 69 characters ================================================|

# 1st attempt
# f=nth_term_of_the_fibonacci_sequence=lambda x:f(x-1)+f(x-2) if x>1 else x

# 2nd attempt
# f=nth_term_of_the_fibonacci_sequence=lambda x,y=0,z=1:f(x-1,z,y+z) if x else y

# 3rd attempt
# nth_term_of_the_fibonacci_sequence=lambda x:round(((1+5**.5)/2)**x/5**.5)

# https://stackoverflow.com/questions/4935957/fibonacci-numbers-with-an-one-liner-in-python-3
# nth_term_of_the_fibonacci_sequence=lambda n:pow(2<<n,n+1,(4<<2*n)-(2<<n)-1)%(2<<n)
# def nth_term_of_the_fibonacci_sequence(n):x=9**n;return x**-~n//(x*x+~x)%x

# https://orlp.net/blog/magical-fibonacci-formulae/
# nth_term_of_the_fibonacci_sequence=lambda n:(b:=2<<n)**n*b//(b*b-b-1)%b