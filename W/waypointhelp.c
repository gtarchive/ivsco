void main()
{
    unknown uVar2;
    boolean bVar3;

    l_U0 = 9;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    bVar3 = true;
    while (bVar3)
    {
        WAIT( 1000 );
        if (NOT g_U10978)
        {
            if (IS_PLAYER_PLAYING( sub_51() ))
            {
                if ((NOT (IS_THREAD_ACTIVE( g_U812 ))) AND (NOT sub_107()))
                {
                    if (NOT (IS_CHAR_DEAD( sub_148() )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_148() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_148(), ref uVar2 );
                            if (NOT (IS_CAR_DEAD( uVar2 )))
                            {
                                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_260())
                                    {
                                        if (sub_314( l_U0 ))
                                        {
                                            PRINT_HELP( "WAYPNT1" );
                                            bVar3 = false;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    while ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WAYPNT1" )) AND (sub_533( l_U0 )))
    {
        WAIT( 0 );
    }
    sub_582( l_U0 );
    bVar3 = true;
    while (bVar3)
    {
        WAIT( 1000 );
        if (NOT g_U10978)
        {
            if (IS_PLAYER_PLAYING( sub_51() ))
            {
                if ((NOT (IS_THREAD_ACTIVE( g_U812 ))) AND (NOT sub_107()))
                {
                    if (NOT (IS_CHAR_DEAD( sub_148() )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_148() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_148(), ref uVar2 );
                            if (NOT (IS_CAR_DEAD( uVar2 )))
                            {
                                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_260())
                                    {
                                        if (sub_314( l_U0 ))
                                        {
                                            PRINT_HELP( "WAYPNT2" );
                                            bVar3 = false;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    while ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WAYPNT2" )) AND (sub_533( l_U0 )))
    {
        WAIT( 0 );
    }
    sub_582( l_U0 );
    g_U15654[74] = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_51()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_107()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_148()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_260()
{
    if (NOT g_U15654[74])
    {
        return 0;
    }
    TERMINATE_THIS_SCRIPT();
    return 1;
}

int sub_314(int iParam0)
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

boolean sub_533(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_582(unknown uParam0)
{
    if (NOT (sub_533( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}
