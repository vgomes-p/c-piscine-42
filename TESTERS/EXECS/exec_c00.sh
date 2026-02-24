DEFAULT="\033[m"
RED="\033[1;31m"
GREEN="\033[1;32m"
YLOW="\033[1;33m"
PINK="\033[1;35m"
CYAN="\033[1;36m"
INVERT="\033[1;4;7;97m"
BOLD="\033[1m"

clear
#checking norminette
echo "${PINK}Running the auntie of all: Norminette... ${DEFAULT}"
sleep 1
norminette -R CheckForForbiddenSourceHeader . > norminette.log 2>&1
if grep -q "Error" norminette.log
then
    echo "${RED}❌ NORMINETTE ERRORS FOUND ❌${DEFAULT}"
    echo "${YLOW}"
    cat norminette.log && echo "${DEFAULT}"
else
    echo "${GREEN}✅ NORMINETTE ✅${DEFAULT}"
fi
rm -rfd norminette.log

sleep .3
echo ''
echo "${CYAN}============================================================================${DEFAULT}"
echo ''
sleep .3


#testing ex00
echo "${CYAN}Starting to test ex00/ft_putchar${DEFAULT}"
echo ""
sleep .3
cd ex00
cat ft_putchar.c >> test.c
cat ~/c-piscine-42/TESTERS/c00/test_ft_putchar.c >> test.c
sleep .3
gcc -Wall -Wextra -Werror test.c -o a.out  >> compile_error.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
    echo ""
else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo ""
    echo "${BOLD}error log:${RED}"
    cat compile_error.log && echo "${DEFAULT}"
fi
sleep .3
./a.out > output.txt
cat ~/c-piscine-42/TESTERS/c00/test_ft_putchar.txt >> expected.txt
diff output.txt expected.txt  >> compare.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo ""
    echo "${BOLD}output:${YLOW}"
    cat output.txt && echo ${DEFAULT}
else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt && echo ${DEFAULT}
    echo ""
    echo "${BOLD}output received:${YLOW}"
    echo ''
    cat output.txt && echo ${DEFAULT}
fi
sleep .3
echo ''
echo "${CYAN}ft_putchar testing has finished...${DEFAULT}"


sleep .3
echo ''
echo "${CYAN}============================================================================${DEFAULT}"
echo ''
sleep .3


#testing ex01
echo "${CYAN}Starting to test ex01/ft_print_alphabet${DEFAULT}"
echo ""
sleep .3
cd ../ex01
cat ft_print_alphabet.c >> test.c
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_alphabet.c >> test.c
gcc -Wall -Wextra -Werror test.c -o a.out >> compile_error.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
    echo ""
else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo ""
    echo "${BOLD}error log:${RED}"
    cat compile_error.log && echo "${DEFAULT}"
fi
sleep .3
./a.out > output.txt
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_alphabet.txt >> expected.txt
diff output.txt expected.txt >> compare.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo ""
    echo "${BOLD}output:${YLOW}"
    cat output.txt && echo ${DEFAULT}
else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt && echo ${DEFAULT}
    echo ""
    echo "${BOLD}output received:${YLOW}"
    echo ''
    cat output.txt && echo ${DEFAULT}
fi
sleep .3
echo ''
echo "${CYAN}ft_print_alphabet testing has finished...${DEFAULT}"



sleep .3
echo ''
echo "${CYAN}============================================================================${DEFAULT}"
echo ''
sleep .3


#testing ex02
echo "${CYAN}Starting to test ex02/ft_print_reverse_alphabet${DEFAULT}"
echo ""
sleep .3

cd ../ex02
cat ft_print_reverse_alphabet.c >> test.c
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_reverse_alphabet.c >> test.c
gcc -Wall -Wextra -Werror test.c -o a.out  >> compile_error.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
    echo ""
else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo ""
    echo "${BOLD}error log:${RED}"
    cat compile_error.log && echo "${DEFAULT}"
fi
sleep .3
./a.out > output.txt
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_reverse_alphabet.txt >> expected.txt
diff output.txt expected.txt >> compare.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo ""
    echo "${BOLD}output:${YLOW}"
    cat output.txt && echo ${DEFAULT}
else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt && echo ${DEFAULT}
    echo ""
    echo "${BOLD}output received:${YLOW}"
    echo ''
    cat output.txt && echo ${DEFAULT}
fi
sleep .3
echo ''
echo "${CYAN}ft_print_reverse_alphabet testing has finished...${DEFAULT}"


#testing ex03
echo "${CYAN}Starting to test ex03/ft_print_numbers${DEFAULT}"
echo ""
sleep .3


cd ../ex03
cat ft_print_numbers.c >> test.c
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_numbers.c >> test.c
gcc -Wall -Wextra -Werror test.c -o a.out  >> compile_error.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
    echo ""
else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo ""
    echo "${BOLD}error log:${RED}"
    cat compile_error.log && echo "${DEFAULT}"
fi
sleep .3
./a.out > output.txt
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_numbers.txt >> expected.txt
diff output.txt expected.txt >> compare.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo ""
    echo "${BOLD}output:${YLOW}"
    cat output.txt && echo ${DEFAULT}
else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt && echo ${DEFAULT}
    echo ""
    echo "${BOLD}output received:${YLOW}"
    echo ''
    cat output.txt && echo ${DEFAULT}
fi
sleep .3
echo ''
echo "${CYAN}ft_print_numbers testing has finished...${DEFAULT}"


#testing ex04
echo "${CYAN}Starting to test ex04/ft_is_negative${DEFAULT}"
echo ""
sleep .3


cd ../ex04
cat ft_is_negative.c >> test.c
cat ~/c-piscine-42/TESTERS/c00/test_ft_is_negative.c >> test.c
gcc -Wall -Wextra -Werror test.c -o a.out  >> compile_error.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
    echo ""
else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo ""
    echo "${BOLD}error log:${RED}"
    cat compile_error.log && echo "${DEFAULT}"
fi
sleep .3
./a.out > output.txt
cat ~/c-piscine-42/TESTERS/c00/test_ft_is_negative.txt >> expected.txt
diff output.txt expected.txt >> compare.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo ""
    echo "${BOLD}output:${YLOW}"
    cat output.txt && echo ${DEFAULT}
else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt && echo ${DEFAULT}
    echo ""
    echo "${BOLD}output received:${YLOW}"
    echo ''
    cat output.txt && echo ${DEFAULT}
fi
sleep .3
echo ''
echo "${CYAN}ft_is_negative testing has finished...${DEFAULT}"


#testing ex05
echo "${CYAN}Starting to test ex05/ft_print_comb${DEFAULT}"
echo ""
sleep .3

cd ../ex05
cat ft_print_comb.c >> test.c && cat ~/c-piscine-42/TESTERS/c00/test_ft_print_comb.c >> test.c
gcc -Wall -Wextra -Werror test.c -o a.out  >> compile_error.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ FILES COMPILED ✅${DEFAULT}"
    echo ""
else
    echo "${RED}❌ FILES FAILED TO COMPILE ❌${DEFAULT}"
    echo ""
    echo "${BOLD}error log:${RED}"
    cat compile_error.log && echo "${DEFAULT}"
fi
sleep .3
./a.out > output.txt
cat ~/c-piscine-42/TESTERS/c00/test_ft_print_comb.txt >> expected.txt
diff output.txt expected.txt >> compare.log
if [ $? -eq 0 ]
then
    echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
    echo ""
    echo "${BOLD}output:${YLOW}"
    cat output.txt && echo ${DEFAULT}
else
    echo "${RED}❌ FAILED ❌${DEFAULT}"
    echo ""
    echo "${BOLD}expected output:${YLOW}"
    cat expected.txt && echo ${DEFAULT}
    echo ""
    echo "${BOLD}output received:${YLOW}"
    echo ''
    cat output.txt && echo ${DEFAULT}
fi
sleep .3
echo ''
echo "${CYAN}ft_print_comb testing has finished...${DEFAULT}"




rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
cd ../ex00
rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
cd ../ex01
rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
cd ../ex02
rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
cd ../ex03
rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
cd ../ex04
rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
