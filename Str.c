#include<stdio.h>

struct fish{
const char *name;
int age;
int weight;
};
typedef struct cell{
const char *nameof;
const char *processor;
int size;
}phone;

int main()
{
struct fish f={"Hawa",19,100};
phone p={"Samsung","ARM",15};
return 0;
}
