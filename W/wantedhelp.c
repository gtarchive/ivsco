void main()
{
    boolean bVar2;

    l_U0 = 6;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_20();
    PRINT_HELP( "WANTED1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_469( l_U0 )))
    {
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WANTED1" ))
    {
        CLEAR_HELP();
    }
    sub_547( l_U0 );
    sub_20();
    PRINT_HELP( "WANTED2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_469( l_U0 )))
    {
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WANTED2" ))
    {
        CLEAR_HELP();
    }
    sub_547( l_U0 );
    sub_20();
    PRINT_HELP( "WANTED3" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_469( l_U0 )))
    {
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WANTED3" ))
    {
        CLEAR_HELP();
    }
    sub_547( l_U0 );
    sub_20();
    PRINT_HELP( "WANTED4" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_469( l_U0 )))
    {
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WANTED4" ))
    {
        CLEAR_HELP();
    }
    sub_547( l_U0 );
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        sub_20();
        if (PLAYER_HAS_GREYED_OUT_STARS( sub_56() ))
        {
            bVar2 = false;
        }
    }
    PRINT_HELP( "GREYSTARS" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_469( l_U0 )))
    {
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GREYSTARS" ))
    {
        CLEAR_HELP();
    }
    sub_547( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_20()
{
    boolean bVar2;

    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (sub_47())
        {
            bVar2 = false;
        }
        if (bVar2)
        {
            sub_370();
        }
    }
    return;
}

int sub_47()
{
    if (NOT (IS_PLAYER_PLAYING( sub_56() )))
    {
        return 0;
    }
    if (((IS_WANTED_LEVEL_GREATER( sub_56(), 0 )) AND (NOT g_U10978)) AND (NOT sub_124()))
    {
        if (sub_168( l_U0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_56()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_124()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_168(int iParam0)
{
    int iVar3;

    iVar3 = g_U64522[iParam0];
    if (g_U64539 == iParam0)
    {
        return 1;
    }
    if (g_U64541 == iParam0)
    {
        if (iVar3 <= g_U64538)
        {
            return 0;
        }
        g_U64538 = g_U64540;
        g_U64539 = g_U64541;
        g_U64540 = 0;
        g_U64541 = 16;
        return 1;
    }
    if (iVar3 <= g_U64540)
    {
        return 0;
    }
    g_U64540 = iVar3;
    g_U64541 = iParam0;
    return 0;
}

void sub_370()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman5" )) > 0)
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

boolean sub_469(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_547(unknown uParam0)
{
    if (NOT (sub_469( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}
