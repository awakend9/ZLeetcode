int divide(int dividend, int divisor)
{
    long result = 0;
    if (dividend == 0) return result;
    else if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
    {
        for(int i = 0;;i++)
        {
            dividend += divisor;
            if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
            {
                result = 0 - i;
                break;
            }
            else if(dividend == 0)
            {
                result = -1 - i;
                break;
            }
            else continue;
        }
    }
    else if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
    {
        for(int i = 0;;i++)
        {
            dividend -= divisor;
            if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
            {
                result = i;
                break;
            }
            else if(dividend == 0)
            {
                result = i + 1;
                break;
            }
            else continue;
        }
    }

    if(result < -2147483648) result = -2147483648;
    else if(result > 2147483647) result = 2147483647;
    return result;
}
