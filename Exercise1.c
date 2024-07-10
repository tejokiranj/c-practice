#include<stdio.h>

int main() {
    //areaofrectangle();
    //areaoftriangle();
    //temperatureconversion ();
    operationofnumbers() ;
    return 0;
}

void areaofrectangle () {
 float area;
    float length;
    float breadth;
    int a;
    printf("FIND AREA AND PERIMETEROF RECTANGLE : \n");
    printf("ENTER THE GIVEN PARAMETERS TO FIND AREA : \n");
    printf("LENGTH : ");
    scanf("%f",&length);
    printf("BREADTH : ");
    scanf("%f",&breadth);
    printf("AREA : %.3f\n",length * breadth);
    printf("PERIMETER : %.3f\n",2*(length + breadth));
}

void areaoftriangle () {
    float breadth;
    float height;
    printf("FIND AREA AND PERIMETEROF TRIANGLE : \n");
    printf("ENTER THE GIVEN PARAMETERS TO FIND AREA : \n");
    printf("BREADTH : ");
    scanf("%f",&breadth);
    printf("HEIGHT : ");
    scanf("%f",&height);
    printf("AREA : %.3f\n",(0.5) * breadth * height);
}

void temperatureconversion () {
    float c;
    float f;
    printf("FIND TEMPERATURE CONVERSION FROM FARENHEIT AND CELSIUS : \n");
    printf("ENTER THE GIVEN PARAMETER TO FIND TEMPERATURE : \n");
    printf("FARENHIET : ");
    scanf("%f",&f);
    c = ((f-32)*5)/9;
    printf("TEMPERATURE IN CELCIUS IS : %.3f\n",c);

}

void operationofnumbers () {
    int number1;
    int number2;
    char sign;

    printf("enter number 1 : ");
    scanf("%d",&number1);
    printf("enter number 2 : ");
    scanf("%d",&number2);
    printf("enter operation sign : ");
    scanf(" %c",&sign);
    if (sign == '+') {
        printf("%d",number1+number2);
    }else if (sign == '-') {
        printf("%d",number1-number2);
    }else if (sign == '*') {
        printf("%d",number1*number2);
    }else if (sign == '/') {
        float f = number1/number2;
        printf("%f",f);
    }
}
