void main()
{
    boolean bVar2;

    l_U0 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (NOT g_U15728[11])
    {
        WAIT( 0 );
    }
    WAIT( 6000 );
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_86() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_129() )))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                            {
                                if (IS_EPISODIC_DISC_BUILD())
                                {
                                    sub_248();
                                }
                                else
                                {
                                    PRINT_HELP( "SPECABIL" );
                                }
                                bVar2 = false;
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 6000 );
    sub_514( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_86()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_129()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_248()
{
    string[6] sVar2;
    int iVar9;

    PRINTSTRING( "\n [rw][script] P_RUNEFLC_TUT is called. \n" );
    array(ref sVar2, 6);
    sVar2[0] = "SPECABIL";
    sVar2[1] = "E2GETPH";
    sVar2[2] = "E2MENUPH";
    sVar2[3] = "E2NAVPH";
    sVar2[4] = "E2SELPH";
    sVar2[5] = "E2ENDPH";
    iVar9 = -1;
    while (iVar9 < 5)
    {
        iVar9++;
        CLEAR_HELP();
        PRINT_HELP( sVar2[iVar9] );
        WAIT( 3700 );
    }
    return;
}

void sub_514(unknown uParam0)
{
    if (NOT (sub_525( uParam0 )))
    {
        return;
    }
    g_U38676 = 0;
    g_U38677 = 6;
    g_U38678 = 0;
    g_U38679 = 6;
    return;
}

boolean sub_525(int iParam0)
{
    return iParam0 == g_U38677;
}
