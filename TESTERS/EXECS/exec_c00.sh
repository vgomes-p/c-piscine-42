DEFAULT="\033[m"
RED="\033[1;31m"
GREEN="\033[1;32m"
YLOW="\033[1;33m"
PINK="\033[1;35m"
CYAN="\033[1;36m"
INVERT="\033[1;4;7;97m"
BOLD="\033[1m"

BASE_DIR=$(pwd)

clear

echo "${YLOW}============================ MADE BY VGOMES_P =============================${DEFAULT}"
sleep 1

echo "${PINK}RUNNING THE MOTHER OF ALL: NORMINETTE =====================================${DEFAULT}"
sleep 1
norminette -R CheckForForbiddenSourceHeader "$BASE_DIR" > "$BASE_DIR/norminette.log" 2>&1
if grep -q "Error" "$BASE_DIR/norminette.log"
then
 echo "❌" > "$BASE_DIR/normout.log"
 echo "${RED}❌ NORMINETTE ERRORS FOUND ❌${DEFAULT}"
 echo "${YLOW}"
 cat "$BASE_DIR/norminette.log"
 echo "${DEFAULT}"
else
 echo "✅" > "$BASE_DIR/normout.log"
 echo "${GREEN}✅ NORMINETTE ✅${DEFAULT}"
fi

rm -f "$BASE_DIR/norminette.log"


sleep .3
echo ""
echo "${PINK}STARTING TESTS ============================================================${DEFAULT}"
echo ""
sleep .3


run_test ()
{

EX=$1
FILE=$2

cd "$BASE_DIR"

if [ -d "$BASE_DIR/$EX" ]
then

 echo ""
 echo "${CYAN}TESTING: $EX/$FILE =========================================${DEFAULT}"
 echo ""

 cd "$BASE_DIR/$EX"

 echo "#include <stdio.h>" > test.c
 cat "$FILE.c" >> test.c
 cat ~/c-piscine-42/TESTERS/c00/test_"$FILE".c >> test.c

 gcc -Wall -Wextra -Werror test.c -o a.out >> compile_error.log 2>&1

 if [ $? -eq 0 ]
 then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
 else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo "${BOLD}error log:${RED}"
    cat compile_error.log
    echo "${DEFAULT}"
 fi

 sleep .3
 ./a.out > output.txt
 cat ~/c-piscine-42/TESTERS/c00/test_"$FILE".txt >> expected.txt
 if diff output.txt expected.txt >> compare.log
 then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo "✅" >> "$BASE_DIR/$EX.log"
 else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo "❌" >> "$BASE_DIR/$EX.log"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt
    echo "${DEFAULT}"
    echo ""
    echo "${BOLD}output received:${YLOW}"
    cat output.txt
    echo "${DEFAULT}"
 fi
 sleep .3
else
 echo "👻" >> "$BASE_DIR/$EX.log"
fi
}


run_test ex00 ft_putchar
run_test ex01 ft_print_alphabet
run_test ex02 ft_print_reverse_alphabet
run_test ex03 ft_print_numbers
run_test ex04 ft_is_negative
run_test ex05 ft_print_comb
run_test ex06 ft_print_comb2
run_test ex07 ft_putnbr


for ex in ex00 ex01 ex02 ex03 ex04 ex05 ex06 ex07
do

if [ -d "$BASE_DIR/$ex" ]
then

 rm -f \
 "$BASE_DIR/$ex/test.c" \
 "$BASE_DIR/$ex/a.out" \
 "$BASE_DIR/$ex/output.txt" \
 "$BASE_DIR/$ex/expected.txt" \
 "$BASE_DIR/$ex/compile_error.log" \
 "$BASE_DIR/$ex/compare.log"

fi

done


sleep .3
echo ""
echo "${PINK}FINAL RETURNED ============================================================${DEFAULT}"
echo -n "${CYAN}Norminette: ${DEFAULT}"
cat "$BASE_DIR/normout.log"

echo -n "${CYAN}ex00: " && cat "$BASE_DIR/ex00.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "
echo -n "${CYAN}ex01: " && cat "$BASE_DIR/ex01.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "
echo -n "${CYAN}ex02: " && cat "$BASE_DIR/ex02.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "
echo -n "${CYAN}ex03: " && cat "$BASE_DIR/ex03.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "
echo -n "${CYAN}ex04: " && cat "$BASE_DIR/ex04.log" 2>/dev/null
echo -n "${CYAN}ex05: " && cat "$BASE_DIR/ex05.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "
echo -n "${CYAN}ex06: " && cat "$BASE_DIR/ex06.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "
echo -n "${CYAN}ex07: " && cat "$BASE_DIR/ex07.log" 2>/dev/null | tr '\n' ' ' && echo -n "| "


echo ""
echo "${PINK}If all ran ${GREEN}✅ green ✅${PINK}, then Good luck with Moulinette${DEFAULT}"
echo "${PINK}============================================================================${DEFAULT}"
rm -f "$BASE_DIR"/ex*.log "$BASE_DIR/normout.log"
echo "${YLOW}============================== TEST FINISHED ===============================${DEFAULT}"