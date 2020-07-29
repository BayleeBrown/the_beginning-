
% matrix eigen values 

E = [ 0.6 0 0.7; 0 0.4 0.5; 0.3 0.5 0.2 ];
% ; differentiate rows so 5 7 1.5 is the top row 


%[v,d] = eig(E); v = eigen vectors and d = eigen values 
%i=0; 
%N = [0;100;0]; 

%while i<10 while equation to calc pop    
 %  i=i+1;
  % N = E*N;    
%end

%A = [2;-1]; testing out an explicit equation 
%B = [1;1];
%t=4; 
%N = (-1)*(1/2)^t*A + 3*2^t*B; 

b = 1-0.59; 
N = [ 10; 0;0;0;0;0;0;0];
A1 = [b 0 0 0 0 0 0 0]; 
A2 = [ .59 b b b b b b b];
A3 = [ 0 .59 b 0 0 0 0 0];
A4 = [ 0 0 .59 b 0 0 0 0];
A5 = [ 0 0 0 .59 b 0 0 0]; 
A6 = [ 0 0 0 0 .59 b 0 0]; 
A7 = [ 0 0 0 0 0 .59 b 0];
A8 = [ 0 0 0 0 0 0 .59 1]; 

L = [A1; A2; A3; A4; A5; A6; A7; A8]; 
C = N; 
t = 1; 
while t<100
    B = L*N; 
    C = [C B]; 
    N = B; 
   t=t+1; 
end
%sum of each column 
T = sum(C); 
% plot each sum 
   plot(T);  
  
   v = eig(L); 
   y = (12198)^(1/42); 

