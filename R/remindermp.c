void main()
{
    int iVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 3;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U4 = iVar2 + 3600000;
    while (true)
    {
        GET_GAME_TIMER( ref iVar2 );
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Billy2" )) > 0)
        {
            sub_107();
        }
        if (g_U20)
        {
            if (l_U3 == 0)
            {
                l_U2++;
                if (l_U2 == 1)
                {
                    l_U3 = iVar2 + 300000;
                    l_U4 = iVar2 + 10800000;
                }
                else
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
            else if (l_U3 < iVar2)
            {
                l_U3 = 0;
                g_U20 = 0;
            }
        }
        else if (l_U4 < iVar2)
        {
            sub_282();
            GET_GAME_TIMER( ref iVar2 );
            sub_107();
        }
        WAIT( 30000 );
    }
    return;
}

void sub_107()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U2 == 0)
    {
        l_U4 = iVar2 + 3600000;
    }
    else
    {
        l_U4 = iVar2 + 10800000;
    }
    return;
}

void sub_282()
{
    boolean bVar2;

    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (g_U20)
        {
            return;
        }
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_331() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_374() )))
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                        {
                            if (NOT IS_MINIGAME_IN_PROGRESS())
                            {
                                if (NOT sub_476())
                                {
                                    if (sub_519( l_U5 ))
                                    {
                                        PRINT_HELP( "B2_STAM" );
                                        bVar2 = false;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    SETTIMERA( 0 );
    while (TIMERA() < 6000)
    {
        if ((g_U20) || (sub_476()))
        {
            sub_759( l_U5 );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B2_STAM" ))
            {
                CLEAR_HELP();
            }
            return;
        }
        WAIT( 0 );
    }
    sub_759( l_U5 );
    while (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B2_STAM" ))
    {
        WAIT( 0 );
        if (g_U20)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B2_STAM" ))
            {
                CLEAR_HELP();
            }
            return;
        }
    }
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (g_U20)
        {
            return;
        }
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_331() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_374() )))
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                        {
                            if (NOT IS_MINIGAME_IN_PROGRESS())
                            {
                                if (NOT sub_476())
                                {
                                    if (sub_519( l_U5 ))
                                    {
                                        PRINT_HELP( "B2_INIM" );
                                        bVar2 = false;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    SETTIMERA( 0 );
    while (TIMERA() < 6000)
    {
        if ((g_U20) || (sub_476()))
        {
            sub_759( l_U5 );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B2_INIM" ))
            {
                CLEAR_HELP();
            }
            return;
        }
        WAIT( 0 );
    }
    sub_759( l_U5 );
    while (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B2_INIM" ))
    {
        WAIT( 0 );
        if (g_U20)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B2_INIM" ))
            {
                CLEAR_HELP();
            }
            return;
        }
    }
    return;
}

void sub_331()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_374()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_476()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_519(int iParam0)
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

void sub_759(unknown uParam0)
{
    if (NOT (sub_770( uParam0 )))
    {
        return;
    }
    g_U38676 = 0;
    g_U38677 = 6;
    g_U38678 = 0;
    g_U38679 = 6;
    return;
}

boolean sub_770(int iParam0)
{
    return iParam0 == g_U38677;
}
