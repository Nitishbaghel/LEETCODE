int myAtoi(char * s){
    int_least64_t num = 0;
    bool neg = false;
    
    for (; isspace(*s) ; ++s);
    if (!isdigit(*s))
    {
        if (*s == '-') neg = true;
        else if (*s != '+') return num;
        ++s;
    }
    
    for (; isdigit(*s) ; ++s)
    {
        num = (num * 10) + (*s - '0');
        if (num > INT_MAX) return (neg) ? INT_MIN : INT_MAX;
    }
    
    return (neg) ? -num : num;
}