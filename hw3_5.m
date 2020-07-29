% (xi,f(xi)) given by 0<= i <= n. write a program with inputs 
%(xi,f(xi))and a value a and outputs lagrange polynomial P(a)

% takes in inputs and creates range of x 
x=0;
%input a value of x
prompt = 'what is x?';
n = input(prompt);

% create array to hold values of x
A = zeros(n);
while (x<=n) 
    x =x+1; 
    A(1,x) = x;
end 

% input a function - trouble
prompt2 = 'what is f(x) = '; 
str = input(prompt2, 's'); 
func = str2func('@(x)',str); 

% input of 'a' in P(a)
prompt2 = 'what is a:'; 
a = input(prompt2); 

% lagrange - trouble with index 2 
i =0;
x = 0; 
t = A(1,x);
j = A(1,i);
B = zeros(n); 
while ( i<n) 
   % creates a formula for multipliers less than xi   
  while ( x<i)
    Y = (X-t)/(j - t);    
    lower = lower * Y;
    x = x+1;  
  end
 x = x +1; 
 % creates a formula for multipliers greater than xi
  while( x>i) && (x<n) 
    Y = (X-t)/(j - t);
    upper = upper * Y; 
    x = x+1;     
  end 
  B(1,i)= lower * upper; 
  i = i+1; 
end


i = 0; 
% creating P(x) 
while ( i<n)
    Y = eval(func, A(1,i)) * B(1,i); 
    i= i+1; 
    P = P + Y; 
end 
