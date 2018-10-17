package com.company;

public class AdjecncyDup {
    public static void removeDup(int [] arr) {
        int i = 0;
        int top = -1;
        int index;
        int[] st = new int [arr.length];
        while(i < arr.length ) {
            if(top == -1 || st[top] != arr[i]) {
                st[++top] = arr[i];
                i++;
            }
            else {
                while(i < arr.length && st[top] == arr[i]) {
                    i++;
                }
                top--;
//                System.out.println("Array is "+top);
            }
        }
//        System.out.println("Array is "+top);
        for (int j = 0 ; j <= top; j++) {
            System.out.println("Array is "+st[j]);
        }

    }
    public static void main(String args[]) {
        System.out.println("siddd");
        int [] arr = {1,4,2,2,2,5,0, 6,6 ,0, 9};

        removeDup(arr);

//        int index = removeDup(arr);
//
//        for (int j =0 ; j < index; j++) {
//            System.out.println("Array is "+arr[j]);
//        }

    }
}
