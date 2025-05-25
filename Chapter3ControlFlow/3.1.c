/*
ur binary search makes two tests inside the loop, when one would suffice (at 
the price of more tests outside.) Write a version with only one test inside the loop and 
measure the difference in run-time.  

*/

#include <stdio.h>
#include <stdlib.h>

int binarysearch(int target, int array[], int n) {
    int left = 0;
    int right = (n - 1);

    while(left <= right) {
        int middle = (left+right)/2;

        if (target < array[middle])
            right = middle -1; 
        else 
            left = middle +1;
    }  

     if (left > 0 && array[left - 1] == target)
        return left - 1;
}


  



int main() {
    int x = 100; //number to search for
    int array[] ={100, 107, 114, 121, 128, 135, 142, 149, 156, 163,
    170, 177, 184, 191, 198, 205, 212, 219, 226, 233,
    240, 247, 254, 261, 268, 275, 282, 289, 296, 303,
    310, 317, 324, 331, 338, 345, 352, 359, 366, 373,
    380, 387, 394, 401, 408, 415, 422, 429, 436, 443,
    450, 457, 464, 471, 478, 485, 492, 499, 506, 513,
    520, 527, 534, 541, 548, 555, 562, 569, 576, 583,
    590, 597, 604, 611, 618, 625, 632, 639, 646, 653,
    660, 667, 674, 681, 688, 695, 702, 709, 716, 723,
    730, 737, 744, 751, 758, 765, 772, 779, 786, 793,
    800, 807, 814, 821, 828, 835, 842, 849, 856, 863,
    870, 877, 884, 891, 898, 905, 912, 919, 926, 933,
    940, 947, 954, 961, 968, 975, 982, 989, 996, 1003,
    1010, 1017, 1024, 1031, 1038, 1045, 1052, 1059, 1066, 1073,
    1080, 1087, 1094, 1101, 1108, 1115, 1122, 1129, 1136, 1143,
    1150, 1157, 1164, 1171, 1178, 1185, 1192, 1199, 1206, 1213,
    1220, 1227, 1234, 1241, 1248, 1255, 1262, 1269, 1276, 1283,
    1290, 1297, 1304, 1311, 1318, 1325, 1332, 1339, 1346, 1353,
    1360, 1367, 1374, 1381, 1388, 1395, 1402, 1409, 1416, 1423,
    1430, 1437, 1444, 1451, 1458, 1465, 1472, 1479, 1486, 1493};


    int n = sizeof(array)/sizeof(array[0]); /// 12
    
    if(binarysearch(x, array, n) == -1) {
        printf("Value not found in array!");
    } else {
        printf("The index of value 20 is found at array[%d]", binarysearch(x, array, n));
    }

    
    return 0;
}