.data
str1: .asciiz "Answer = "

.text #텍스트 섹션
.globl main #글로벌 메인을 선언  

main:

  li $s0,7 #X 값
  li $s1,5 #i 값
  li $t0,3 #t0에 10를 넣는다  
  li $s2,0 #temp 값
  
  sub $s2,$s0,$t0
  mult $s0,$s2 # s0*t0 곱 연산
  mflo $s2  #lo 레지스터에서 s0 로 가져 온다.
  add  $s2,$s2,$s1 # s1=s1+s0  

  li $v0,4
  la $a0,str1
  syscall
  li $v0,1
  move $a0,$s2  #$s0 값 출력 
  syscall
  li $v0,10 # 종료 
  syscall
