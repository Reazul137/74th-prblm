#include<stdio.h>
float rec_width;
float rec_height;
float rec_perimeter;
char line_text[50];

int main()
{
    printf("Input the height of the Rectangle : ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &rec_height);

    printf("Input the width of the Rectangle : ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &rec_width);

    rec_perimeter = 2.0 * (rec_height + rec_width);

    printf("Perimeter of the Rectangle is : %f\n", rec_perimeter);

    return 0;
}
