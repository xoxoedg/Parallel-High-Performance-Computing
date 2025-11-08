.data
message: .asciiz "Hello from MIPS!\n"

.text

main:
    li $v0, 4          # syscall 4 = print string
    la $a0, message    # lade Adresse der Zeichenkette in 
    syscall            # führe Systemaufruf aus

    li $v0, 10         # syscall 10 = exit
    syscall
