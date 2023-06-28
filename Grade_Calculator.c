// Importing Libraries
#include<stdio.h>
#include<string.h>
   
int main(){
    // Declaring Variables
    char check_In[40],subject_01[40],subject_02[40],subject_03[40],subject_04[40],subject_05[40],subject_06[40],subject_07[40],subject_08[40],subject_09[40],subject_10[40];
    int no_subjects,marks_01,marks_02,marks_03,marks_04,marks_05,marks_06,marks_07,marks_08,marks_09,marks_10;
    int total_Marks,total_Marks_01,total_Marks_02,total_Marks_03,total_Marks_04,total_Marks_05,total_Marks_06,total_Marks_07,total_Marks_08,total_Marks_09,total_Marks_10;
    float formula,total;

    // Starting our Program

    printf("WELCOME TO GRADE CALCULATOR !");
    printf("-----------------------------\n");
    printf("\nWant to add subjects(Say :: yes) or (Say :: no)");
    printf("\nEnter Your Answer: ");
    scanf("%s",&check_In);
    if (strcmp(check_In, "yes") == 0){
        printf("How many subjects you want to add: ");
        scanf("%d",&no_subjects);
        if(no_subjects==2){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("\n%s and %s are selected.\n",subject_01,subject_02);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);           
            total = marks_01 + marks_02;
            total_Marks = total_Marks_01 + total_Marks_02;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>88){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
        }
        else if(no_subjects==3){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("\n%s,%s and %s are selected.\n",subject_01,subject_02,subject_03);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);         
            total = marks_01 + marks_02 + marks_03;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==4){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("\n%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);         
            total = marks_01 + marks_02 + marks_03 + marks_04;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==5){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("Subject 5: ");
            scanf("%s",&subject_05);
            printf("\n%s,%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04,subject_05);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);
            printf("\nEnter Marks of %s: ",subject_05);
            scanf("%d",&marks_05);
            printf("Out Of : ");
            scanf("%d",&total_Marks_05);         
            total = marks_01 + marks_02 + marks_03 + marks_04 + marks_05;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04 + total_Marks_05;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==6){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("Subject 5: ");
            scanf("%s",&subject_05);
            printf("Subject 6: ");
            scanf("%s",&subject_06);
            printf("\n%s,%s,%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04,subject_05,subject_06);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);
            printf("\nEnter Marks of %s: ",subject_05);
            scanf("%d",&marks_05);
            printf("Out Of : ");
            scanf("%d",&total_Marks_05);
            printf("\nEnter Marks of %s: ",subject_06);
            scanf("%d",&marks_06);
            printf("Out Of : ");
            scanf("%d",&total_Marks_06);         
            total = marks_01 + marks_02 + marks_03 + marks_04 + marks_05 + marks_06;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04 + total_Marks_05 + total_Marks_06;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==7){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("Subject 5: ");
            scanf("%s",&subject_05);
            printf("Subject 6: ");
            scanf("%s",&subject_06);
            printf("Subject 7: ");
            scanf("%s",&subject_07);
            printf("\n%s,%s,%s,%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04,subject_05,subject_06,subject_07);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);
            printf("\nEnter Marks of %s: ",subject_05);
            scanf("%d",&marks_05);
            printf("Out Of : ");
            scanf("%d",&total_Marks_05);
            printf("\nEnter Marks of %s: ",subject_06);
            scanf("%d",&marks_06);
            printf("Out Of : ");
            scanf("%d",&total_Marks_06);
            printf("\nEnter Marks of %s: ",subject_07);
            scanf("%d",&marks_07);
            printf("Out Of : ");
            scanf("%d",&total_Marks_07);         
            total = marks_01 + marks_02 + marks_03 + marks_04 + marks_05 + marks_06 + marks_07;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04 + total_Marks_05 + total_Marks_06 + total_Marks_07;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==8){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("Subject 5: ");
            scanf("%s",&subject_05);
            printf("Subject 6: ");
            scanf("%s",&subject_06);
            printf("Subject 7: ");
            scanf("%s",&subject_07);
            printf("Subject 8: ");
            scanf("%s",&subject_08);
            printf("\n%s,%s,%s,%s,%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04,subject_05,subject_06,subject_07,subject_08);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);
            printf("\nEnter Marks of %s: ",subject_05);
            scanf("%d",&marks_05);
            printf("Out Of : ");
            scanf("%d",&total_Marks_05);
            printf("\nEnter Marks of %s: ",subject_06);
            scanf("%d",&marks_06);
            printf("Out Of : ");
            scanf("%d",&total_Marks_06);
            printf("\nEnter Marks of %s: ",subject_07);
            scanf("%d",&marks_07);
            printf("Out Of : ");
            scanf("%d",&total_Marks_07);
            printf("\nEnter Marks of %s: ",subject_08);
            scanf("%d",&marks_08);
            printf("Out Of : ");
            scanf("%d",&total_Marks_08);         
            total = marks_01 + marks_02 + marks_03 + marks_04 + marks_05 + marks_06 + marks_07 + marks_08;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04 + total_Marks_05 + total_Marks_06 + total_Marks_07 + total_Marks_08;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==9){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("Subject 5: ");
            scanf("%s",&subject_05);
            printf("Subject 6: ");
            scanf("%s",&subject_06);
            printf("Subject 7: ");
            scanf("%s",&subject_07);
            printf("Subject 8: ");
            scanf("%s",&subject_08);
            printf("Subject 9: ");
            scanf("%s",&subject_09);
            printf("\n%s,%s,%s,%s,%s,%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04,subject_05,subject_06,subject_07,subject_08,subject_09);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);
            printf("\nEnter Marks of %s: ",subject_05);
            scanf("%d",&marks_05);
            printf("Out Of : ");
            scanf("%d",&total_Marks_05);
            printf("\nEnter Marks of %s: ",subject_06);
            scanf("%d",&marks_06);
            printf("Out Of : ");
            scanf("%d",&total_Marks_06);
            printf("\nEnter Marks of %s: ",subject_07);
            scanf("%d",&marks_07);
            printf("Out Of : ");
            scanf("%d",&total_Marks_07);
            printf("\nEnter Marks of %s: ",subject_08);
            scanf("%d",&marks_08);
            printf("Out Of : ");
            scanf("%d",&total_Marks_08);
            printf("\nEnter Marks of %s: ",subject_09);
            scanf("%d",&marks_09);
            printf("Out Of : ");
            scanf("%d",&total_Marks_09);         
            total = marks_01 + marks_02 + marks_03 + marks_04 + marks_05 + marks_06 + marks_07 + marks_08 + marks_09;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04 + total_Marks_05 + total_Marks_06 + total_Marks_07 + total_Marks_08 + total_Marks_09;
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else if(no_subjects==10){
            printf("Subject 1: ");
            scanf("%s",subject_01);
            printf("Subject 2: ");
            scanf("%s",&subject_02);
            printf("Subject 3: ");
            scanf("%s",&subject_03);
            printf("Subject 4: ");
            scanf("%s",&subject_04);
            printf("Subject 5: ");
            scanf("%s",&subject_05);
            printf("Subject 6: ");
            scanf("%s",&subject_06);
            printf("Subject 7: ");
            scanf("%s",&subject_07);
            printf("Subject 8: ");
            scanf("%s",&subject_08);
            printf("Subject 9: ");
            scanf("%s",&subject_09);
            printf("Subject 10: ");
            scanf("%s",&subject_10);
            printf("\n%s,%s,%s,%s,%s,%s,%s,%s,%s and %s are selected.\n",subject_01,subject_02,subject_03,subject_04,subject_05,subject_06,subject_07,subject_08,subject_09,subject_10);
            printf("\nEnter Marks of %s: ",subject_01);
            scanf("%d",&marks_01);
            printf("Out Of : ");
            scanf("%d",&total_Marks_01);
            printf("\nEnter Marks of %s: ",subject_02);
            scanf("%d",&marks_02);
            printf("Out Of : ");
            scanf("%d",&total_Marks_02);  
            printf("\nEnter Marks of %s: ",subject_03);
            scanf("%d",&marks_03);
            printf("Out Of : ");
            scanf("%d",&total_Marks_03);
            printf("\nEnter Marks of %s: ",subject_04);
            scanf("%d",&marks_04);
            printf("Out Of : ");
            scanf("%d",&total_Marks_04);
            printf("\nEnter Marks of %s: ",subject_05);
            scanf("%d",&marks_05);
            printf("Out Of : ");
            scanf("%d",&total_Marks_05);
            printf("\nEnter Marks of %s: ",subject_06);
            scanf("%d",&marks_06);
            printf("Out Of : ");
            scanf("%d",&total_Marks_06);
            printf("\nEnter Marks of %s: ",subject_07);
            scanf("%d",&marks_07);
            printf("Out Of : ");
            scanf("%d",&total_Marks_07);
            printf("\nEnter Marks of %s: ",subject_08);
            scanf("%d",&marks_08);
            printf("Out Of : ");
            scanf("%d",&total_Marks_08);
            printf("\nEnter Marks of %s: ",subject_09);
            scanf("%d",&marks_09);
            printf("Out Of : ");
            scanf("%d",&total_Marks_09);  
            printf("\nEnter Marks of %s: ",subject_10);
            scanf("%d",&marks_10);
            printf("Out Of : ");
            scanf("%d",&total_Marks_10);         
            total = marks_01 + marks_02 + marks_03 + marks_04 + marks_05 + marks_06 + marks_07 + marks_08 + marks_09 + marks_10;
            total_Marks = total_Marks_01 + total_Marks_02 + total_Marks_03 + total_Marks_04 + total_Marks_05 + total_Marks_06 + total_Marks_07 + total_Marks_08 + total_Marks_09 + total_Marks_10; 
            printf("Total: %2.f/%d \n",total,total_Marks);
            formula = (total/total_Marks )*100;
            printf("Percentage: %2.f Percent\n",formula);
            if(formula>87){
                printf("GPA: 4.0");
                printf("\nGrade: A");
            }
            else if(formula<88 && formula>81){
                printf("GPA: 3.5");
                printf("\nGrade: B+");
            }
            else if(formula<81 && formula>74){
                printf("GPA: 3.0");
                printf("\nGrade: B");
            }   
            else if(formula<74 && formula>67){
                printf("GPA: 2.5");
                printf("\nGrade: C+");
            }
            else if(formula<67 && formula>60){
                printf("GPA: 2.0");
                printf("\nGrade: C");
            }
            else{
                printf("GPA: Fail");
                printf("\nGrade: F");
            }
    }
    else{
        printf("You entered nothing...");
    }
    return 0;
    }
}