{
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