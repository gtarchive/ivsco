void main()
{
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        if (sub_22())
        {
            sub_114( 40 );
            sub_114( 41 );
        }
        else
        {
            sub_235( 40 );
            sub_235( 41 );
        }
        WAIT( 0 );
    }
    return;
}

int sub_22()
{
    int I;

    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if (g_U18635[I]._fU0)
        {
            if (g_U18635[I]._fU20)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_114(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U11583[uParam0]._fU32 ))
    {
        CHANGE_BLIP_DISPLAY( g_U11583[uParam0]._fU32, 2 );
    }
    if (DOES_BLIP_EXIST( g_U12169[uParam0]._fU4 ))
    {
        CHANGE_BLIP_DISPLAY( g_U12169[uParam0]._fU4, 2 );
    }
    return;
}

void sub_235(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U11583[uParam0]._fU32 ))
    {
        CHANGE_BLIP_DISPLAY( g_U11583[uParam0]._fU32, 0 );
    }
    if (DOES_BLIP_EXIST( g_U12169[uParam0]._fU4 ))
    {
        CHANGE_BLIP_DISPLAY( g_U12169[uParam0]._fU4, 0 );
    }
    return;
}
