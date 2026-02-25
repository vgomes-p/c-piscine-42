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
echo "${YLOW}============================ MADE BY VGOMES_P =============================${DEFAULT}"
sleep 1
echo "${PINK}RUNNING THE MOTHER OF ALL: NORMINETTE =====================================${DEFAULT}"
sleep 1
norminette -R CheckForForbiddenSourceHeader . > norminette.log 2>&1
if grep -q "Error" norminette.log
then
    echo "❌" > normout.log
    echo "${RED}❌ NORMINETTE ERRORS FOUND ❌${DEFAULT}"
    echo "${YLOW}"
    cat norminette.log && echo "${DEFAULT}"
else
    echo "✅" > normout.log
    echo "${GREEN}✅ NORMINETTE ✅${DEFAULT}"
fi
rm -rfd norminette.log

#init_breaker
    sleep .3
    echo ''
    echo "${PINK}STARTING TESTS ============================================================${DEFAULT}"
    echo ''
    sleep .3
#end_breaker


#testing ex00
if [ -d ex00 ]
then
    echo "${CYAN}TESTING: ex00/ft_putchar ==================================================${DEFAULT}"
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
        echo "✅" >> ../ex00.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex00.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex00.log
fi


#testing ex01
if [ -d ../ex01 ]
then
    echo ''
    echo "${CYAN}TESTING: ex01/ft_print_alphabet ===========================================${DEFAULT}"
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
        echo "✅" >> ../ex01.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex01.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex02.log
fi


#testing ex02
if [ -d ../ex02 ]
then
    echo ''
    echo "${CYAN}TESTING: ex02/ft_print_reverse_alphabet ===================================${DEFAULT}"
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
        echo "✅" >> ../ex02.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex02.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex02.log
fi


#testing ex03
if [ -d ../ex03 ]
then
    echo ''
    echo "${CYAN}TESTING: ex03/ft_print_numbers ============================================${DEFAULT}"
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
        echo "✅" >> ../ex03.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex03.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex03.log
fi


#testing ex04
if [ -d ../ex04 ]
then
    echo ''
    echo "${CYAN}TESTING: ex04/ft_is_negative ==============================================${DEFAULT}"
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
        echo "✅" >> ../ex04.log
    else
        echo "❌" >> ../ex04.log
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
else
    echo "👻" >> ex04.log
fi


#testing ex05
if [ -d ../ex05 ]
then
    echo ''
    echo "${CYAN}TESTING: ex05/ft_print_comb ===============================================${DEFAULT}"
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
        echo "✅" >> ../ex05.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex05.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex05.log
fi


#testing ex06
if [ -d ../ex06 ]
then
    echo ''
    echo "${CYAN}TESTING: ex06/ft_print_comb2 ==============================================${DEFAULT}"
    echo ""
    sleep .3

    cd ../ex06
    cat ft_print_comb2.c >> test.c
    cat ~/c-piscine-42/TESTERS/c00/test_ft_print_comb2.c >> test.c
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
    cat ~/c-piscine-42/TESTERS/c00/test_ft_print_comb2.txt >> expected.txt
    diff output.txt expected.txt >> compare.log
    if [ $? -eq 0 ]
    then
        echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
        echo "✅" >> ../ex06.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex06.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex06.log
fi


#testing ex07
if [ -d ../ex07 ]
then
    echo ''
    echo "${CYAN}TESTING: ex07/ft_putnbr ===================================================${DEFAULT}"
    echo ""
    sleep .3

    cd ../ex07
    cat ft_putnbr.c >> test.c
    cat ~/c-piscine-42/TESTERS/c00/test_ft_putnbr.c >> test.c
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
    cat ~/c-piscine-42/TESTERS/c00/test_ft_putnbr.txt >> expected.txt
    diff output.txt expected.txt >> compare.log
    if [ $? -eq 0 ]
    then
        echo "${GREEN}✅ TEST SUCCEED ✅${DEFAULT}"
        echo "✅" >> ../ex07.log
    else
        echo "${RED}❌ FAILED ❌${DEFAULT}"
        echo "❌" >> ../ex07.log
        echo ""
        echo "${BOLD}expected output:${YLOW}"
        cat expected.txt && echo ${DEFAULT}
        echo ""
        echo "${BOLD}output received:${YLOW}"
        echo ''
        cat output.txt && echo ${DEFAULT}
    fi
    sleep .3
else
    echo "👻" >> ex07.log
fi

cd ..
if [ -d ex00 ]
then
    cd ex00
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
else
    echo "${YLOW}#================================== NOTE ==================================#${DEFAULT}"
    echo "${YLOW}# You seem to be out of the project root dir. Try to call it in the root   #${DEFAULT}"
    echo "${YLOW}#==========================================================================#${DEFAULT}"
fi

if [ -d ../ex01 ]
then
    cd ../ex01
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi
if [ -d ../ex02 ]
then
    cd ../ex02
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi
if [ -d ../ex03 ]
then
    cd ../ex03
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi
if [ -d ../ex04 ]
then
    cd ../ex04
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi
if [ -d ../ex05 ]
then
    cd ../ex05
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi
if [ -d ../ex06 ]
then
    cd ../ex06
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi
if [ -d ../ex07 ]
then
    cd ../ex07
    rm -rfd test.c a.out output.txt expected.txt compile_error.log compare.log
fi


#init_breaker
    sleep .3
    echo ''
    echo "${PINK}FINAL RETURNED ============================================================${DEFAULT}"
#end_breaker

cd ..
echo -n "${CYAN}Norminette: ${DEFAULT}" && cat normout.log
echo -n "${CYAN}ex00: " && cat ex00.log | tr '\n' ' ' && echo -n "|"
echo -n "${CYAN} ex01: " && cat ex01.log | tr '\n' ' ' && echo -n "|"
echo -n "${CYAN} ex02: " && cat ex02.log | tr '\n' ' ' && echo -n "|"
echo -n "${CYAN} ex03: " && cat ex03.log
echo -n "${CYAN}ex04: " && cat ex04.log | tr '\n' ' ' && echo -n "|"
echo -n "${CYAN} ex05: " && cat ex05.log | tr '\n' ' ' && echo -n "|"
echo -n "${CYAN} ex06: " && cat ex06.log | tr '\n' ' ' && echo -n "|"
echo -n "${CYAN} ex07: ${DEFAULT}" && cat ex07.log

echo ""
echo "${PINK}If all ran ${GREEN}✅ green ✅${PINK}, then Good luck with the Mother of all: Moulinette ${DEFAULT}"

#init_breaker
    echo "${PINK}============================================================================${DEFAULT}"
#end_breaker
rm -rf ex*.log normout.log
echo "${YLOW}============================== TEST FINISHED ===============================${DEFAULT}"
