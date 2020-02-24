# first-non-repeating-character
Amazon coding interview question finding first non repeating character in a character array 

For example we have {aaafbbbbbcccddddf}
we need to find fist non repeating in this case it is "f"
so the possible cases are 
if {faaabbbcccddd} this is the array of lenth "n"

# case 1:
faaabbbcccddd
non repeating char is in 0th index 
# case 2:
aaabbbfcccddd
non repeating char is in the middle of an array  
# case 3:
aaabbbcccdddg
non repeating char is in (n-1)th index 

so we need to check these three cases in the loop 
start from 1 to n-2 

                 i==1 && str[i-1]!=str[i] 
             || str[i-1]!=str[i] && str[i]!=str[i+1] 
             || str[i]!=str[i+1] && i==n-2

# Complexity
Best case 
O(1)  ,
Avg  case
O((n-1)/2) ,
Worst case
O(n-2)
