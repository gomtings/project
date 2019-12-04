.data
array:.space 40
str: .asciiz "받을 용돈을 입력해 주세요."
str2: .asciiz "물건의 몇개 구매하실 건가요?(1~10)사이"
str3: .asciiz "번 물건 가격을 입력해 주세요."
str4: .asciiz "물건의 가격이 용돈을 초과합니다. 저렴한 물건을 구매해 주세요.\n "
result: .asciiz "잔돈:"
money: .asciiz "용돈:"
newline: .asciiz "\n"
nomoney: .asciiz "부족한 금액:"
price: .asciiz "번 물건의 가격:" 
com: .asciiz "," 
item: .asciiz "각 물건별 구매 개수:" 
___: .asciiz "------------------------\n"
itemprice: .asciiz "구매한 물건의 가격: " 
won: .asciiz "원"
number: .asciiz "개"
min: .asciiz "번 물건 추가 구매 개수:"

.text 
.globl main

main:  
li $t0,0 # 용돈 
la $s0,array 

for:

bne $t0,$0,main2  # 용돈 

  li $v0,4
  la $a0,str  # 문자열 str 출력
  syscall
  
  	li $v0,5  
	syscall  # 용돈을 입력 받는다. 
	move $t0,$v0  #$v0에서 $t0 로 이동 
	

	j for
	
	 main2: 
	 
li $t1,0 # 구매할 물건의 개수	
li $s3,11 # 배열의 크기 
li $s1,0 # i값 	
# slt 명령에 쓰일 변수
li $s2,1  # 1값

	for2: 
	
	bne $t1,$0,done  # 구매할 물건개수가 0일경우 판단. 
	
	li $v0,4
  la $a0,str2  # str2 문자열 출력
  syscall
  
  	li $v0,5  
	syscall
	move $t1,$v0 # 물건의 개수를 입력 받는다. 
	
  	slt $s1,$t1,$s3   # 물건구매 개수가 10개 이상인지를 판단한다.  
	bne $s1,$s2,main2 # 10개 이상일 경우 main2 로 가서 재입력 한다. 
	
j for2  

done:
la $s0,array 
li $a2,0 # 물건의 총가격 
li $s1,0 # i값 

for3:

too: 

beq $s1,$t1,main3 #  구매할 물건의 가격 

   li $v0,1
   move $a0,$s1 # $s1 값 출력  
   syscall

  li $v0,4
  la $a0,str3  # str2 문자열 출력 
  syscall
  
  	li $v0,5  # 정수 값 을 입력 받는다 .
	syscall
	beq $v0,$0,too # 물건의 가격이 0원 일경우 too로 이동 
	sw $v0,0($s0) # 엽력받은 값을 배열에 저장 
	add $a2,$a2,$v0 # 전체 구매한 물건의 가격 계산.
	addi $s0,$s0,4 # 배열의 인덱스 
	
	addi $s1,$s1,1 # for문의 인덱스 
	
	j for3
	
	main3:
	
 li $s1,0 # i값 
 li $t3,0 # 잔돈 	
 
 slt $s1,$a2,$t0
 bne $s1,$s2,lack
 
la $s0,array 
addi $s4,$t1,1 # 

li $v0,4
  la $a0,___  # ___ 문자열 출력 
  syscall
  
for4: # 물건들의 가격을 추출력 

beq $s1,$s4,else # for문
  
  
  li $v0,1
   move $a0,$s1 # $s1 값 출력  
   syscall
   
  li $v0,4
  la $a0,price  # price 문자열 출력 
  syscall
  
  
	lw $a0, 0($s0)
	li $v0,1  #배열(물건의 가격)을 출력 한다. 
	syscall
	
	 li $v0,4
  la $a0,com  # price 문자열 출력 
  syscall
  
	addi $s0,$s0,4 # 배열 인덱스를 위한 증가식 
	
	addi $s1,$s1,1  # for 문을 위한 증가식 

	j for4  #for4 로 이동 한다.(jump)
	
else:
la $s0,array 
li $s1,0 # i값 
li $s2,1  # 1값

lw $a0, 0($s0)
move $a1,$a0  # 최소값을 구하기 위한 변수- 배열의 첫번째 원소를 초기값으로 넣어준다. 

for1:
beq $s1,$t1,print2 # 최소 값을 구하기 위한 조건연산 
  
	lw $a0, 0($s0)
   
	slt $s4,$a0,$a1
	beq $s4,$s2,mins
	
	addi $s0,$s0,4 # 배열 인덱스 
	
	addi $s1,$s1,1 # for 문 인덱스 

	j for1 # for1 으로 점프 한다.
	
	mins: #  
	
	move $a1,$a0 # 최소값 저장 
	move $t7,$s1 # 최소값의 인덱스 
	
	addi $s0,$s0,4 # 배열 인덱스
	
	addi $s1,$s1,1 # for 문 인덱스
    
	j for1 # for1 으로 점프 한다.

print2:
	
sub $t3,$t0,$a2 # 잔돈 계산 
div $t0,$a2 #구매 가능한 물건의 개수 계산 
mflo $a3 # (몱) 용돈으로 구매할수 있는 물건의 개수 
mult $a2,$a3 # 전체 물건구매 가격 계산
mflo $t4   #    ""
sub $s5,$t0,$t4 # 잔돈 계산 (최대로 구매시 잔돈)

li $v0,4
   la $a0,newline  # newline 문자열 출력 
   syscall
   
   li $v0,4
  la $a0,item  # item 문자열 출력
  syscall
  
  li $v0,1
   move $a0,$a3 # $s1 값 출력  (물건 구매 개수 )
   syscall
   
   li $v0,4
   la $a0,number  # number 문자열 출력 (개)
   syscall 

slt $s4,$a1,$s5 # 잔돈과 가장 물건의 가장 최소 가격을 비교 
bne $s4,$s2,output # 최소 가격이 잔돈보다 작지 않을경우 output 으로 이동 
   
div $s5,$a1 #  
mflo $t6 #  # 잔돈으로 추가 구매 할수 있는 물건의 개수 
mult $a1,$t6 # 
mflo $s4   #   잔돈으로 추가 구매한 물건의 가격 
add $t4,$t4,$s4 #원래 물건구매가격 에 추가구매 물건의 가격을 더한 가격 
sub $s5,$s5,$s4 추가 구매 물건가격을 뺀 잔돈 
   
addi $t7,$t7,1 # 실제 물건의 번호를 구하기 위한 연산 인덱스+1

li $v0,4
   la $a0,newline  # newline 문자열 출력 (줄바꿈)
   syscall

   li $v0,1
   move $a0,$t7 # $t7 값 출력  (물건의 번호)
   syscall 
   
li $v0,4
  la $a0,min  # min 문자열 출력 (추가 구매 물건의 개수)
  syscall
  
  li $v0,1
   move $a0,$t6 # $t6 값 출력  (추가 구매 물건의 개수)
   syscall 
   
   li $v0,4
   la $a0,number  # number 문자열 출력 (개)
   syscall 
   
   j output
   
output:  

li $v0,4
   la $a0,newline  # newline 문자열 출력 (줄바꿈)
   syscall
   
	li $v0,4
   la $a0,money # money 문자열 출력 
   syscall
   
   li $v0,1
   move $a0,$t0 # 받은 용돈   
   syscall
   
   li $v0,4
   la $a0,won  # won 문자열 출력 (원)
   syscall
   
   li $v0,4
   la $a0,newline  # newline 문자열 출력 (줄바꿈)
   syscall
   
   li $v0,4
   la $a0,itemprice # itemprice 문자열 출력 
   syscall
   
   li $v0,1
   move $a0,$t4 # 구매한 물건 가격 총합   
   syscall
   
   li $v0,4
   la $a0,won  # won 문자열 출력 
   syscall
   
   li $v0,4
   la $a0,newline  # newline 문자열 출력 
   syscall
   
	li $v0,4
   la $a0,result  # result 문자열 출력 
   syscall
   
	li $v0,1
   move $a0,$s5 # 잔돈  
   syscall
   
   li $v0,4
   la $a0,won  # won 문자열 출력 
   syscall
   
    li $v0,10 # 종료 한다.
  syscall
	
  lack:   
 
   li $t3,0 # 잔돈  
   sub $t3,$t0,$a2 # 잔돈 계산  
 
  li $v0,4
  la $a0,___  # ___ 문자열 출력 
  syscall
  
	li $v0,4
   la $a0,str4  # str4 문자열 출력 
   syscall
   
   li $v0,4
   la $a0,money # money 문자열 출력 
   syscall
   
   li $v0,1
   move $a0,$t0 # 받은 용돈   
   syscall
   
   li $v0,4
   la $a0,won  # won 문자열 출력 
   syscall
   
   li $v0,4
   la $a0,newline  # newline 문자열 출력 
   syscall

   li $v0,4
   la $a0,itemprice # itemprice 문자열 출력 
   syscall
   
   li $v0,1
   move $a0,$a2 # 구매한 물건 가격 총합   
   syscall
   
   li $v0,4
   la $a0,won  # won 문자열 출력 
   syscall
	
	li $v0,4
   la $a0,newline  # newline 문자열 출력 
   syscall
	
	li $v0,4
   la $a0,nomoney  # nomoney 문자열 출력 
   syscall
   
   li $v0,1
   move $a0,$t3 # 부족한 금액 출력   
   syscall
   
   li $v0,4
   la $a0,won  # won 문자열 출력 
   syscall
   
   li $v0,4
   la $a0,newline  # newline 문자열 출력 
   syscall
   
   j done # done 부분으로 jump 한다. 
   
# 20157135_이상우