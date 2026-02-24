#!/bin/bash
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


#testing ex0n
echo "${CYAN}Starting to test ex0n/{file_name}${DEFAULT}"
echo ""
sleep .3

# cd ex00 #if first
# cd ../ex0n #others
cat {file_name}.c >> test.c
cat ~/c-piscine-42/TESTERS/c00/test_{file_name}.c >> test.c
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
cat ~/c-piscine-42/TESTERS/c00/test_{file_name}.txt >> expected.txt
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
echo "${CYAN}{file_name} testing has finished...${DEFAULT}"
rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log