# Assign 4 Grading Notes

## Problems

1. Should use nlogn to estimate work involved

2. Should use logn to estimate work involved

5. For full credit should avoid exploring entire tree.
    Traversing to left/right when not needed is minor deduction

6. (and 7) Should build using a pre-order traversal to preserve
    random structure. Inorder traversal produces n^2 time and is minor deduction.

## Expected Output

testerA focuses on add/size/depth

testerB focuses on removeLargest. A crash on it is likely due to not handling
removeLargest on root well

testerC focuses on remove at various locations in tree but also depends on copy ctor

Expected output for main program for size 1000:

    //-----------------PART 1-----------------//
    running add 1 times took 0.001476 seconds.
    Size of setA: 999
    Depth of setA: 21 (ish)
    
    //-----------------PART 2-----------------//
    Smallest item in setA: 000.096.247.100
    running getSmallest 1 times took 1.8e-05 seconds.
    
    //-----------------PART 3-----------------//
    255.236.052.087
    255.214.156.050
    255.196.159.125
    255.157.062.180
    254.255.133.172
    254.240.113.149
    254.229.078.158
    254.156.157.042
    254.005.145.229
    253.159.019.236
    Unique addresses in setA2 after removing 10 addresses: 989
    
    //-----------------PART 4-----------------//
    Number of items remaining in setA3: 804
    
    //-----------------PART 5-----------------//
    
    running getRange 1 times took 0.000149 seconds.
    Number of items in the vector from setA containing IP addresses within the given bounds: 40
    First 5 IP Addresses in rangeVector: 
    100.005.254.175
    100.012.072.020
    100.032.103.196
    100.084.192.140
    100.105.018.217
    
    //-----------------PART 6-----------------//
    
    running intersectionWith 1 times took 0.000597 seconds.
    Size of setAIB: 4
    Smallest address in set AIB: 013.250.011.003
    
    //-----------------PART 7-----------------//
    Size of setAUB: 1993
    Smallest address in set AUB: 000.096.247.100