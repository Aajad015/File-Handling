#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;{
    FILE *f;
    int emp_id;
    char emp_name[20];
    char  emp_mob[12];
    char emp_address[60];
    char emp_desig[30];
     f = fopen("kali.txt", "w+");
    if(f==NULL)

    {
        printf("finl not found\n");
        return;
    }
    // Emp id
    printf("Enter the emp id\n");
    scanf("%d",&emp_id);
    fprintf(f,"Id %d",emp_id);
    // Name 
    printf("Enter the Emp Name\n");
    scanf("%s",&emp_name);
    fprintf(f,"Name %s\n",emp_name);
    // Mobile no
    printf("Enter the Mob no\n");
    scanf("%c",&emp_mob);
    fprintf(f," Mobile %c\n",emp_mob);
    // Address 
    printf("Enter the Emp Address\n");
    scanf("%s",&emp_address);
    fprintf(f,"Address %s\n",emp_address);
    // Designation
    printf("Enter the Emp Designation\n");
    scanf("%s",&emp_desig);
    fprintf(f," Designation %s\n",emp_desig);
    fclose(f);
}
    int emp_id;
    char emp_mob[12];
    char emp_name[20];
    char emp_address[100];
    char emp_desig[30];
    f=fopen("kali.txt","w+");
    if(f==NULL)
    {
        printf("finl not found");
    }
    printf("Enter the emp id:");
    scanf("%d",&emp_id);
    fprintf(f,"%d",emp_id);
    printf("Enter the Mob no\n:");
    scanf("%c",&emp_mob);
    fprintf(f,"%c\n",emp_mob);
    printf("Enter the Emp Name:");
    scanf("%s",&emp_name);
    fprintf(f,"%s\n",emp_name);
    printf("Enter the Emp Address\n:");
    scanf("%c",&emp_address);
    fprintf(f,"%c\n",emp_address);
    printf("Enter the Emp Desig");
    scanf("%c",&emp_desig);
    fprintf(f,"%c",emp_desig);
    fclose(f);
    return 0;
}
