void main()
{
    unknown[5] uVar2;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U362 = 0;
    l_U363 = 0;
    l_U392 = 800;
    l_U437 = "missStubbs3p";
    l_U438 = 1;
    l_U443 = 2;
    l_U447 = {-1341.05600000, -499.44440000, 1.92380000};
    l_U450 = 113.07460000;
    l_U451 = 0;
    l_U458 = 0;
    l_U366 = {-1343.50700000, -493.83930000, 3.92380000};
    l_U369 = {-1295.59900000, 1642.03200000, 29.76870000};
    l_U372 = 90.10650000;
    l_U373 = {-1343.50700000, -493.83930000, 1.92380000};
    l_U376 = 92.77320000;
    l_U377 = {-1278.16100000, 1631.21900000, 29.77840000};
    l_U380 = 182.05430000;
    l_U393._fU0 = {-1345.50400000, -494.58220000, 2.89682800};
    l_U393._fU12 = {-3.44174200, 0.00000000, -64.18517000};
    l_U393._fU96 = {-1348.13500000, -496.40820000, 3.54985700};
    l_U393._fU108 = {-14.32794000, 0.00000000, -61.77874000};
    l_U393._fU120 = 45.00000000;
    l_U393._fU124 = 20000;
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    LOAD_ADDITIONAL_TEXT( "STUB3M4", 0 );
    LOAD_ADDITIONAL_TEXT( "E1S3p4A", 6 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_690();
        sub_3126( l_U443, l_U444 );
        sub_3183();
    }
    array(ref uVar2, 5);
    SET_MISSION_FLAG( 1 );
    l_U444 = sub_3270( l_U443 );
    sub_3422( 0, sub_3371(), "JOHNNY", 0 );
    sub_3422( 1, l_U384, "MECHANIC", 0 );
    PRINT_BIG( "CarMission", 5000, 2 );
    while (true)
    {
        WAIT( 0 );
        if (sub_3637( l_U443 ))
        {
            g_U10991--;
            sub_4217( ref uVar2, "E1S3p_NO", ref uVar23 );
            sub_4217( ref uVar2, "E1S3p_NO2", ref uVar23 );
            sub_4362( ref uVar2, "E1S3AUD", 1 );
            sub_7324( "STUBBS" );
            sub_7353();
        }
        if (l_U360)
        {
            if (IS_VEH_DRIVEABLE( l_U381 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3371(), l_U381 )))
                {
                    if (DOES_BLIP_EXIST( l_U383 ))
                    {
                        CLEAR_PRINTS();
                        REMOVE_BLIP( l_U383 );
                        SET_ROUTE( l_U383, 0 );
                        ADD_BLIP_FOR_CAR( l_U381, ref l_U382 );
                        SET_BLIP_AS_FRIENDLY( l_U382, 1 );
                        if (l_U386[1] == 0)
                        {
                            PRINT_NOW( "JSTUB_13", 7500, 1 );
                            l_U386[1] = 1;
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U382 ))
                {
                    REMOVE_BLIP( l_U382 );
                }
                if (l_U359)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U383 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U369._fU0, l_U369._fU4, l_U369._fU8, ref l_U383 );
                        SET_ROUTE( l_U383, 1 );
                        l_U389[0] = 1;
                        if (l_U389[0] == 0)
                        {
                            PRINT_NOW( "JSTUB_03", 7500, 1 );
                            l_U389[0] = 1;
                        }
                        else
                        {
                            CLEAR_PRINTS();
                            sub_9690();
                        }
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U381 ))
                {
                    if (NOT (LOCATE_CAR_3D( l_U381, l_U369._fU0, l_U369._fU4, l_U369._fU8 + 1.50000000, 2.50000000, 2.50000000, 2.50000000, 0 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U383 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U366._fU0, l_U366._fU4, l_U366._fU8, ref l_U383 );
                            SET_ROUTE( l_U383, 1 );
                            l_U389[1] = 1;
                            if (l_U389[1] == 0)
                            {
                                PRINT_NOW( "JSTUB_02", 7500, 1 );
                                l_U389[1] = 1;
                            }
                            else
                            {
                                CLEAR_PRINTS();
                                sub_9690();
                            }
                        }
                    }
                };;;
            }
        }
        switch (l_U451)
        {
            case 0:
            REQUEST_MODEL( 418536135 );
            while (NOT (HAS_MODEL_LOADED( 418536135 )))
            {
                WAIT( 0 );
            }
            REQUEST_ANIMS( l_U437 );
            g_U10460 = 0;
            CREATE_CAR( 418536135, l_U369._fU0, l_U369._fU4, l_U369._fU8, ref l_U381, 1 );
            CHANGE_CAR_COLOUR( l_U381, 131, 0 );
            SET_EXTRA_CAR_COLOURS( l_U381, 89, 0 );
            SET_CAR_HEADING( l_U381, l_U372 );
            ADD_BLIP_FOR_CAR( l_U381, ref l_U382 );
            SET_ROUTE( l_U382, 1 );
            SET_BLIP_AS_FRIENDLY( l_U382, 1 );
            SUPPRESS_CAR_MODEL( 418536135 );
            SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
            ADD_SCENARIO_BLOCKING_AREA( l_U369._fU0 - 20, l_U369._fU4 - 20, l_U369._fU8 - 20, l_U369._fU0 + 20, l_U369._fU4 + 20, l_U369._fU8 + 20 );
            ADD_SCENARIO_BLOCKING_AREA( l_U366._fU0 - 20, l_U366._fU4 - 20, l_U366._fU8 - 20, l_U366._fU0 + 20, l_U366._fU4 + 20, l_U366._fU8 + 20 );
            sub_3422( 0, sub_3371(), "JOHNNY", 0 );
            sub_3422( 1, l_U384, "MECHANIC", 0 );
            SET_VEH_ALARM( l_U381, 1 );
            while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\TS3_P_ATTACH_BUG" )))
            {
                WAIT( 0 );
            }
            REQUEST_MODEL( -314369597 );
            while (NOT (HAS_MODEL_LOADED( -314369597 )))
            {
                WAIT( 0 );
            }
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
            }
            PRINT_NOW( "JSTUB_01", 7500, 1 );
            SET_PLAYER_CONTROL( sub_822(), 1 );
            l_U451 = 1;
            break;
            case 1:
            l_U451 = 2;
            break;
            case 2:
            l_U451 = 3;
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( l_U381 ))
            {
                if ((CHECK_STUCK_TIMER( l_U381, 0, 5000 )) || (sub_11015()))
                {
                    l_U365 = 1;
                    sub_7353();
                }
                if (IS_CHAR_IN_CAR( sub_3371(), l_U381 ))
                {
                    SET_ROUTE( l_U382, 0 );
                    REMOVE_BLIP( l_U382 );
                    if (l_U363 == 0)
                    {
                        TRIGGER_VEH_ALARM( l_U381 );
                    }
                    if (DOES_BLIP_EXIST( l_U383 ))
                    {
                        REMOVE_BLIP( l_U383 );
                    }
                    if (sub_11250( l_U381 ))
                    {
                        PRINT_NOW( "JSTUB_02", 7500, 1 );
                    }
                    ADD_BLIP_FOR_COORD( l_U366._fU0, l_U366._fU4, l_U366._fU8, ref l_U383 );
                    SET_ROUTE( l_U383, 1 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3371(), 0 );
                    sub_11399( ref l_U433, 2, 45, 1 );
                    l_U445 = l_U433._fU8._fU0;
                    l_U446 = l_U433._fU8._fU4;
                    if ((l_U445 == 24) AND (l_U446 < 10))
                    {
                        PRINT_WITH_NUMBER( "JSTUB_06", l_U446, 7500, 1 );
                    }
                    else if ((l_U445 == 24) AND (l_U446 >= 10))
                    {
                        PRINT_WITH_NUMBER( "JSTUB_07", l_U446, 7500, 1 );
                    }
                    else if ((l_U445 >= 10) AND (l_U446 >= 10))
                    {
                        PRINT_WITH_2_NUMBERS( "JSTUB_08", l_U445, l_U446, 7500, 1 );
                    }
                    else if ((l_U445 < 10) AND (l_U446 < 10))
                    {
                        PRINT_WITH_2_NUMBERS( "JSTUB_09", l_U445, l_U446, 7500, 1 );
                    }
                    else if ((l_U445 < 10) AND (l_U446 >= 10))
                    {
                        PRINT_WITH_2_NUMBERS( "JSTUB_10", l_U445, l_U446, 7500, 1 );
                    }
                    else if ((l_U445 >= 10) AND (l_U446 < 10))
                    {
                        PRINT_WITH_2_NUMBERS( "JSTUB_11", l_U445, l_U446, 7500, 1 );
                    };;;;;;
                    l_U360 = 1;
                    l_U451 = 4;
                }
                else
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U381 );
                    if (l_U363 == 0)
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U381, sub_3371() ))
                        {
                            TRIGGER_VEH_ALARM( l_U381 );
                            l_U363 = 1;
                        }
                    }
                    if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3371() ))
                    {
                        sub_12454();
                    }
                }
            }
            else
            {
                l_U365 = 1;
                sub_7353();
            }
            break;
            case 4:
            if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_3371(), l_U366._fU0, l_U366._fU4, l_U366._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
            {
                if (l_U458 == 0)
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            if (sub_12662( l_U433 ))
                            {
                                l_U365 = 3;
                                sub_7353();
                            }
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U381 ))
            {
                if ((CHECK_STUCK_TIMER( l_U381, 0, 5000 )) || (sub_11015()))
                {
                    l_U365 = 1;
                    sub_7353();
                }
                if (NOT (DOES_CHAR_EXIST( l_U384 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3371(), l_U366._fU0, l_U366._fU4, l_U366._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
                    {
                        CREATE_CHAR( 4, -314369597, l_U447._fU0, l_U447._fU4, l_U447._fU8, ref l_U384, 1 );
                        sub_3422( 0, sub_3371(), "JOHNNY", 0 );
                        sub_3422( 1, l_U384, "MECHANIC", 0 );
                        SET_CHAR_HEADING( l_U384, l_U450 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 1 );
                        l_U362 = 1;
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -314369597 );
                    }
                }
                if (l_U362 == 1)
                {
                    if (l_U359 == 0)
                    {
                        if (DOES_CHAR_EXIST( l_U384 ))
                        {
                            if (IS_CHAR_INJURED( l_U384 ))
                            {
                                l_U365 = 4;
                                sub_7353();
                            }
                            if (NOT (IS_CHAR_INJURED( l_U384 )))
                            {
                                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U384, sub_3371(), 0 ))
                                {
                                    sub_13291();
                                    l_U365 = 4;
                                    sub_7353();
                                }
                            }
                        }
                    }
                }
                if (sub_13457( sub_3371(), l_U381 ))
                {
                    sub_13529();
                }
            }
            else
            {
                l_U365 = 1;
                sub_7353();
            }
            break;
            case 5:
            if (sub_12662( l_U433 ))
            {
                l_U365 = 3;
                sub_7353();
            }
            l_U451 = 6;
            break;
            case 6:
            if (l_U439[0] == 0)
            {
                if ((sub_17520( l_U433 )) < 11)
                {
                    sub_9690();
                    l_U439[0] = 1;
                }
            }
            if (l_U439[1] == 0)
            {
                if ((sub_17520( l_U433 )) < 31)
                {
                    sub_9690();
                    l_U439[1] = 1;
                }
            }
            if (l_U439[2] == 0)
            {
                if ((sub_17520( l_U433 )) < 61)
                {
                    sub_9690();
                    l_U439[2] = 1;
                }
            }
            if (sub_12662( l_U433 ))
            {
                l_U365 = 3;
                sub_7353();
            }
            if (IS_VEH_DRIVEABLE( l_U381 ))
            {
                GET_CAR_HEALTH( l_U381, ref iVar24 );
                if ((((((GET_ENGINE_HEALTH( l_U381 )) < l_U392) || ((GET_PETROL_TANK_HEALTH( l_U381 )) < l_U392)) || (iVar24 < l_U392)) || (CHECK_STUCK_TIMER( l_U381, 0, 5000 ))) || (sub_11015()))
                {
                    l_U365 = 2;
                    sub_7353();
                }
                else if (sub_13457( sub_3371(), l_U381 ))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( sub_3371(), l_U369._fU0, l_U369._fU4, l_U369._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 0 ))
                    {
                        if (sub_18100())
                        {
                            sub_14101();
                            l_U360 = 0;
                            REMOVE_BLIP( l_U383 );
                            if (IS_VEH_DRIVEABLE( l_U381 ))
                            {
                                if (IS_CHAR_IN_CAR( sub_3371(), l_U381 ))
                                {
                                    TASK_LEAVE_CAR( sub_3371(), l_U381 );
                                }
                            }
                            PRINT_NOW( "LeaveArea", 7500, 1 );
                            l_U451 = 7;
                        }
                        else if (sub_13457( sub_3371(), l_U381 ))
                        {
                            if (l_U361 == 0)
                            {
                                PRINT_NOW( "3M4Head", 7500, 1 );
                                l_U361 = 1;
                            }
                        }
                    }
                    else
                    {
                        LOCATE_CHAR_IN_CAR_3D( sub_3371(), l_U369._fU0, l_U369._fU4, l_U369._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 );
                        l_U361 = 0;
                    }
                }
                else
                {
                    l_U361 = 0;
                }
            }
            else
            {
                l_U365 = 2;
                sub_7353();
            }
            break;
            case 7:
            if (IS_VEH_DRIVEABLE( l_U381 ))
            {
                if (NOT (LOCATE_CAR_3D( l_U381, l_U369._fU0, l_U369._fU4, l_U369._fU8 + 2, 2.50000000, 2.50000000, 2.50000000, 0 )))
                {
                    LOCATE_CAR_3D( l_U381, l_U369._fU0, l_U369._fU4, l_U369._fU8 + 2, 2.50000000, 2.50000000, 2.50000000, 0 );
                    sub_18584();
                    l_U451 = 6;
                }
                if ((((((GET_ENGINE_HEALTH( l_U381 )) < l_U392) || ((GET_PETROL_TANK_HEALTH( l_U381 )) < l_U392)) || (iVar24 < l_U392)) || (CHECK_STUCK_TIMER( l_U381, 0, 5000 ))) || (sub_11015()))
                {
                    l_U365 = 2;
                    sub_7353();
                }
            }
            if (NOT (IS_VEH_DRIVEABLE( l_U381 )))
            {
                l_U365 = 2;
                sub_7353();
            }
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3371(), l_U369._fU0, l_U369._fU4, l_U369._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
            {
                if (DOES_VEHICLE_EXIST( l_U381 ))
                {
                    DELETE_CAR( ref l_U381 );
                }
                l_U451 = 8;
            }
            break;
            case 8:
            sub_19017();
            break;
        }
    }
    return;
}

void sub_690()
{
    sub_699();
    return;
}

void sub_699()
{
    int iVar2;

    iVar2 = 2;
    sub_713( iVar2 );
    sub_1659( iVar2 );
    return;
}

void sub_713(unknown uParam0)
{
    if (g_U816)
    {
        sub_732();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_822(), 150 );
    switch (uParam0)
    {
        case 2:
        case 8:
        sub_895( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1427( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1562();
    return;
}

void sub_732()
{
    sub_741();
    return;
}

void sub_741()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_822()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_906( uParam1 );
    sub_1101( uParam0, 0, uParam2 );
    sub_1101( uParam0, 1, uParam3 );
    sub_1101( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_1294();
    return;
}

void sub_906(unknown uParam0)
{
    ADD_SCORE( sub_822(), uParam0 );
    sub_931( uParam0 );
    return;
}

void sub_931(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1042( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1042(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1101(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_1294()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_1427(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1562()
{
    sub_1571();
    return;
}

void sub_1571()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1659(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1427( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U14838[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1427( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U14838[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U14838[uParam0]._fU160._fU100 < iVar3)
    {
        g_U14838[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U12303 = 0;
    g_U12306[uParam0]._fU28 = 1;
    sub_2058();
    sub_2682();
    uVar4 = sub_2717( uParam0 );
    sub_2972( uVar4, 0 );
    sub_3053();
    return;
}

void sub_2058()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2096( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2096( 1, g_U572[I] )) != 0)
            {
                sub_2382( I );
            }
        }
    }
    if (NOT sub_2548())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2096(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_2382(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2467( g_U572 - 1 );
    return;
}

void sub_2467(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2548()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2096( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2682()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2717(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1042( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2972(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_3053()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

void sub_3126(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_3183()
{
    if (l_U358)
    {
        END_CAM_COMMANDS( ref l_U364 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    g_U10460 = 1;
    FLUSH_SCENARIO_BLOCKING_AREAS();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_3270(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15862[uParam0]._fU228._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_3371()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3506( "\n PED NUMBER ", uParam0 );
    sub_3546( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3506(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3546(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3637(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_3730())
            {
                return 0;
            }
            if (sub_3860())
            {
                return 0;
            }
            sub_4122();
            return 1;
        }
    }
    return 0;
}

int sub_3730()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brian" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dave" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_3860()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;
    int iVar10;

    fVar8 = 0.00000000;
    if (IS_CHAR_DEAD( sub_3371() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_3371(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if ((g_U18635[I]._fU20) || (g_U18635[I]._fU24))
        {
            return 1;
        }
        if (g_U18635[I]._fU0)
        {
            iVar10 = g_U18635[I]._fU180;
            if (NOT (iVar10 == 16))
            {
                uVar2 = {g_U10789[iVar10]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar8 );
                if (fVar8 < 500.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_4122()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_4217(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

int sub_4362(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_4415( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_6314( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_4415(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_4485( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_4485( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_822() )))
    {
        sub_4485( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3371() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3371() ))))
    {
        sub_4485( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_4485( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_4942()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((g_U94._fU372) || (NOT bParam8))
            {
                sub_4485( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 5) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 4))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT sub_4942()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_6314( uParam0, ref g_U94._fU176 );
    sub_6710( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_3546( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

void sub_4485(unknown uParam0)
{
    return;
}

int sub_4942()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_4999())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_4999()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_822() )))
    {
        sub_4485( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4485( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_4485( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_4485( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_822() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3371() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3371(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4485( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3371() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4485( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_4485( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_822() )))
    {
        sub_4485( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_6314(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_6710(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_7324(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

void sub_7353()
{
    CLEAR_PRINTS();
    switch (l_U365)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "JSTUB_04", 7500, 1 );
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "Stubbs3m4: reason_for_fail = 1" );
        PRINTNL();
        sub_7530();
        sub_7737( l_U443, "E1S3p4_BEF", "E1S3p4A", 0 );
        break;
        case 2:
        PRINT_NOW( "JSTUB_05", 7500, 1 );
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "Stubbs3m4: reason_for_fail = 2" );
        PRINTNL();
        sub_7530();
        sub_7737( l_U443, "E1S3p4_AFT", "E1S3p4A", 0 );
        break;
        case 3:
        PRINT_NOW( "JSTUB_12", 7500, 1 );
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "Stubbs3m4: reason_for_fail = 3" );
        PRINTNL();
        if (l_U457 == 0)
        {
            if (sub_8552( 1, 1 ))
            {
                g_U38706 = l_U381;
                if (DOES_VEHICLE_EXIST( l_U381 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U381 ))
                    {
                        GET_CAR_COORDINATES( l_U381, ref g_U38707._fU0, ref g_U38707._fU4, ref g_U38707._fU8 );
                        sub_7530();
                    }
                }
                sub_7737( l_U443, "E1S3p4_OUT", "E1S3p4A", 0 );
            }
            l_U457 = 1;
        }
        break;
        case 4:
        PRINT_NOW( "MECH", 7500, 1 );
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "Stubbs3m4: reason_for_fail = 4" );
        PRINTNL();
        sub_7530();
        sub_7737( l_U443, "E1S3p4_MECH", "E1S3p4A", 0 );
        break;
    }
    CLEAR_BRIEF();
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_822(), 150 );
        SAY_AMBIENT_SPEECH( sub_3371(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_690();
    sub_3126( l_U443, l_U444 );
    sub_3183();
    return;
}

void sub_7530()
{
    if (IS_VEH_DRIVEABLE( l_U381 ))
    {
        SET_CAR_ENGINE_ON( l_U381, 0, 1 );
        if (IS_CHAR_IN_CAR( sub_3371(), l_U381 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U455 );
            TASK_CAR_TEMP_ACTION( 0, l_U381, 6, 5000 );
            TASK_LEAVE_CAR( 0, l_U381 );
            CLOSE_SEQUENCE_TASK( l_U455 );
            SET_CHAR_KEEP_TASK( sub_3371(), 1 );
            TASK_PERFORM_SEQUENCE( sub_3371(), l_U455 );
            CLEAR_SEQUENCE_TASK( l_U455 );
        }
        LOCK_CAR_DOORS( l_U381, 3 );
    }
    return;
}

void sub_7737(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_7781( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_7781(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

int sub_8552(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3371() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3371(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_8676( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_8676(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3371() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3371(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3371() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3371(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3371()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3371() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3371() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_822() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_822() )))
    {
        return 0;
    }
    return 1;
}

void sub_9690()
{
    if ((l_U445 == 24) AND (l_U446 < 10))
    {
        PRINT_WITH_NUMBER( "stubReminder1", l_U446, 7500, 1 );
    }
    else if ((l_U445 == 24) AND (l_U446 >= 10))
    {
        PRINT_WITH_NUMBER( "stubReminder2", l_U446, 7500, 1 );
    }
    else if ((l_U445 >= 10) AND (l_U446 >= 10))
    {
        PRINT_WITH_2_NUMBERS( "stubReminder3", l_U445, l_U446, 7500, 1 );
    }
    else if ((l_U445 < 10) AND (l_U446 < 10))
    {
        PRINT_WITH_2_NUMBERS( "stubReminder4", l_U445, l_U446, 7500, 1 );
    }
    else if ((l_U445 < 10) AND (l_U446 >= 10))
    {
        PRINT_WITH_2_NUMBERS( "stubReminder5", l_U445, l_U446, 7500, 1 );
    }
    else if ((l_U445 >= 10) AND (l_U446 < 10))
    {
        PRINT_WITH_2_NUMBERS( "stubReminder6", l_U445, l_U446, 7500, 1 );
    };;;;;;
    return;
}

int sub_11015()
{
    if (IS_VEH_DRIVEABLE( l_U381 ))
    {
        if (IS_CAR_UPSIDEDOWN( l_U381 ))
        {
            GET_GAME_TIMER( ref l_U453 );
            l_U454 = l_U453 - l_U452;
            if (l_U454 > 5000)
            {
                return 1;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U452 );
        }
    }
    return 0;
}

int sub_11250(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_CHAR_IN_CAR( sub_3371(), uParam0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_11399(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_11452( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_11584( iParam0 + 0 );
    }
    return;
}

void sub_11452(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_11584( iParam0 + 0 );
    }
    return;
}

void sub_11584(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_11615( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_11615(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_12454()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U456 );
    if (IS_VEH_DRIVEABLE( l_U456 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U456 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U456 );
        }
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U456, 0 );
    }
    return;
}

int sub_12662(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_12831( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_12831(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_13291()
{
    if (NOT (IS_CHAR_INJURED( l_U384 )))
    {
        if (NOT (sub_13324( l_U384, 25 )))
        {
            SET_CHAR_KEEP_TASK( l_U384, 1 );
            TASK_SMART_FLEE_CHAR( l_U384, sub_3371(), 200, -1 );
        }
    }
    return;
}

int sub_13324(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13457(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_13529()
{
    if (l_U458 > 3)
    {
        if (sub_13550())
        {
            if (sub_13658( l_U427 ))
            {
                sub_13830( ref l_U427, 0 );
            }
            INCREMENT_INT_STAT( 372, 1 );
            l_U458 = 6;
        }
    }
    switch (l_U458)
    {
        case 0:
        if (LOCATE_CHAR_IN_CAR_3D( sub_3371(), l_U366._fU0, l_U366._fU4, l_U366._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
        {
            sub_14101();
            SET_PLAYER_CONTROL_ADVANCED( sub_822(), 0, 1, 1 );
            DO_SCREEN_FADE_OUT( 500 );
            REQUEST_ANIMS( l_U437 );
            REQUEST_ANIMS( "Gestures@Niko" );
            BEGIN_CAM_COMMANDS( ref l_U459 );
            sub_14340( -1269.00400000, 1620.50100000, 29.80460000, 267.34090000 );
            l_U458 = 1;
        }
        else
        {
            LOCATE_CHAR_IN_CAR_3D( sub_3371(), l_U366._fU0, l_U366._fU4, l_U366._fU8 + 1, 2.50000000, 2.50000000, 2.50000000, 1 );
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            REQUEST_ANIMS( l_U437 );
            REQUEST_ANIMS( "Gestures@Niko" );
            if (HAVE_ANIMS_LOADED( l_U437 ))
            {
                if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
                {
                    if (IS_VEH_DRIVEABLE( l_U381 ))
                    {
                        CLEAR_AREA( -1342.33800000, -492.11060000, 1.92380000, 10.00000000, 1 );
                        SET_CAR_COORDINATES( l_U381, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
                        SET_CAR_HEADING( l_U381, l_U376 );
                        FIX_CAR( l_U381 );
                        SET_CHAR_GESTURE_GROUP( sub_3371(), "Gestures@Niko" );
                        if (NOT (IS_CHAR_INJURED( l_U384 )))
                        {
                            SET_CHAR_COORDINATES( l_U384, -1342.33800000, -492.11060000, 1.92380000 );
                            SET_CHAR_HEADING( l_U384, 134.19860000 );
                        }
                        SET_CAM_BEHIND_PED( sub_3371() );
                    }
                    l_U458 = 2;
                }
                CLEAR_PRINTS();
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U384 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U385 );
            TASK_DUCK( 0, 10000 );
            TASK_STAND_STILL( 0, 100 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1343.58700000, -491.96920000, 1.92380000, 2, -2, 0.00000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3371() );
            TASK_PLAY_ANIM( 0, "player_lean_intro", l_U437, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U437, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U437, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U437, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_outro", l_U437, 1000.00000000, 0, 1, 1, 0, -2 );
            CLOSE_SEQUENCE_TASK( l_U385 );
            TASK_PERFORM_SEQUENCE( l_U384, l_U385 );
            CLEAR_SEQUENCE_TASK( l_U385 );
            GET_GAME_TIMER( ref l_U460 );
            TASK_LOOK_AT_COORD( l_U384, 64193, 65042, -1, 20000, 0 );
        }
        l_U458 = 3;
        break;
        case 3:
        GET_GAME_TIMER( ref l_U461 );
        l_U462 = l_U461 - l_U460;
        if (l_U462 > 1000)
        {
            sub_15290( l_U393, 0 );
            sub_15806( 1 );
            TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_3371(), "lookout_pass_window", l_U437, 1000.00000000, 1, 0, 0, 0, -2 );
            DO_SCREEN_FADE_IN( 3000 );
            l_U458 = 4;
        }
        break;
        case 4:
        if (IS_SCREEN_FADED_IN())
        {
            PLAY_SOUND_FROM_VEHICLE( -1, "TS3_ATTACH_BUG", l_U381 );
            sub_16135( "E1S3p4_ARR", ref l_U427, 6, 1 );
            l_U458 = 5;
        }
        break;
        case 5:
        if (NOT (sub_13658( l_U427 )))
        {
            if (NOT IS_CAM_INTERPOLATING())
            {
                INCREMENT_INT_STAT( 373, 1 );
                l_U458 = 6;
            }
        }
        break;
        case 6:
        if (IS_VEH_DRIVEABLE( l_U381 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3371(), l_U381 )))
            {
                WARP_CHAR_INTO_CAR( sub_3371(), l_U381 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U384 )))
        {
            DELETE_CHAR( ref l_U384 );
            l_U362 = 0;
        }
        sub_15806( 0 );
        DESTROY_ALL_CAMS();
        END_CAM_COMMANDS( ref l_U459 );
        REMOVE_BLIP( l_U383 );
        if (DOES_BLIP_EXIST( l_U382 ))
        {
            REMOVE_BLIP( l_U382 );
        }
        ADD_BLIP_FOR_COORD( l_U369._fU0, l_U369._fU4, l_U369._fU8, ref l_U382 );
        SET_ROUTE( l_U382, 1 );
        CLEAR_CHAR_TASKS( sub_3371() );
        SET_PLAYER_CONTROL_ADVANCED( sub_822(), 1, 1, 1 );
        PRINT_NOW( "JSTUB_03", 7500, 1 );
        l_U359 = 1;
        l_U451 = 5;
        l_U458 = 7;
        break;
        case 7: break;
    }
    return;
}

int sub_13550()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13658(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_4485( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4485( "\n speech is not playing" );
    }
    return 0;
}

void sub_13830(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_14101()
{
    unknown uVar2;
    float fVar3;

    if ((IS_CHAR_IN_ANY_CAR( sub_3371() )) || (IS_CHAR_ON_ANY_BIKE( sub_3371() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3371(), ref uVar2 );
        SET_PLAYER_CONTROL( sub_822(), 0 );
        GET_CAR_SPEED( uVar2, ref fVar3 );
        while (fVar3 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_SPEED( uVar2, ref fVar3 );
            }
        }
        SET_PLAYER_CONTROL( sub_822(), 1 );
    }
    return;
}

void sub_14340(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    if (IS_VEH_DRIVEABLE( l_U456 ))
    {
        GET_CAR_MODEL( l_U456, ref uVar6 );
        if (IS_THIS_MODEL_A_CAR( uVar6 ))
        {
            CLOSE_ALL_CAR_DOORS( l_U456 );
        }
        SET_CAR_COORDINATES( l_U456, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CAR_HEADING( l_U456, uParam3 );
    }
    return;
}

void sub_15290(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, int iParam34)
{
    if (DOES_CAM_EXIST( l_U357 ))
    {
        DESTROY_CAM( l_U357 );
    }
    if (DOES_CAM_EXIST( l_U354[0] ))
    {
        DESTROY_CAM( l_U354[0] );
    }
    CREATE_CAM( 14, ref l_U354[0] );
    SET_CAM_POS( l_U354[0], uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U354[0], uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        POINT_CAM_AT_PED( l_U354[0], iParam34 );
    }
    SET_CAM_FOV( l_U354[0], uParam0._fU120 );
    if (DOES_CAM_EXIST( l_U354[1] ))
    {
        DESTROY_CAM( l_U354[1] );
    }
    CREATE_CAM( 14, ref l_U354[1] );
    SET_CAM_POS( l_U354[1], uParam0._fU96._fU0, uParam0._fU96._fU4, uParam0._fU96._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U354[1], uParam0._fU108._fU0, uParam0._fU108._fU4, uParam0._fU108._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        POINT_CAM_AT_PED( l_U354[1], iParam34 );
    }
    SET_CAM_FOV( l_U354[1], uParam0._fU120 );
    CREATE_CAM( 3, ref l_U357 );
    SET_CAM_ACTIVE( l_U357, 1 );
    SET_CAM_PROPAGATE( l_U357, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U357, l_U354[0], l_U354[1], uParam0._fU124, 0 );
    return;
}

void sub_15806(boolean bParam0)
{
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_822() ))
    {
        SET_PLAYER_CONTROL( sub_822(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_822(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_3371() )))
    {
        CLEAR_CHAR_TASKS( sub_3371() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3371(), 1 );
    }
    else
    {
        sub_15946();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3371(), 0 );
    }
    return;
}

void sub_15946()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_16135(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16158( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_16158(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_16212( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_16212(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16234( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_16914( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_16234(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4485( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_4485( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_4485( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_16914(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_17520(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int Result;
    int iVar13;

    if (sub_12662( uParam0 ))
    {
        return 0;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    iVar10 = 0;
    if ((uParam0._fU0._fU4 == iVar7) AND (uParam0._fU0._fU0 == iVar6))
    {
        iVar10 = (iVar8 * 60) + iVar9;
        iVar11 = (uParam0._fU8._fU0 * 60) + uParam0._fU8._fU4;
        return iVar11 - iVar10;
    }
    if (sub_12831( uParam0._fU0._fU0, uParam0._fU0._fU4, iVar6, iVar7, 1 ))
    {
        Result = (uParam0._fU8._fU0 * 60) + uParam0._fU8._fU4;
        iVar13 = 1440;
        iVar10 = (iVar8 * 60) + iVar9;
        Result += iVar13 - iVar10;
        return Result;
    }
    return 999999;
}

int sub_18100()
{
    float fVar2;

    if (IS_VEH_DRIVEABLE( l_U381 ))
    {
        GET_CAR_HEADING( l_U381, ref fVar2 );
        if ((fVar2 < (l_U372 + 5)) AND (fVar2 > (l_U372 - 5)))
        {
            return 1;
        }
    }
    return 0;
}

void sub_18584()
{
    if (DOES_BLIP_EXIST( l_U382 ))
    {
        REMOVE_BLIP( l_U382 );
    }
    if (sub_13457( sub_3371(), l_U381 ))
    {
        ADD_BLIP_FOR_COORD( l_U369._fU0, l_U369._fU4, l_U369._fU8, ref l_U382 );
        SET_ROUTE( l_U382, 1 );
        l_U360 = 1;
    }
    else
    {
        ADD_BLIP_FOR_CAR( l_U381, ref l_U382 );
        SET_BLIP_AS_FRIENDLY( l_U382, 1 );
        SET_ROUTE( l_U382, 1 );
        if (l_U386[0] == 0)
        {
            PRINT_NOW( "JSTUB_13", 7500, 1 );
            l_U386[0] = 1;
        }
        l_U360 = 1;
    }
    return;
}

void sub_19017()
{
    sub_7737( l_U443, "E1S3p4_DROP", "E1S3p4A", 0 );
    CLEAR_PRINTS();
    CLEAR_WANTED_LEVEL( sub_822() );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U381 );
    sub_19091();
    INCREMENT_INT_STAT( 145, 1 );
    sub_25552( l_U443, l_U444, 5 );
    g_U24 = 82;
    g_U38703 = 1;
    REQUEST_SCRIPT( "BryceBug" );
    while (NOT (HAS_SCRIPT_LOADED( "BryceBug" )))
    {
        WAIT( 0 );
    }
    START_NEW_SCRIPT( "BryceBug", 512 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "BryceBug" );
    sub_3183();
    return;
}

void sub_19091()
{
    sub_19100();
    return;
}

void sub_19100()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 2;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_19127( iVar3, iVar4, iVar5 );
    sub_1659( iVar2 );
    return;
}

void sub_19127(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_19159( iVar5, uParam0, uParam1, uParam2, "Contact_3" );
    return;
}

void sub_19159(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_19255( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_19255( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_19255( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_19255( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_19255( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_19255( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_19832( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_20280( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_822() );
    sub_2058();
    bVar28 = true;
    uVar29 = sub_19832( uParam0, iVar7 );
    uVar30 = sub_2717( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_24218( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_24652();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_24737( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_24816( uParam0 );
                sub_24989( 0 );
                sub_2972( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_25178();
        }
    }
    if (bParam2)
    {
        sub_24652();
        sub_25277();
        sub_24989( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_24652();
        sub_25329();
        sub_24989( 0 );
        sub_2972( uVar30, 0 );
    }
    sub_25380();
    return;
}

void sub_19255(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_19832(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1042( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_20280(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_20376( uParam1 );
        break;
        case 1:
        bVar8 = sub_20685( uParam1 );
        break;
        case 2:
        bVar8 = sub_21288( uParam1 );
        break;
        case 3:
        bVar8 = sub_21525( uParam1 );
        break;
        case 4:
        bVar8 = sub_21691( uParam1 );
        break;
        case 5:
        bVar8 = sub_21890( uParam1 );
        break;
        case 6:
        bVar8 = sub_22085( uParam1 );
        break;
        case 7:
        bVar8 = sub_22290( uParam1 );
        break;
        case 8:
        bVar8 = sub_22495( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1427( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_19832( uParam0, uParam1 );
    if (bParam3)
    {
        sub_22781( uVar9, uParam0 );
    }
    return 1;
}

int sub_20376(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_895( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_895( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_895( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_895( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_20592( "Contact 1", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Contact 1", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_20592(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_20685(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_895( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_895( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_895( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_895( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_895( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_895( iVar3, 0, sub_20911(), sub_21047(), 0, 0 );
        break;
        default:
        sub_20592( "Contact 2", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Contact 2", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20911()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1427( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_21047()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1427( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_21288(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_895( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_895( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_895( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_20592( "Contact 3", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Contact 3", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21525(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_20592( "Friend 4", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Friend 4", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21691(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_895( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_895( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_895( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_20592( "Contact 5", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Contact 5", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21890(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_895( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_895( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_20592( "Contact 6", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Contact 6", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22085(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_895( iVar3, 0, sub_20911(), sub_21047(), 0, 0 );
        break;
        default:
        sub_20592( "Friend 7", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Friend 7", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22290(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_895( iVar3, 0, sub_20911(), sub_21047(), 0, 0 );
        break;
        default:
        sub_20592( "Friend 8", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Friend 8", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22495(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_895( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_20592( "Contact 9", 1 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20592( "Contact 9", 0 );
        sub_895( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_22781(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    if (sub_22842( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_23560( iParam1 );
    }
    return;
}

int sub_22842(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_22982( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_22982(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_23152( 0 );
    return;
}

void sub_23152(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_23397();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_23397()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_23560(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_23791( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_23791( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_23791( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_23791( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_23791( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_23791( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_23791(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_24218(unknown uParam0, unknown uParam1)
{
    sub_24237( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_24237(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_24652()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_24737(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_24816(unknown uParam0)
{
    sub_24825();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_24825()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_24989(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_25040( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_25040(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_25178()
{
    sub_25187();
    return;
}

void sub_25187()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_25277()
{
    sub_25187();
    return;
}

void sub_25329()
{
    sub_25187();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_25380()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_25402();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_25402()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_25552(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 1;
    g_U15862[uParam0]._fU228._fU0 = 1;
    return sub_25605( uParam0, uParam2 );
}

int sub_25605(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15862[uParam0]._fU228._fU12[I] != 1)
        {
            return 0;
        }
    }
    return 1;
}
