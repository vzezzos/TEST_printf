make re
gcc -Wall -Wextra -I . -I libft/ main/main_ft_printf.c -L . -lftprintf
mkdir -p result/resultat
./a.out > result/resultat/ft_printf
gcc -Wall  -Wextra main/main_printf.c
./a.out > result/resultat/printf
rm a.out
diff -s result/resultat/ft_printf result/resultat/printf > result/resultat/diff
cat -e result/resultat/diff
