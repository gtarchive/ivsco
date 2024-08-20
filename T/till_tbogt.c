void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U7 = 1;
    l_U8 = 0;
    l_U9 = 1;
    l_U16 = 0;
    l_U19 = 2;
    l_U20 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_61();
    }
    while (l_U7)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U21 ))
        {
            if ((IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U21 )) AND (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_353() )))
            {
                switch (l_U20)
                {
                    case 0:
                    l_U6 = l_U21;
                    g_U10570 = 0;
                    REGISTER_SCRIPT_WITH_AUDIO( 0 );
                    while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\CASH_REGISTER" )))
                    {
                        WAIT( 0 );
                    }
                    if (DOES_OBJECT_EXIST( l_U6 ))
                    {
                        SET_OBJECT_DYNAMIC( l_U6, 0 );
                        FREEZE_OBJECT_POSITION( l_U6, 1 );
                    }
                    l_U20 = 1;
                    break;
                    case 1:
                    if (NOT l_U8)
                    {
                        if (IS_PLAYER_PLAYING( sub_353() ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U6, 0.00000000, -0.60000000, 0.00000000, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                            if ((LOCATE_CHAR_ON_FOOT_3D( sub_732(), l_U13._fU0, l_U13._fU4, l_U13._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )) AND (sub_815( l_U19, 0 )))
                            {
                                if (sub_1113( l_U19, "TILL_01", 0 ))
                                {
                                    sub_83( l_U19, "TILL_01" );
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U6, 0.00000000, -0.30000000, 0.00000000, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                                    GET_OBJECT_HEADING( l_U6, ref l_U10 );
                                    l_U11 = 0.05000000 * (ABSF( SIN( l_U10 ) ));
                                    l_U12 = 0.05000000 * (ABSF( COS( l_U10 ) ));
                                    if (DOES_OBJECT_EXIST( l_U6 ))
                                    {
                                        SET_OBJECT_DYNAMIC( l_U6, 0 );
                                        SET_OBJECT_RECORDS_COLLISIONS( l_U6, 1 );
                                    }
                                    PLAY_SOUND_FROM_OBJECT( l_U18, "CASH_REGISTER_OPEN", l_U6 );
                                    ALTER_WANTED_LEVEL_NO_DROP( sub_353(), 1 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 9, 200, ref l_U17 );
                                    ADD_SCORE( sub_353(), l_U17 );
                                    g_U10570 = 1;
                                    DISPLAY_CASH( 1 );
                                    sub_1968();
                                    SAY_AMBIENT_SPEECH( sub_732(), "SEARCH_BODY_TAKE_ITEM", 1, 0, 0 );
                                    for ( l_U16 = 0; l_U16 < 5000; l_U16++ )
                                    {
                                        WAIT( 0 );
                                    }
                                    g_U10571 = 0;
                                    DISPLAY_CASH( 0 );
                                    UNREGISTER_SCRIPT_WITH_AUDIO();
                                }
                            }
                            else
                            {
                                sub_83( l_U19, "TILL_01" );
                                l_U9 = 1;
                            }
                        }
                    }
                    break;
                }
            }
            else if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U21 )))
            {
                sub_61();
            }
        }
        else
        {
            sub_61();
        }
    }
    return;
}

void sub_61()
{
    sub_83( l_U19, "TILL_01" );
    g_U10570 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_83(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_304();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_353(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_304()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_353()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_732()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_815(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_353() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_353() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_353() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_911())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_732() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_996())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_911()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_996()
{
    return sub_1007( 0, 0 );
}

int sub_1007(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_1113(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_815( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_353(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1388();
                l_U3 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1388()
{
    return sub_1007( 1, 1 );
}

void sub_1968()
{
    for ( l_U16 = 0; l_U16 < 7000; l_U16++ )
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U6 ))
        {
            SLIDE_OBJECT( l_U6, l_U13._fU0, l_U13._fU4, l_U13._fU8, l_U11, l_U12, 0.00000000, 0 );
            if (HAS_OBJECT_COLLIDED_WITH_ANYTHING( l_U6 ))
            {
                l_U16 = 7000;
            }
        }
    }
    l_U8 = 1;
    if (DOES_OBJECT_EXIST( l_U6 ))
    {
        SET_OBJECT_DYNAMIC( l_U6, 0 );
        FREEZE_OBJECT_POSITION( l_U6, 1 );
    }
    return;
}
