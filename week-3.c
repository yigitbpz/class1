 #include <stdio.h>

/* 
 int main(){
    int age;
    printf("Please give me your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("You are an adult.\n");
    else if (age < 16){
        printf("You can not get moto DL.\n");
    }
    else{
        printf("You are a minor.\n");
    }
    return 0;
 }
 

int main(){
    for(int i = 0; i < 5; i++){
        printf("i = %d\n", i);
    }
    return 0;
}

int main(){
    int a = 5;
    printf("a: %d\n", a);
    int b = a++;
    printf("b: %d\n", b);
    int c = ++a;
    printf("c: %d\n", c);

    return 0;
}

 int main(){
    
    for(int myVar = 0; myVar <= 10; myVar++){
        printf("MyVar is : %d\n", myVar);
        printf("MyVar is : %d\n", myVar);
    }
    return 0;
}


int main(){
    int i = 0;
    while (i < 5){
        printf("i = %d\n", i);
        i++;
    }
    
    return 0;
}
*/

int main(){
    int myVar = 0;
    while(myVar < 10){
        if(myVar % 2 == 1){
        printf("Myvar is : %d\n", myVar);
    }
    myVar++;
    
    }
    return 0;
}