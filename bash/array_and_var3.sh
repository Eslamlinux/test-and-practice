#!/bin/bash

COST_PINEAPPLE=50
COST_BANANA=4
COST_WATERMELON=23
COST_BASKET=1

TOTAL=$((COST_PINEAPPLE + (COST_BANANA * 2) + (COST_WATERMELON * 3) + COST_BASKET))
echo "Total Cost is $TOTAL cents"

echo "st test: $dd "
echo "string length: ${#string}"
#examp  >>     ${#"hello"} returns 5
#Find Character Position	$(expr index "$string" "$char")	Finds the position of a character in a string (1-indexed)	$(expr index "abcdef" "c") returns 3
#Extract Substring	${string:start:length}	Extracts a portion of a string (0-indexed)	${"hello":1:3} returns ell
#Replace First Occurrence	${string/pattern/replacement}	Replaces the first occurrence of a pattern	${"hello"/l/L} returns heLlo
#Replace All Occurrences	${string//pattern/replacement}	Replaces all occurrences of a pattern	${"hello"//l/L} returns heLLo
#Replace at Beginning	${string/#pattern/replacement}	Replaces pattern only if at beginning of string	${"hello"/#he/HE} returns HEllo
#Replace at End	${string/%pattern/replacement}	Replaces pattern only if at end of string	${"hello"/%lo/LO} returns helLO
