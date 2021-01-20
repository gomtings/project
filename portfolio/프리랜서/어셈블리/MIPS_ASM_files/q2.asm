.data
str1: .asciiz "Answer = "

.text #텍스트 섹션
.globl main #글로벌 메인을 선언  

main:

  li $s0,3 #num 값
  li $s1,6 #A 값
  li $t0,5 #B에 6를 넣는다
  li $t1,2 #t1 2를 넣는다
  li $t2,4 #t2 4를 넣는다  
  li $s2,0 #temp1 값
  li $s3,0 #temp2 값
     
  mult $t1,$s1 # s2*s0 곱 연산
  mflo $s2  #lo 레지스터에서 s2 로 가져 온다.
  add  $s2,$s2,$s0 # s1=s1+s0
  sub  $s3,$t0,$t2
  mult $s2,$s3 # s0*t0 곱 연산
  mflo $s2  #lo 레지스터에서 s0 로 가져 온다.
  add  $s2,$s0,$s2 # s1=s1+s0  

  li $v0,4
  la $a0,str1
  syscall
  li $v0,1
  move $a0,$s2  #$s0 값 출력 
  syscall
  li $v0,10 # 종료 
  syscall
