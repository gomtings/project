function w = rockgame(x)
% ��ǻ�Ϳ� ���� ���� �� ������ �ϴ� ���α׷� �Դϴ�. 
win=0;% �̱�Ƚ�� ī��Ʈ 
lose=0;% �� Ƚ�� ī��Ʈ 
j=0; % while �� ī��Ʈ  
while j<x % j�� x���� ������ ���� �ݺ�  
n=randi(3,1,1); % 1~3 ���� ���� 1���� ���� n�� ���� 
k=menu('Choose one:','ROCK','PAPER','SCISSORS'); % ����, �� , ����  // GUI ����  
if n > k  % k�� n���� ���� ��  (�� ���)
    if k==0 % k�� 0�� ��� 
        break; % ���� �Ѵ�. 
    end;
     %������ �����̸�
               if k == 1 & n == 2 % k�� 1�̰� n�� 2�̸� 
                    disp(['YOU: ROCK' ' PC: PAPER']);
                      disp('lose');
                        lose=lose+1; % �� Ƚ�� ī��Ʈ 
               %������ �����̸�
               elseif k == 2 && n == 3% k�� 2�̰� n�� 3�̸� 
                    disp(['YOU: PAPER' ' PC: SCISSORS']);
                   disp('lose');
                        lose=lose+1; % �� Ƚ�� ī��Ʈ 
               %������ ���ڱ��̸�
                   else
                    disp(['YOU: SCISSORS' ' PC: ROCK']);
                    disp('lose');
                     lose=lose+1; % �� Ƚ�� ī��Ʈ 
               end;
               
elseif n == k % n�� k �� ���� �� (��� ���)
    
                %������ �����̸�
               if n == 1 %  n�� 1�̸� 
                    disp(['YOU: ROCK' ' PC: ROCK']);
                    disp('draw');
               %������ �����̸�
               elseif n == 2%  n�� 2�̸� 
                    disp(['YOU: PAPER' ' PC: PAPER']);
                    disp('draw');
               %������ ���ڱ��̸�
               else
                    disp(['YOU: SCISSORS' ' PC: SCISSORS']); 
                    disp('draw');
               end;
               
else n < k % k �� n ���� Ŭ ��� (�̱� ���)
    
                %������ �����̸�
               if k == 3 & n == 2 % k�� 3�̰� n�� 2�̸� 
                    disp(['YOU: SCISSORS' ' PC: PAPER']);
                    disp('win');% win ��� 
                    win=win+1;   % �̱� Ƚ�� ī��Ʈ win+1
               %������ �����̸�
               elseif k == 2 && n == 1% k�� 2�̰� n�� 1�̸� 
                    disp(['YOU: PAPER' ' PC: ROCK']);
                     disp('win');% win ��� 
                   win=win+1;   % �̱� Ƚ�� ī��Ʈ win+1
               %������ ���ڱ��̸�
               else 
                    disp(['YOU: ROCK' ' PC: SCISSORS']); 
                   disp('win'); % win ��� 
                   win=win+1;   % �̱� Ƚ�� ī��Ʈ win+1
               end;
               
   end;
   j=j+1;% j�� 1�� ������ ���� 
end;
if k~=0 % k�� 0�� �ƴ� ��� ��� 
disp(['Game you won :'  num2str(win)]); % �̱� Ƚ�� ��� 
disp(['Game you lost :' num2str(lose)]); % �� Ƚ�� ��� 
end