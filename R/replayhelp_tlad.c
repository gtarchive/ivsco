void main()
{
    l_U0 = 4;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (NOT (sub_23( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "REPLAY_1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_251( l_U0 )))
    {
        WAIT( 0 );
        if ((IS_BIT_SET( g_U10959._fU0, 4 )) || (g_U12303))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_1" ))
            {
                CLEAR_HELP();
            }
            sub_351( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_351( l_U0 );
    while (NOT (sub_23( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "REPLAY_2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_251( l_U0 )))
    {
        WAIT( 0 );
        if ((IS_BIT_SET( g_U10959._fU0, 4 )) || (g_U12303))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_2" ))
            {
                CLEAR_HELP();
            }
            sub_351( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_351( l_U0 );
    while (NOT (sub_23( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "REPLAY_3" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_251( l_U0 )))
    {
        WAIT( 0 );
        if ((IS_BIT_SET( g_U10959._fU0, 4 )) || (g_U12303))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_3" ))
            {
                CLEAR_HELP();
            }
            sub_351( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_3" ))
    {
        CLEAR_HELP();
    }
    sub_351( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_23(int iParam0)
{
    int iVar3;

    iVar3 = g_U38670[iParam0];
    if (g_U38677 == iParam0)
    {
        return 1;
    }
    if (g_U38679 == iParam0)
    {
        if (iVar3 <= g_U38676)
        {
            return 0;
        }
        g_U38676 = g_U38678;
        g_U38677 = g_U38679;
        g_U38678 = 0;
        g_U38679 = 6;
        return 1;
    }
    if (iVar3 <= g_U38678)
    {
        return 0;
    }
    g_U38678 = iVar3;
    g_U38679 = iParam0;
    return 0;
}

boolean sub_251(int iParam0)
{
    return iParam0 == g_U38677;
}

void sub_351(unknown uParam0)
{
    if (NOT (sub_251( uParam0 )))
    {
        return;
    }
    g_U38676 = 0;
    g_U38677 = 6;
    g_U38678 = 0;
    g_U38679 = 6;
    return;
}
