void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
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
    l_U355 = -3;
    l_U356 = 0;
    l_U440 = 0;
    l_U444 = 2;
    PRINTSTRING( "\nStarting stubbs3p!" );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    PRINTSTRING( "\nStarting stubbs3p!" );
    array(ref uVar7._fU0._fU0, 3);
    ref uVar7._fU0;
    ref uVar7;
    l_U355 = -3;
    if (sub_399( l_U444 ))
    {
        sub_652( l_U444, 1, 5, -1, -1, -1 );
        PRINTSTRING( "\n First time running script. just randomized missions" );
        l_U356 = 1;
    }
    else
    {
        PRINTSTRING( "\n scripts run before" );
        if (sub_1534( l_U444, 5 ))
        {
            TERMINATE_THIS_SCRIPT();
        }
        l_U356 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if ((g_U12303) AND (l_U355 != 2))
        {
            l_U355 = 2;
        }
        switch (l_U355)
        {
            case -3:
            if (GET_MISSION_FLAG() == 0)
            {
                l_U355 = -2;
            }
            break;
            case -2:
            l_U355 = -1;
            break;
            case -1:
            if (IS_SCREEN_FADED_IN())
            {
                l_U355 = 0;
            }
            break;
            case 0:
            if (GET_MISSION_FLAG() == 0)
            {
                if (sub_1820( l_U444 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_2060() )))
                    {
                        if ((((NOT sub_2428()) || (sub_2475())) || (sub_2561())) || (sub_2662()))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U357 );
                            l_U357 = 0;
                            PRINTSTRING( "\n SOmethings fucked 1" );
                            if (l_U357 == 0)
                            {
                                sub_2815();
                                l_U355 = 3;
                                PRINTSTRING( "\n Somethings fucked 2" );
                            }
                            else if (l_U357 == 1)
                            {
                                l_U355 = 3;
                                PRINTSTRING( "\n Somethings fucked3" );
                            }
                        }
                        else
                        {
                            PRINTSTRING( "\n STARTING JOB! ALL SYSTEMS GO!" );
                            uVar14 = sub_6449( l_U444 );
                            PRINTNL();
                            PRINTSTRING( "current_mission = " );
                            PRINTINT( uVar14 );
                            PRINTNL();
                            iVar15 = sub_6608( l_U444, 1, uVar14 );
                            PRINTNL();
                            PRINTSTRING( "currentTarget 1 = " );
                            PRINTINT( iVar15 );
                            PRINTNL();
                            iVar6 = 0;
                            if (iVar15 == 2)
                            {
                                l_U442 = "E1S3p2_GET";
                                l_U443 = "E1S3p2A";
                                l_U441 = "Stubbs3m2";
                                g_U38705 = 2;
                            }
                            else if (iVar15 == 1)
                            {
                                l_U442 = "E1S3p4_GET";
                                l_U443 = "E1S3p4A";
                                l_U441 = "Stubbs3m4";
                                g_U38705 = 1;
                            }
                            else if (iVar15 == 0)
                            {
                                l_U442 = "E1S3p_GET";
                                l_U443 = "E1S3p3A";
                                l_U441 = "Stubbs3m7";
                                g_U38705 = 0;
                            }
                            else if (iVar15 == 3)
                            {
                                l_U442 = "E1S3p5_GET";
                                l_U443 = "E1S3p5A";
                                l_U441 = "Stubbs3m5";
                                g_U38705 = 3;
                            }
                            else if (iVar15 > 3)
                            {
                                l_U442 = "E1S3p1_GET";
                                l_U443 = "E1S3p1A";
                                l_U441 = "Stubbs3m1";
                                g_U38705 = 4;
                            };;;;;
                            PRINTNL();
                            PRINTSTRING( "currentTarget = " );
                            PRINTINT( iVar15 );
                            PRINTNL();
                            l_U355 = 4;
                            l_U440 = 1;
                        }
                    }
                }
            }
            break;
            case 4:
            sub_7143( ref l_U358, ref iVar6 );
            sub_7187();
            break;
            case 1:
            l_U356 = 0;
            if ((NOT g_U12303) AND (NOT g_U94._fU580))
            {
                sub_7460();
            }
            else
            {
                l_U355 = 0;
                l_U440 = 0;
            }
            if (l_U440)
            {
                REQUEST_SCRIPT( l_U441 );
                while (NOT (HAS_SCRIPT_LOADED( l_U441 )))
                {
                    WAIT( 0 );
                    REQUEST_SCRIPT( l_U441 );
                }
                sub_10174( l_U444 );
                START_NEW_SCRIPT( l_U441, 8192 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( l_U441 );
                l_U440 = 0;
                l_U355 = 2;
            }
            break;
            case 2:
            if (NOT g_U12303)
            {
                if (sub_1534( l_U444, 5 ))
                {
                    sub_10274();
                    TERMINATE_THIS_SCRIPT();
                }
                sub_13858( l_U444 );
                l_U355 = 0;
            }
            break;
            case 3:
            if (sub_6018( 0 ))
            {
                l_U355 = 0;
            }
            break;
        }
    }
    return;
}

int sub_399(unknown uParam0)
{
    if (g_U15862[uParam0]._fU228._fU4)
    {
        sub_432( uParam0 );
        g_U15862[uParam0]._fU228._fU4 = 0;
        return 1;
    }
    return 0;
}

void sub_432(unknown uParam0)
{
    int I;
    int J;

    for ( I = 0; I <= 14; I++ )
    {
        g_U15862[uParam0]._fU228._fU12[I] = 0;
    }
    for ( I = 0; I <= 2; I++ )
    {
        for ( J = 0; J <= 14; J++ )
        {
            g_U15862[uParam0]._fU228._fU76[I]._fU0[J] = -1;
        }
    }
    g_U15862[uParam0]._fU228._fU0 = 1;
    g_U15862[uParam0]._fU228._fU8 = 0;
    return;
}

void sub_652(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
    int I;
    int J;
    unknown uVar10;
    unknown uVar11;

    if (g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[0] == -1)
    {
        for ( I = 0; I <= (iParam2 - 1); I++ )
        {
            g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] = I;
        }
        for ( I = iParam2 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar11 );
            uVar10 = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I];
            g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uVar11];
            g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uVar11] = uVar10;
        }
        if (iParam5 != -1)
        {
            for ( I = 0; I <= (iParam2 - 2); I++ )
            {
                if ((g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] == iParam3) || (g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] == iParam4))
                {
                    for ( J = I + 1; J <= (I + iParam5); J++ )
                    {
                        if (J < iParam2)
                        {
                            if ((g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J] == iParam3) || (g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J] == iParam4))
                            {
                                uVar10 = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[0];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[0] = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] = uVar10;
                                uVar10 = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[iParam2 - 1];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[iParam2 - 1] = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J] = uVar10;
                                return;
                            }
                        }
                    }
                    return;
                }
            }
        }
    }
    return;
}

int sub_1534(unknown uParam0, int iParam1)
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

int sub_1820(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_1913())
            {
                return 0;
            }
            if (sub_2043())
            {
                return 0;
            }
            sub_2341();
            return 1;
        }
    }
    return 0;
}

int sub_1913()
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

int sub_2043()
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
    if (IS_CHAR_DEAD( sub_2060() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_2060(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
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

void sub_2060()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2341()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

int sub_2428()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

int sub_2475()
{
    if (g_U38700 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2060(), -1322.21700000, 307.21910000, 12.33830000, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2561()
{
    if (g_U38703 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2060(), -1295.59900000, 1642.03200000, 29.76870000, 150.00000000 + 200, 150.00000000 + 200, 150.00000000 + 200, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2662()
{
    if (g_U38701 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2060(), -1624.07100000, 719.55000000, 26.85480000, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2815()
{
    l_U439 = 1;
    if (sub_2865( ref g_U12306[l_U444]._fU92, ref g_U12306[l_U444]._fU76, 0 ))
    {
        while (l_U439)
        {
            WAIT( 0 );
            switch (sub_5930())
            {
                case 2:
                l_U439 = 0;
                break;
                default:
                if (sub_6018( 0 ))
                {
                    l_U439 = 0;
                }
                break;
            }
        }
    }
    return;
}

int sub_2865(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_2973( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_4898( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_2973(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_3043( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_3043( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3151() )))
    {
        sub_3043( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_2060() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2060() ))))
    {
        sub_3043( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_3043( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_3526()) AND (NOT bParam11))
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
                sub_3043( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_3526()) AND (NOT bParam11))
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
    sub_4898( uParam0, ref g_U94._fU176 );
    sub_5294( ref g_U94._fU160 );
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
        sub_5536( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_3043(unknown uParam0)
{
    return;
}

void sub_3151()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3526()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_3583())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_3583()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3151() )))
    {
        sub_3043( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3043( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_3043( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_3043( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3151() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2060() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2060(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3043( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2060() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3043( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_3043( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3151() )))
    {
        sub_3043( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_4898(unknown uParam0, unknown uParam1)
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

void sub_5294(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_5536(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5930()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

int sub_6018(boolean bParam0)
{
    unknown uVar3;

    if (g_U94._fU60 != -1)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U94._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_2060(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_3043( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_6449(unknown uParam0)
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

void sub_6608(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uParam2];
}

void sub_7143(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_7187()
{
    l_U439 = 1;
    if (sub_2865( l_U442, l_U443, 1 ))
    {
        while (l_U439)
        {
            WAIT( 0 );
            sub_7241();
            switch (sub_5930())
            {
                case 2:
                PRINTSTRING( "HERE1" );
                if (l_U355 == 4)
                {
                    PRINTSTRING( "HERE2" );
                    l_U355 = 3;
                }
                l_U439 = 0;
                break;
                default:
                if (sub_6018( 0 ))
                {
                    PRINTSTRING( "HERE3" );
                    if (l_U355 == 4)
                    {
                        l_U355 = 1;
                    }
                    l_U439 = 0;
                }
                break;
            }
        }
    }
    return;
}

void sub_7241()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

void sub_7460()
{
    sub_7469();
    return;
}

void sub_7469()
{
    int iVar2;

    iVar2 = 2;
    sub_7483( iVar2 );
    return;
}

void sub_7483(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Start_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_7635( "Flow_Start_Proc_Subpart: Proc Mission not loaded" );
    }
    sub_7770();
    CLEAR_BRIEF();
    g_U14838[uParam0]._fU160._fU96 = 1;
    g_U12303 = 1;
    g_U12306[uParam0]._fU28 = 1;
    sub_8642( uParam0 );
    uVar3 = sub_9764( uParam0, g_U14838[uParam0]._fU160._fU76 );
    sub_9952( uVar3 );
    sub_10030();
    return;
}

void sub_7635(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_7770()
{
    sub_7779();
    sub_7924( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_7998();
    return;
}

void sub_7779()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_7924(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7998()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8036( 1, g_U572[I] )) == 0)
        {
            sub_8287( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8465())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_8036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8287(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_8372( g_U572 - 1 );
    return;
}

void sub_8372(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_8465()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8036( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8642(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref uVar3, 4, g_U14838[uParam0]._fU160._fU44, 8);
    uVar7 = {sub_8678( ref uVar3, uParam0 )};
    sub_9581( uVar7 );
    return;
}

void sub_8678(unknown uParam0, unknown uParam1)
{
    char[16] Result;

    StrCopy( ref Result, uParam0, 16 );
    PRINTSTRING( "-----> Unappended Mission Identifier: " );
    PRINTSTRING( ref Result );
    PRINTNL();
    switch (uParam1)
    {
        case 2:
        switch (g_U38705)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            default:
            PRINTSTRING( "----------------> g_whichStubbsMission value = " );
            PRINTINT( g_U38705 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Stubbs Oddjobs Proc subpart identifier error" );
        }
        break;
        case 8:
        switch (g_U38760)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> GLOBAL_MISSION_NAME_INDEX value = " );
            PRINTINT( g_U38760 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Angus I Want One of Those Proc subpart identifier error" );
        }
        break;
    }
    PRINTSTRING( "-----> Appended Mission Identifier: " );
    PRINTSTRING( ref Result );
    PRINTNL();
    return Result;
}

void sub_9581(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

int sub_9764(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_9838( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_9838(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_9952(unknown uParam0)
{
    g_U10986 = g_U20913[uParam0]._fU8;
    if (g_U10986 >= 50000)
    {
        g_U10986 = sub_9998( g_U10986 );
    }
    return;
}

void sub_9998(unknown Result)
{
    return Result;
}

void sub_10030()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_10174(unknown uParam0)
{
    g_U94._fU68 = uParam0;
    return;
}

void sub_10274()
{
    sub_10283();
    return;
}

void sub_10283()
{
    int iVar2;
    int iVar3;

    iVar2 = 2;
    iVar3 = 2;
    sub_10314( iVar2, iVar3, "Contact_3" );
    return;
}

void sub_10314(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    sub_10329( uParam0, uParam1, uParam2 );
    uVar5 = g_U14838[uParam0]._fU160._fU76;
    g_U12306[uParam0]._fU24 = uVar5;
    if (g_U14838[uParam0]._fU160._fU8)
    {
        g_U15862[uParam1]._fU8[0]._fU0[5] = 0;
    }
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    return;
}

void sub_10329(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[64] cVar5;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    StrCopy( ref cVar5, "", 64 );
    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc not setup", 64);
        sub_10473( ref cVar5 );
        return;
    }
    if (g_U14838[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_10473( ref cVar5 );
        return;
    }
    sub_10758( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_11433( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_11467( iVar21, uParam1, iVar22, iVar23 );
    }
    else
    {
        iVar24 = -1;
        if (sub_13542( uParam0, ref iVar24 ))
        {
            sub_13619( iVar24, 60000, 60000 );
        }
    }
    return;
}

void sub_10473(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_10758(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 2;
    switch (uParam0)
    {
        case 2:
        iVar3 = 1;
        break;
        case 8:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 2)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U38775[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U38775[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_10886( 1, iVar4 );
            g_U38775[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_10886(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_11056( 0 );
    return;
}

void sub_11056(boolean bParam0)
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
        sub_11301();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_11301()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

int sub_11433(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return 0;
}

void sub_11467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_11492( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_11492(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_11604( uParam1, uParam2 );
        return;
    }
    if (g_U38472._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U38472._fU12[iParam0]._fU0 = 1;
    g_U38472._fU12[iParam0]._fU4 = 0;
    g_U38472._fU12[iParam0]._fU8 = 0;
    g_U38472._fU12[iParam0]._fU12 = uParam1;
    g_U38472._fU12[iParam0]._fU16 = uParam2;
    g_U38472._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U38472._fU12[iParam0]._fU28 = uParam4;
    g_U38472._fU12[iParam0]._fU32 = uParam5;
    sub_13313( iParam0, iParam3 );
    return;
}

void sub_11604(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_11627( uParam0 );
    sub_11874( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_12218( ref uVar4, 1 );
    sub_12246( ref uVar4, 0 );
    sub_12274( ref uVar4, 2 );
    sub_12304( ref uVar4 );
    return;
}

int sub_11627(unknown uParam0)
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
    sub_9838( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_11874(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_11896( uParam0, 0, iParam4 + 0 );
    sub_11896( uParam1, 1, iParam4 + 0 );
    sub_11896( uParam2, 2, iParam4 + 0 );
    sub_11896( uParam3, 3, iParam4 + 0 );
    sub_11896( 0, 4, iParam4 + 0 );
    sub_11896( 1, 5, iParam4 + 0 );
    sub_11896( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_11896(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_12218(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_12246(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_12274(int iParam0, unknown uParam1)
{
    sub_11896( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_12304(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_12374())
        {
            sub_8287( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_12501( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_8287( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_8036( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_8036( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_12374()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_8036( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_8287( I );
            return 1;
        }
    }
    return 0;
}

int sub_12501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_12566( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_12566(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_8036( 0, uParam0 );
        if (iVar14 == (sub_8036( 0, uParam6 )))
        {
            iVar15 = sub_8036( 3, uParam0 );
            if (iVar15 == (sub_8036( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_13313(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_13352( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_13352(int iParam0)
{
    int iVar3;

    iVar3 = sub_13361();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_13416();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_13361()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_13416()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_13542(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 2:
        (uParam1^) = 2;
        return 1;
        case 8:
        (uParam1^) = 3;
        return 1;
    }
    return 0;
}

void sub_13619(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15792[uParam0]._fU0 = 1;
    g_U15792[uParam0]._fU4 = iVar5 + iParam1;
    g_U15792[uParam0]._fU8 = uParam2;
    g_U15792[uParam0]._fU12 = 0;
    g_U15792[uParam0]._fU16 = 0;
    return;
}

void sub_13858(int iParam0)
{
    if (g_U94._fU68 == iParam0)
    {
        g_U94._fU68 = -1;
    }
    return;
}
