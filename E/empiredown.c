void main()
{
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U14 = 0;
    l_U30 = {65270, 65435, 335};
    l_U33 = 180.00000000;
    l_U34 = {-271.52640000, -88.08870000, 336.44540000};
    l_U37 = 270.00000000;
    l_U38 = {-271.86000000, -112.76730000, 336.44540000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_119();
    }
    sub_577( l_U41 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_413() ))
        {
            switch (l_U4)
            {
                case 0:
                DRAW_COLOURED_CYLINDER( l_U34._fU0, l_U34._fU4, l_U34._fU8 - 2, 0.80000000, 0.20000000, 0, 132, 202, 255 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U34._fU0, l_U34._fU4, l_U34._fU8, 0.80000000, 0.80000000, 2.00000000, 0 ))
                {
                    if (IS_CHAR_ON_FOOT( sub_751() ))
                    {
                        if (sub_860( 2, 0 ))
                        {
                            if (sub_1148( 2, l_U29, 0 ))
                            {
                                sub_143( 2, "empire_down" );
                                l_U4 = 3;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U38._fU0, l_U38._fU4, l_U38._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                        {
                            sub_143( 2, "empire_down" );
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U38._fU0, l_U38._fU4, l_U38._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                    {
                        sub_143( 2, "empire_down" );
                    }
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U38._fU0, l_U38._fU4, l_U38._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                {
                    sub_143( 2, "empire_down" );
                }
                DRAW_COLOURED_CYLINDER( l_U38._fU0, l_U38._fU4, l_U38._fU8 - 2, 0.80000000, 0.20000000, 0, 132, 202, 255 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U38._fU0, l_U38._fU4, l_U38._fU8, 0.80000000, 0.80000000, 2.00000000, 0 ))
                {
                    if (IS_CHAR_ON_FOOT( sub_751() ))
                    {
                        if (sub_860( 2, 0 ))
                        {
                            if (sub_1148( 2, l_U29, 0 ))
                            {
                                sub_143( 2, "empire_down" );
                                l_U4 = 3;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U34._fU0, l_U34._fU4, l_U34._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                        {
                            sub_143( 2, "empire_down" );
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U34._fU0, l_U34._fU4, l_U34._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                    {
                        sub_143( 2, "empire_down" );
                    }
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_751(), l_U34._fU0, l_U34._fU4, l_U34._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                {
                    sub_143( 2, "empire_down" );
                }
                break;
                case 3:
                sub_2439();
                break;
            }
        }
        else
        {
            sub_119();
        }
    }
    return;
}

void sub_119()
{
    sub_143( 2, "empire_down" );
    if (l_U6 == 1)
    {
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 2000 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_143(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_364();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_413(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_364()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_413()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U24._fU0 = -222.05310000;
    l_U24._fU4 = -106.14880000;
    l_U24._fU8 = 13.54540000;
    l_U29 = "empire_down";
    return;
}

void sub_751()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_860(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_413() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_413() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_413() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_956())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_751() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1041())
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

int sub_956()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1041()
{
    return sub_1052( 0, 0 );
}

int sub_1052(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_1148(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_860( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_413(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1423();
                l_U1 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1423()
{
    return sub_1052( 1, 1 );
}

void sub_2439()
{
    switch (l_U6)
    {
        case 0:
        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 1 );
        }
        DO_SCREEN_FADE_OUT( 2000 );
        l_U6 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            SET_CHAR_COORDINATES( sub_751(), l_U24._fU0, l_U24._fU4, l_U24._fU8 );
            sub_143( 2, "empire_down" );
            SET_CHAR_HEADING( sub_751(), l_U37 );
            LOAD_SCENE( l_U24._fU0, l_U24._fU4, l_U24._fU8 );
            SET_CAM_BEHIND_PED( sub_751() );
            GET_GAME_TIMER( ref l_U11 );
            l_U6 = 2;
        }
        break;
        case 2:
        DO_SCREEN_FADE_IN( 2000 );
        l_U6 = 3;
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            SET_PLAYER_CONTROL( sub_413(), 1 );
            if (IS_THIS_A_MINIGAME_SCRIPT())
            {
                SET_MINIGAME_IN_PROGRESS( 0 );
            }
            sub_143( 2, "empire_down" );
            l_U4 = 0;
            l_U6 = 0;
        }
        break;
    }
    return;
}
