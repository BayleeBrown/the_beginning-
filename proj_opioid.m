% graphs and data for problem one 

% time peroid
Time = [ 2010 2011 2012 2013 2014 2015 2016 2017]; 

%total opiod in each state 
Ohio_op_drug = [ 19707 20330 23145 26846 30860 37127 42470 46104];
WV_op_drug = [ 2890 3271 3376 4046 3280 2571 2548 1614 ] ;
Ken_op_drug =[ 10453 10289 10722 11148 11081 9864 9093 9394 ];
Vir_op_drug = [ 8685 6749 7831 11675 9055 8810 10195 10448];  
Pen_op_drug = [ 19814 19987 19959 20409 24904 25651 26164 27894];

%Percentage of op in tot drugs 
total_Oh = [ 70998 71282 85415 93747 101419 109150 115276 119349 ];
total_Wv = [ 8515 9221 9366 8935 6855 5268 5378 3597]; 
total_Ken = [29520 28212 27470 26763 27038 25793 26515 28766];
total_Vir = [41368 28779 32144 47651 32190 27741 33483 36964]; 
total_Pen = [ 89981 86780 78571 72073 77313 75342 72375 68751];

per_Oh = [19707/70998 20330/71282 23145/85415 26846/93747 30860/101419 37127/109150 42470/115276 46104/119349];
per_Wv = [2890/8515 3271/9221 3376/9366 4046/8935 3280/6855 2571/5268 2548/5378 1614/3597];
per_Ken = [10453/29520 10289/28212 10722/27470 11148/26763 11081/27038 9864/25793 9093/26515 9394/28766];
per_Vir = [8685/41368 6749/28779 7831/32144 11675/47651 9055/32190 8810/27741 10195/33483 10448/36964];
per_Pen = [19814/89981 19987/86780 19959/78571 20409/72073 24904/77313 25651/75342 26164/72375 27849/68751]; 


%Ohio 5
Cuy = [ 893 905 2624 3011 3529 3877 5410 7381];
Ham = [ 3628 2949 3880 4029 4384 6243 7825 9995];
Fran = [ 812 1459 1534 2218 2770 2806 2926 3016];
Mont = [ 1685 2065 2356 3011 3057 2932 3107 3560];
Lake = [ 424 599 703 1034 931 1546 2195 2127];

%West Virgina 5
Kan = [ 340 588 401 323 454 232 305 403 ];
Ber = [173 274 270 146 95 129 194 116]; 
Cab = [ 166 414 214 358 199 112 277 104];  
Harr =[ 53 39 212 366 209 198 305 83]; 
Mer = [326 373 300 322 176 333 226 70]; 

% Kentucky 5
Jeff = [ 1293 1776 1858 1890 1910 1593 1535 2124];
Fay = [ 547 455 573 898 575 726 609 938]; 
Ken = [ 499 447 506 704 695 619 607 778 ]; 
Cam = [ 230 314 451 633 654 634 592 534 ];
Mad = [ 280 158 326 423 393 383 370 411]; 

%Virginia 5
Fair = [383 533 625 608 514 601 834 802 ];
Pw = [294 288 480 570 533 535 490 577 ];
Ch_f = [ 217 289 361 441 601 593 817 727];
Hen = [295 284 337 432 584 802 950 1039 ];
Rich = [ 166 213 284 265 230 301 392 403];

%Pennsylvania 5
Phil  = [6259 4243 7445 5143 4809 6700 7034 9156 ];
All = [ 3415 3213 3534 4014 4639 4758 4967 4653];
Bucks = [ 1421 1632 1421 1213 2210 734 109 121];
York =[503 486 705 891 964 1130 998 1168];
Delaware = [919 1088 1102 1255 1453 1706 1624 1667]; 

%percentage of opioids in tot_drug across 5 states  
figure(1)
title('Percentage of Opioid reports from 2010 - 2017')
ylabel('Percentage')
xlabel('Time')
hold on
plot(Time, per_Oh)
plot(Time, per_Wv)
plot(Time, per_Ken)
plot(Time, per_Vir)
plot(Time, per_Pen)
legend('Ohio','West Virginia','Kentucky','Virginia','Pennslyvania')
legend('location','northwest')
hold off

% % total opiod graph * fitted poly's
% figure(2) 
% hold on 
% title('Total opioid reports from 2010-2017')
% ylabel('Amount')
% xlabel('Time') 
% 
% % creates scatter plot 
% scatter(Time, Ohio_op_drug)
% scatter(Time,WV_op_drug) 
% scatter(Time,Ken_op_drug)
% scatter(Time,Vir_op_drug)
% scatter(Time,Pen_op_drug)
% 
% %creates fitted polynomals of degree 3
% p = polyfit(Time, Ohio_op_drug, 1);
% f = polyval(p, Time);
% plot(Time, f);
% 
% s = polyfit(Time, WV_op_drug, 1);
% g = polyval(s, Time);
% plot(Time, g);
% 
% q = polyfit(Time, Ken_op_drug, 1);
% z = polyval(q, Time);
% plot(Time, z);
% 
% r = polyfit(Time, Vir_op_drug, 1);
% x = polyval(r, Time);
% plot(Time, x);
% 
% y = polyfit(Time, Pen_op_drug, 1);
% u = polyval(y, Time);
% plot(Time, u);
% 
% % displays formula before in command line 
% disp(p);
% disp(s);
% disp(q);
% disp(r);
% disp(y);
% legend('Ohio','West Virginia','Kentucky','Virginia','Pennslyvania')
% legend('location','northwest')
% 
% hold off
% 
% %Ohio
% figure(3)
% hold on
% title('Opioids in Ohio 5 top counties')
%  ylabel('Amount')
%  xlabel('Time')
% plot(Time, Cuy)
% plot(Time, Ham)
% plot(Time, Fran)
% plot(Time, Mont)
% plot(Time, Lake)
% legend('Cuyahoga', 'Hamilton', 'Franklin', 'Montgomery','Lake')
% legend('location','northwest')
% hold off
% 
% %West V
% figure(4)
% hold on
% title('Opioids in West Virginia 5 top counties')
%  ylabel('Amount')
%  xlabel('Time')
% plot(Time, Kan)
% plot(Time, Ber)
% plot(Time, Cab)
% plot(Time, Harr)
% plot(Time, Mer)
% legend('Kanawha', 'Berkeley', 'Cabell', 'Harrison','Mercer')
% legend('location','northeast')
% hold off
% 
% %Kentucky 
% figure(5)
% hold on
% title('Opioids in Kentucky 5 top counties')
%  ylabel('Amount')
%  xlabel('Time')
% plot(Time, Jeff)
% plot(Time, Fay)
% plot(Time, Ken)
% plot(Time, Cam)
% plot(Time, Mad)
% legend('Jefferson', 'Fayette', 'Kenton', 'Campbell','Madison')
% legend('location','northwest')
% hold off
% 
% %Virginia 
% figure(6)
% hold on
% title('Opioids in Virgina 5 top counties')
%  ylabel('Amount')
%  xlabel('Time')
% plot(Time, Fair)
% plot(Time, Pw)
% plot(Time, Ch_f)
% plot(Time, Hen)
% plot(Time, Rich)
% legend('Fairfax', 'Prince William', 'ChesterField', 'Henrico','Richmond')
% legend('location','northwest')
% hold off
% 
% %Pennsylvania 
% figure(7)
% hold on
% title('Opioids in Pennsylvania 5 top counties')
%  ylabel('Amount')
%  xlabel('Time')
% plot(Time, Phil)
% plot(Time, All)
% plot(Time, Bucks)
% plot(Time, York)
% plot(Time, Delaware)
% legend('Philidelphia', 'Allegheney', 'Bucks', 'York','Delaware')
% legend('location','northwest')
% hold off

% less that 9th grade  
 K_9 = [ 190711
 O_9 = [ 232970  
 P_9 = [ 304693
 V_9 = [ 261221
 WV_9 = [ 64047 
 
 % No high school diploma 
 K_ND = [ 265469
 O_ND = [ 591153
 P_ND = [ 620993 
 V_ND = [ 377441
 WV_ND = [ 126101 
 
 % high scool graduate 
 
 K_G = [ 990322
 O_G = [ 265410 
 P_G = [ 3183249 
 V_G = [ 1378019 
 WV_G = [ 524971
 
 % some college 
 
 K_SC = [ 618001 
 O_SC = [ 
 P_SC = [ 
 V_SC = [ 
 WV_SC = [ 
 
 
 
 
 
 
 
 
    




