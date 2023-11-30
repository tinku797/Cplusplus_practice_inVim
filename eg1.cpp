#include <stdio.h>

namespace orange
{
int getValue()
{
return 100;
}
}

namespace apple
{
int getValue()
{
return 100;
}
}

int main()
{
printf("%d",orange::getValue());
return 0;
}

	

