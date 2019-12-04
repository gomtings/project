function w = rockgame(x)
% 컴퓨터와 가위 바위 보 게임을 하는 프로그램 입니다. 
win=0;% 이긴횟수 카운트 
lose=0;% 진 횟수 카운트 
j=0; % while 문 카운트  
while j<x % j가 x보다 작을때 까지 반복  
n=randi(3,1,1); % 1~3 까지 난수 1개를 생성 n에 저장 
k=menu('Choose one:','ROCK','PAPER','SCISSORS'); % 바위, 보 , 가위  // GUI 생성  
if n > k  % k가 n보다 작을 때  (진 경우)
    if k==0 % k가 0일 경우 
        break; % 정지 한다. 
    end;
     %난수가 바위이면
               if k == 1 & n == 2 % k가 1이고 n이 2이면 
                    disp(['YOU: ROCK' ' PC: PAPER']);
                      disp('lose');
                        lose=lose+1; % 진 횟수 카운트 
               %난수가 가위이면
               elseif k == 2 && n == 3% k가 2이고 n이 3이면 
                    disp(['YOU: PAPER' ' PC: SCISSORS']);
                   disp('lose');
                        lose=lose+1; % 진 횟수 카운트 
               %난수가 보자기이면
                   else
                    disp(['YOU: SCISSORS' ' PC: ROCK']);
                    disp('lose');
                     lose=lose+1; % 진 횟수 카운트 
               end;
               
elseif n == k % n과 k 가 같을 때 (비긴 경우)
    
                %난수가 바위이면
               if n == 1 %  n이 1이면 
                    disp(['YOU: ROCK' ' PC: ROCK']);
                    disp('draw');
               %난수가 가위이면
               elseif n == 2%  n이 2이면 
                    disp(['YOU: PAPER' ' PC: PAPER']);
                    disp('draw');
               %난수가 보자기이면
               else
                    disp(['YOU: SCISSORS' ' PC: SCISSORS']); 
                    disp('draw');
               end;
               
else n < k % k 가 n 보다 클 경우 (이긴 경우)
    
                %난수가 바위이면
               if k == 3 & n == 2 % k가 3이고 n이 2이면 
                    disp(['YOU: SCISSORS' ' PC: PAPER']);
                    disp('win');% win 출력 
                    win=win+1;   % 이긴 횟수 카운트 win+1
               %난수가 가위이면
               elseif k == 2 && n == 1% k가 2이고 n이 1이면 
                    disp(['YOU: PAPER' ' PC: ROCK']);
                     disp('win');% win 출력 
                   win=win+1;   % 이긴 횟수 카운트 win+1
               %난수가 보자기이면
               else 
                    disp(['YOU: ROCK' ' PC: SCISSORS']); 
                   disp('win'); % win 출력 
                   win=win+1;   % 이긴 횟수 카운트 win+1
               end;
               
   end;
   j=j+1;% j에 1씩 더한후 누적 
end;
if k~=0 % k가 0이 아닐 경우 출력 
disp(['Game you won :'  num2str(win)]); % 이긴 횟수 출력 
disp(['Game you lost :' num2str(lose)]); % 진 횟수 출력 
end