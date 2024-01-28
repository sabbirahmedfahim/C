/*Build a program to calculate your BMI and
 provide a message about your fitness level. ⭐*/
 #include <stdio.h>
 int main() {
    float BMI;
    printf("May I know your BMI?: ");
    scanf("%f", &BMI);
    if (BMI<=18.5)
    {
        printf("You are Underweight");
    }
    else if (BMI>=18.5 && BMI<=24.9)
    {
        printf("CongRats! Your BMI is Normal");
    }
    else if (BMI>=25 && BMI<=29.9)
    {
        printf("You are Overweight. Be careful");
    }
    else
    {
        printf("opPs! AreYouOkey? U're an Obese");
    }
    
    return 0;
    
    
 }