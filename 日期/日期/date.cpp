#include"date.h"

static uint getMonthDay(int y, uint m)
{
	if (m >= 12 || m == 0)
	{
		return 0;
	}
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}
	else if (m == 2)
	{
		return 28 + (y % 400 == 0) || (y % 4 == 0 && y % 100));

	}
	else
	{
		return 31;
	}
}