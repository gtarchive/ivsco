void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U101 = 0.40000000;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U132 = 1;
    l_U139 = 0;
    l_U146 = "EC1_PLOOK";
    l_U153 = "EC1_FLOOK";
    l_U160 = "EC1_ALOOK";
    l_U167 = "EC1_BYCOP";
    l_U174 = "EC1_ALLBY";
    l_U175 = 0;
    l_U262 = 2046537925;
    l_U263 = 1171614426;
    l_U264 = 1938952078;
    l_U265 = -183203150;
    l_U266 = -1175077216;
    l_U267 = -610224615;
    l_U268 = 6;
    l_U269 = 20;
    l_U270 = 21;
    ProtectedSet(l_U286, 1000);
    ProtectedSet(l_U287, 500);
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (HAS_DEATHARREST_EXECUTED())
    {
        l_U102 = 6;
    }
    sub_297();
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_328() ))
        {
            switch (l_U102)
            {
                case 0:
                sub_439();
                break;
                case 1:
                sub_9639();
                break;
                case 2:
                sub_10752();
                sub_12461();
                break;
                case 3:
                sub_10752();
                sub_13750();
                break;
                case 4:
                sub_10752();
                sub_15140();
                break;
                case 5:
                sub_10752();
                sub_18254();
                break;
                case 6:
                sub_19456();
                sub_20317();
                sub_20644();
                break;
            }
        }
    }
    return;
}

void sub_297()
{
    return;
}

void sub_328()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_439()
{
    switch (l_U107)
    {
        case 0:
        if (sub_490( "911" ))
        {
            l_U107 = 1;
        }
        break;
        case 1:
        if (sub_490( "911" ))
        {
            if (g_U9083 == 0)
            {
                sub_673( "Police_help", "ambul_help", "fire_help" );
                sub_751( "EC1_LINE1", "", 1 );
            }
            else
            {
                sub_4777( "EC1_ALLBY", "", 1 );
                sub_5000( ref l_U176, "EC1_ALLBY", ref l_U108 );
                l_U175 = 1;
                l_U109 = 3;
            }
            sub_5146( "EMERGENCY_OPERATOR" );
            while (l_U132)
            {
                WAIT( 0 );
                switch (l_U109)
                {
                    case 0:
                    l_U272 = sub_5237();
                    if (l_U272 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U102 = 6;
                        l_U132 = 0;
                    }
                    switch (sub_5334())
                    {
                        case -2:
                        CLEAR_PRINTS();
                        l_U102 = 6;
                        l_U132 = 0;
                        break;
                        case 1:
                        if (GET_CREATE_RANDOM_COPS())
                        {
                            sub_5000( ref l_U176, "EC1_COPCALL1", ref l_U108 );
                            l_U103 = 1;
                            l_U109 = 1;
                        }
                        else
                        {
                            sub_5000( ref l_U176, "EC1_BYCOP", ref l_U108 );
                            l_U103 = 1;
                            l_U175 = 1;
                            l_U109 = 3;
                        }
                        break;
                        case 2:
                        sub_5000( ref l_U176, "EC1_MEDCALL1", ref l_U108 );
                        l_U103 = 2;
                        l_U109 = 1;
                        break;
                        case 3:
                        sub_5000( ref l_U176, "EC1_FIRECALL", ref l_U108 );
                        l_U103 = 3;
                        l_U109 = 1;
                        break;
                    }
                    break;
                    case 1:
                    l_U272 = sub_5237();
                    if (l_U272 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U107 = 3;
                        l_U132 = 0;
                    }
                    sub_5000( ref l_U176, sub_5668(), ref l_U108 );
                    l_U109 = 2;
                    break;
                    case 2:
                    l_U272 = sub_5237();
                    if (l_U272 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U107 = 3;
                        l_U132 = 0;
                    }
                    if (NOT (COMPARE_STRING( sub_5668(), "EC1_LIBERT" )))
                    {
                        if (l_U103 == 1)
                        {
                            sub_5000( ref l_U176, "EC1_OFFICER", ref l_U108 );
                        }
                        else if (l_U103 == 2)
                        {
                            sub_5000( ref l_U176, "EC1_MEDIC", ref l_U108 );
                        }
                        else if (l_U103 == 3)
                        {
                            sub_5000( ref l_U176, "EC1_FIRE", ref l_U108 );
                        };;;
                    }
                    else
                    {
                        l_U175 = 1;
                        sub_5000( ref l_U176, "EC1_WASTE", ref l_U108 );
                    }
                    l_U109 = 3;
                    break;
                    case 3:
                    l_U272 = sub_5237();
                    if (l_U272 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U107 = 3;
                        l_U132 = 0;
                    }
                    sub_9307( ref l_U176, "", 1 );
                    sub_5146( "EMERGENCY_OPERATOR" );
                    l_U107 = 3;
                    l_U132 = 0;
                    break;
                }
            }
        }
        break;
        case 3:
        if (l_U175 == 0)
        {
            if (NOT sub_9523())
            {
                CLEAR_PRINTS();
                l_U102 = 1;
            }
        }
        else if (NOT sub_9523())
        {
            CLEAR_PRINTS();
            l_U102 = 6;
        }
        break;
    }
    return;
}

int sub_490(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U91._fU0 == 1005) AND (g_U91._fU508 >= 4))
    {
        if (g_U91._fU60 == 56)
        {
            return COMPARE_STRING( ref g_U91._fU128, uParam0 );
        }
    }
    return 0;
}

void sub_673(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U91._fU432[0], uParam0, 16 );
    StrCopy( ref g_U91._fU432[1], uParam1, 16 );
    StrCopy( ref g_U91._fU432[2], uParam2, 16 );
    return;
}

int sub_751(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U91._fU60;
    if (bParam2)
    {
        return sub_830( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 1, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        StrCopy( ref g_U91._fU224[1], uParam0, 16 );
        sub_2765( uVar23, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_830(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_900( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_900( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_328() )))
    {
        sub_900( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_1061() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1061() ))))
    {
        sub_900( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_900( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_1393()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_900( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_1393()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_2765( uParam0, ref g_U91._fU176 );
    sub_4146( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_4386( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_900(unknown uParam0)
{
    return;
}

void sub_1061()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1393()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_1450())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_1450()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_328() )))
    {
        sub_900( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_900( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_900( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_900( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_328() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1061() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1061(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_900( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1061() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_900( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_900( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_328() )))
    {
        sub_900( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_2765(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_4146(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_4386(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4777(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_830( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_2765( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_5000(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5146(unknown uParam0)
{
    StrCopy( ref g_U91._fU176, uParam0, 32 );
    return;
}

int sub_5237()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_5334()
{
    return g_U91._fU424;
}

string sub_5668()
{
    unknown uVar2;

    uVar2 = GET_SPEECH_FOR_EMERGENCY_SERVICE_CALL();
    if (COMPARE_STRING( uVar2, "STEIN" ))
    {
        return "EC1_STEIN";
    }
    else if (COMPARE_STRING( uVar2, "NORMY" ))
    {
        return "EC1_NORMY";
    }
    else if (COMPARE_STRING( uVar2, "STHBO" ))
    {
        return "EC1_STHBO";
    }
    else if (COMPARE_STRING( uVar2, "BOULE" ))
    {
        return "EC1_BOULE";
    }
    else if (COMPARE_STRING( uVar2, "CASGR" ))
    {
        return "EC1_CASGR";
    }
    else if (COMPARE_STRING( uVar2, "CASGC" ))
    {
        return "EC1_CASGC";
    }
    else if (COMPARE_STRING( uVar2, "CHISL" ))
    {
        return "EC1_CHISL";
    }
    else if (COMPARE_STRING( uVar2, "COISL" ))
    {
        return "EC1_COISL";
    }
    else if (COMPARE_STRING( uVar2, "MIDPW" ))
    {
        return "EC1_MIDPW";
    }
    else if (COMPARE_STRING( uVar2, "VASIH" ))
    {
        return "EC1_VASIH";
    }
    else if (COMPARE_STRING( uVar2, "MIDPA" ))
    {
        return "EC1_MIDPA";
    }
    else if (COMPARE_STRING( uVar2, "NOHOL" ))
    {
        return "EC1_NOHOL";
    }
    else if (COMPARE_STRING( uVar2, "EAHOL" ))
    {
        return "EC1_EAHOL";
    }
    else if (COMPARE_STRING( uVar2, "NORWO" ))
    {
        return "EC1_NORWO";
    }
    else if (COMPARE_STRING( uVar2, "STARJ" ))
    {
        return "EC1_STARJ";
    }
    else if (COMPARE_STRING( uVar2, "TMEQU" ))
    {
        return "EC1_TMEQU";
    }
    else if (COMPARE_STRING( uVar2, "WESMI" ))
    {
        return "EC1_WESMI";
    }
    else if (COMPARE_STRING( uVar2, "PUGAT" ))
    {
        return "EC1_PUGAT";
    }
    else if (COMPARE_STRING( uVar2, "EASON" ))
    {
        return "EC1_EASON";
    }
    else if (COMPARE_STRING( uVar2, "THPRES" ))
    {
        return "EC1_THPRES";
    }
    else if (COMPARE_STRING( uVar2, "HATGA" ))
    {
        return "EC1_HATGA";
    }
    else if (COMPARE_STRING( uVar2, "LANCE" ))
    {
        return "EC1_LANCE";
    }
    else if (COMPARE_STRING( uVar2, "SUFFO" ))
    {
        return "EC1_SUFFO";
    }
    else if (COMPARE_STRING( uVar2, "LITAL" ))
    {
        return "EC1_LITAL";
    }
    else if (COMPARE_STRING( uVar2, "CITH" ))
    {
        return "EC1_CITYH";
    }
    else if (COMPARE_STRING( uVar2, "CHITO" ))
    {
        return "EC1_CHITO";
    }
    else if (COMPARE_STRING( uVar2, "LOWEA" ))
    {
        return "EC1_LOEA";
    }
    else if (COMPARE_STRING( uVar2, "FISSN" ))
    {
        return "EC1_FISSN";
    }
    else if (COMPARE_STRING( uVar2, "FISSO" ))
    {
        return "EC1_FISSO";
    }
    else if (COMPARE_STRING( uVar2, "THXCH" ))
    {
        return "EC1_THXCH";
    }
    else if (COMPARE_STRING( uVar2, "LANCA" ))
    {
        return "EC1_LANCA";
    }
    else if (COMPARE_STRING( uVar2, "MIDPE" ))
    {
        return "EC1_MIDPE";
    }
    else if (COMPARE_STRING( uVar2, "LEFWO" ))
    {
        return "EC1_LEFWO";
    }
    else if (COMPARE_STRING( uVar2, "ESHOO" ))
    {
        return "EC1_ESHOO";
    }
    else if (COMPARE_STRING( uVar2, "BOAB" ))
    {
        return "EC1_BOAB";
    }
    else if (COMPARE_STRING( uVar2, "LTBAY" ))
    {
        return "EC1_LTBAY";
    }
    else if (COMPARE_STRING( uVar2, "INSTI" ))
    {
        return "EC1_INSTI";
    }
    else if (COMPARE_STRING( uVar2, "HAPIN" ))
    {
        return "EC1_HAPIN";
    }
    else if (COMPARE_STRING( uVar2, "WESDY" ))
    {
        return "EC1_WESDY";
    }
    else if (COMPARE_STRING( uVar2, "ALDCI" ))
    {
        return "EC1_ALDCI";
    }
    else if (COMPARE_STRING( uVar2, "ACTRR" ))
    {
        return "EC1_ACTRR";
    }
    else if (COMPARE_STRING( uVar2, "TUDOR" ))
    {
        return "EC1_TUDOR";
    }
    else if (COMPARE_STRING( uVar2, "PORTU" ))
    {
        return "EC1_PORTU";
    }
    else if (COMPARE_STRING( uVar2, "ACTIP" ))
    {
        return "EC1_ACTIP";
    }
    else if (COMPARE_STRING( uVar2, "THTRI" ))
    {
        return "EC1_THTRI";
    }
    else if (COMPARE_STRING( uVar2, "ROTTH" ))
    {
        return "EC1_ROTTH";
    }
    else if (COMPARE_STRING( uVar2, "DOWTW" ))
    {
        return "EC1_DOWTW";
    }
    else if (COMPARE_STRING( uVar2, "FIREP" ))
    {
        return "EC1_FIREP";
    }
    else if (COMPARE_STRING( uVar2, "HOBEH" ))
    {
        return "EC1_HOBEH";
    }
    else if (COMPARE_STRING( uVar2, "EISLC" ))
    {
        return "EC1_EISLC";
    }
    else if (COMPARE_STRING( uVar2, "MEADP" ))
    {
        return "EC1_MEADP";
    }
    else if (COMPARE_STRING( uVar2, "CERHE" ))
    {
        return "EC1_CERHE";
    }
    else if (COMPARE_STRING( uVar2, "SCHOL" ))
    {
        return "EC1_SCHOL";
    }
    else if (COMPARE_STRING( uVar2, "BEECW" ))
    {
        return "EC1_BEECW";
    }
    else if (COMPARE_STRING( uVar2, "FRANI" ))
    {
        return "EC1_FRANI";
    }
    else if (COMPARE_STRING( uVar2, "SUTHS" ))
    {
        return "EC1_SUTHS";
    }
    else if (COMPARE_STRING( uVar2, "FORSI" ))
    {
        return "EC1_FORSI";
    }
    else if (COMPARE_STRING( uVar2, "NRTGA" ))
    {
        return "EC1_NRTGA";
    }
    else if (COMPARE_STRING( uVar2, "CHAPO" ))
    {
        return "EC1_CHSPT";
    }
    else if (COMPARE_STRING( uVar2, "MEADH" ))
    {
        return "EC1_MEADH";
    }
    else if (COMPARE_STRING( uVar2, "FIISL" ))
    {
        return "EC1_FIISL";
    }
    else if (COMPARE_STRING( uVar2, "BERCH" ))
    {
        return "EC1_BERCH";
    }
    else if (COMPARE_STRING( uVar2, "WILLI" ))
    {
        return "EC1_WILLI";
    }
    else if (COMPARE_STRING( uVar2, "BEGGA" ))
    {
        return "EC1_BEGGA";
    }
    else if (COMPARE_STRING( uVar2, "OUTL" ))
    {
        return "EC1_OUTL";
    }
    else if (COMPARE_STRING( uVar2, "ANGBY" ))
    {
        return "EC1_ANGBY";
    }
    else if (COMPARE_STRING( uVar2, "NOROL" ))
    {
        return "EC1_NOROL";
    }
    else if (COMPARE_STRING( uVar2, "JEFFH" ))
    {
        return "EC1_JEFFH";
    }
    else if (COMPARE_STRING( uVar2, "ACTBY" ))
    {
        return "EC1_ACTBY";
    }
    else if (COMPARE_STRING( uVar2, "FROGT" ))
    {
        return "EC1_FROGT";
    }
    else if (COMPARE_STRING( uVar2, "BRBRO" ))
    {
        return "EC1_BRBRO";
    }
    else if (COMPARE_STRING( uVar2, "BRALG" ))
    {
        return "EC1_BRALG";
    }
    else if (COMPARE_STRING( uVar2, "BREBB" ))
    {
        return "EC1_BREBB";
    }
    else if (COMPARE_STRING( uVar2, "BRDBB" ))
    {
        return "EC1_BRDBB";
    }
    else if (COMPARE_STRING( uVar2, "NOWOB" ))
    {
        return "EC1_NOWOB";
    }
    else if (COMPARE_STRING( uVar2, "HIBRG" ))
    {
        return "EC1_HIBRG";
    }
    else if (COMPARE_STRING( uVar2, "BOTUN" ))
    {
        return "EC1_BOTUN";
    }
    else if (COMPARE_STRING( uVar2, "LEAPER" ))
    {
        return "EC1_LEAPER";
    }
    else
    {
        return "EC1_LIBERT";
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return "EC1_LIBERT";
}

int sub_9307(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_830( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_2765( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_9523()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

void sub_9639()
{
    if (l_U103 == 1)
    {
        sub_9660();
    }
    else if (l_U103 == 2)
    {
        sub_10011();
    }
    else if (l_U103 == 3)
    {
        sub_10403();
    };;;
    return;
}

void sub_9660()
{
    GET_CHAR_COORDINATES( sub_1061(), ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
    l_U129 = GET_NAME_OF_ZONE( l_U115._fU0, l_U115._fU4, l_U115._fU8 );
    switch (l_U105)
    {
        case 0:
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U262 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U265 );
        l_U105 = 1;
        break;
        case 1:
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U262 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U265 );
        if (HAS_MODEL_LOADED( l_U262 ))
        {
            if (HAVE_ANIMS_LOADED( "missemergencycall" ))
            {
                if (HAS_MODEL_LOADED( l_U265 ))
                {
                    l_U105 = 2;
                }
            }
        }
        break;
        case 2:
        l_U105 = 3;
        break;
        case 3:
        l_U102 = 2;
        break;
    }
    return;
}

void sub_10011()
{
    GET_CHAR_COORDINATES( sub_1061(), ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
    l_U129 = GET_NAME_OF_ZONE( l_U115._fU0, l_U115._fU4, l_U115._fU8 );
    switch (l_U105)
    {
        case 0:
        if (g_U9149 == 0)
        {
            PRINT_HELP( "EmergenHelp" );
            g_U9149 = 1;
        }
        REQUEST_MODEL( l_U263 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U266 );
        l_U105 = 1;
        break;
        case 1:
        REQUEST_MODEL( l_U263 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U266 );
        if (HAS_MODEL_LOADED( l_U263 ))
        {
            if (HAVE_ANIMS_LOADED( "missemergencycall" ))
            {
                if (HAS_MODEL_LOADED( l_U266 ))
                {
                    l_U105 = 2;
                }
            }
        }
        break;
        case 2:
        l_U105 = 3;
        break;
        case 3:
        l_U102 = 2;
        break;
    }
    return;
}

void sub_10403()
{
    GET_CHAR_COORDINATES( sub_1061(), ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
    l_U129 = GET_NAME_OF_ZONE( l_U115._fU0, l_U115._fU4, l_U115._fU8 );
    switch (l_U105)
    {
        case 0:
        REQUEST_MODEL( l_U264 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U267 );
        l_U105 = 1;
        break;
        case 1:
        REQUEST_MODEL( l_U264 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U267 );
        if (HAS_MODEL_LOADED( l_U264 ))
        {
            if (HAVE_ANIMS_LOADED( "missemergencycall" ))
            {
                if (HAS_MODEL_LOADED( l_U267 ))
                {
                    l_U105 = 2;
                }
            }
        }
        break;
        case 2:
        l_U105 = 3;
        break;
        case 3:
        l_U102 = 2;
        break;
    }
    return;
}

void sub_10752()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( l_U277 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U277 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U277, sub_1061(), 30.00000000, 30.00000000, 0 ))
            {
                if (IS_CHAR_SHOOTING( sub_1061() ))
                {
                    l_U102 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U277 ))
            {
                l_U102 = 6;
            }
            if (NOT (IS_CHAR_INJURED( l_U277 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1061(), l_U277, 150.00000000, 150.00000000, 0 )))
                {
                    if (l_U102 == 3)
                    {
                        l_U102 = 6;
                    }
                }
                if (IS_CHAR_IN_MELEE_COMBAT( l_U277 ))
                {
                    l_U102 = 6;
                }
            }
        }
        else
        {
            l_U102 = 6;
        }
    }
    if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1061() ))
    {
        GET_CAR_CHAR_IS_USING( sub_1061(), ref l_U276 );
        if (((l_U276 == l_U273) || (l_U276 == l_U274)) || (l_U276 == l_U275))
        {
            l_U102 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U273 ))
    {
        if (IS_CHAR_IN_CAR( sub_1061(), l_U273 ))
        {
            l_U102 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U278 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U278 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U278, sub_1061(), 30.00000000, 30.00000000, 0 ))
            {
                if (IS_CHAR_SHOOTING( sub_1061() ))
                {
                    l_U102 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U278 ))
            {
                l_U102 = 6;
            }
            if (NOT (IS_CHAR_INJURED( l_U278 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1061(), l_U278, 150.00000000, 150.00000000, 0 )))
                {
                    if (l_U102 == 4)
                    {
                        l_U102 = 6;
                    }
                }
                if (IS_CHAR_IN_MELEE_COMBAT( l_U278 ))
                {
                    l_U102 = 6;
                }
            }
        }
        else
        {
            l_U102 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U274 ))
    {
        if (IS_CHAR_IN_CAR( sub_1061(), l_U274 ))
        {
            l_U102 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U279 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U279 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U279, sub_1061(), 30.00000000, 30.00000000, 0 ))
            {
                if (IS_CHAR_SHOOTING( sub_1061() ))
                {
                    l_U102 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U279 ))
            {
                l_U102 = 6;
            }
            if (NOT (IS_CHAR_INJURED( l_U279 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1061(), l_U279, 150.00000000, 150.00000000, 0 )))
                {
                    if (l_U102 == 5)
                    {
                        l_U102 = 6;
                    }
                }
                if (IS_CHAR_IN_MELEE_COMBAT( l_U279 ))
                {
                    l_U102 = 6;
                }
            }
        }
        else
        {
            l_U102 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        if (IS_CHAR_IN_CAR( sub_1061(), l_U275 ))
        {
            l_U102 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U280 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U280 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U280 )))
            {
                if (IS_CHAR_IN_MELEE_COMBAT( l_U280 ))
                {
                    l_U102 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U280 ))
            {
                l_U102 = 6;
            }
        }
        else
        {
            l_U102 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        GET_CAR_COORDINATES( l_U275, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((GET_NUMBER_OF_FIRES_IN_RANGE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000 )) > 0)
        {
            l_U102 = 6;
        }
    }
    if (NOT HAS_CUTSCENE_FINISHED())
    {
        sub_11827();
        l_U102 = 6;
    }
    if (((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( -1, 1, 1 )) > 0) AND (NOT (sub_12096( sub_1061() ))))
    {
        sub_11827();
        l_U102 = 6;
    }
    if (l_U102 > 0)
    {
        if (g_U9083 == 1)
        {
            sub_11827();
            g_U9083 = 0;
            l_U102 = 6;
        }
    }
    sub_12414();
    return;
}

void sub_11827()
{
    if (NOT (IS_CHAR_INJURED( l_U277 )))
    {
        DELETE_CHAR( ref l_U277 );
    }
    if (NOT (IS_CHAR_INJURED( l_U278 )))
    {
        DELETE_CHAR( ref l_U278 );
    }
    if (NOT (IS_CHAR_INJURED( l_U279 )))
    {
        DELETE_CHAR( ref l_U279 );
    }
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        DELETE_CHAR( ref l_U280 );
    }
    if (DOES_VEHICLE_EXIST( l_U273 ))
    {
        DELETE_CAR( ref l_U273 );
    }
    if (DOES_VEHICLE_EXIST( l_U274 ))
    {
        DELETE_CAR( ref l_U274 );
    }
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        DELETE_CAR( ref l_U275 );
    }
    if (DOES_GROUP_EXIST( l_U284 ))
    {
        REMOVE_GROUP( l_U284 );
    }
    return;
}

int sub_12096(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_12160( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12160(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_12414()
{
    if (sub_490( "911" ))
    {
        l_U102 = 6;
    }
    return;
}

void sub_12461()
{
    GET_CHAR_COORDINATES( sub_1061(), ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
    GET_NTH_CLOSEST_CAR_NODE( l_U115._fU0, l_U115._fU4, l_U115._fU8, 40, ref l_U121._fU0, ref l_U121._fU4, ref l_U121._fU8 );
    GET_NTH_CLOSEST_CAR_NODE( l_U115._fU0, l_U115._fU4, l_U115._fU8, 5, ref l_U118._fU0, ref l_U118._fU4, ref l_U118._fU8 );
    if (l_U139 > 15)
    {
        l_U102 = 6;
    }
    if (l_U103 == 1)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER( l_U262, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U273, ref l_U280, ref l_U277 ))
        {
            if (IS_VEH_DRIVEABLE( l_U273 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U280 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U280 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U280, 0 );
                    TASK_CAR_DRIVE_TO_COORD( l_U280, l_U273, l_U118._fU0, l_U118._fU4, l_U118._fU8, 8.00000000, 0, l_U262, 2, 5.00000000, 20 );
                    SWITCH_CAR_SIREN( l_U273, 1 );
                    SET_INFORM_RESPECTED_FRIENDS( l_U280, 999, 999 );
                    FORCE_CAR_LIGHTS( l_U273, 2 );
                    SET_HAS_BEEN_OWNED_BY_PLAYER( l_U273, 0 );
                    LOCK_CAR_DOORS( l_U273, 1 );
                    sub_12865();
                }
                if (NOT (IS_CHAR_INJURED( l_U277 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U277 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U277, 0 );
                    SET_INFORM_RESPECTED_FRIENDS( l_U277, 999, 999 );
                }
            }
            GET_GAME_TIMER( ref l_U133 );
            l_U102 = 3;
        }
        else
        {
            WAIT( 300 );
            l_U139++;
        }
    }
    else if (l_U103 == 2)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER( l_U263, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U274, ref l_U280, ref l_U278 ))
        {
            if (IS_VEH_DRIVEABLE( l_U274 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U280 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U280 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U280, 0 );
                    TASK_CAR_DRIVE_TO_COORD( l_U280, l_U274, l_U118._fU0, l_U118._fU4, l_U118._fU8, 8.00000000, 0, l_U263, 2, 5.00000000, 20 );
                    SWITCH_CAR_SIREN( l_U274, 1 );
                    FORCE_CAR_LIGHTS( l_U274, 2 );
                    SET_HAS_BEEN_OWNED_BY_PLAYER( l_U274, 0 );
                    LOCK_CAR_DOORS( l_U274, 1 );
                    sub_12865();
                }
                if (NOT (IS_CHAR_INJURED( l_U278 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U278 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U278, 0 );
                }
            }
            GET_GAME_TIMER( ref l_U133 );
            l_U102 = 4;
        }
        else
        {
            WAIT( 300 );
            l_U139++;
        }
    }
    else if (l_U103 == 3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER( l_U264, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U275, ref l_U280, ref l_U279 ))
        {
            if (IS_VEH_DRIVEABLE( l_U275 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U280 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U280 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U280, 0 );
                    TASK_CAR_DRIVE_TO_COORD( l_U280, l_U275, l_U118._fU0, l_U118._fU4, l_U118._fU8, 8.00000000, 0, l_U264, 2, 5.00000000, 20 );
                    SWITCH_CAR_SIREN( l_U275, 1 );
                    FORCE_CAR_LIGHTS( l_U275, 2 );
                    SET_HAS_BEEN_OWNED_BY_PLAYER( l_U275, 0 );
                    LOCK_CAR_DOORS( l_U275, 1 );
                    sub_12865();
                }
                if (NOT (IS_CHAR_INJURED( l_U279 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U279 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U279, 0 );
                }
            }
            GET_GAME_TIMER( ref l_U133 );
            l_U102 = 5;
        }
        else
        {
            WAIT( 300 );
            l_U139++;
        }
    };;;
    return;
}

void sub_12865()
{
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        if (DOES_GROUP_EXIST( l_U284 ))
        {
            REMOVE_GROUP( l_U284 );
        }
        CREATE_GROUP( 0, ref l_U284, 1 );
        SET_GROUP_LEADER( l_U284, l_U280 );
        SET_GROUP_FOLLOW_STATUS( l_U284, 1 );
    }
    return;
}

void sub_13750()
{
    if (NOT (IS_CHAR_INJURED( l_U277 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U280 )))
        {
            if (NOT (IS_CAR_DEAD( l_U273 )))
            {
                if (IS_VEH_DRIVEABLE( l_U273 ))
                {
                    switch (l_U104)
                    {
                        case 0:
                        GET_GAME_TIMER( ref l_U134 );
                        l_U135 = l_U134 - l_U133;
                        if (l_U135 > 100000)
                        {
                            sub_13941();
                        }
                        else if (LOCATE_CAR_2D( l_U273, l_U118._fU0, l_U118._fU4, 10.00000000, 10.00000000, 0 ))
                        {
                            TASK_CAR_MISSION( l_U280, l_U273, 0, 5, 1.00000000, 2, 5, 20 );
                            l_U104 = 1;
                        }
                        break;
                        case 1:
                        GET_CAR_SPEED( l_U273, ref l_U128 );
                        if (l_U128 < 2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U273, 0.00000000, 4.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                            TASK_LEAVE_CAR( l_U277, l_U273 );
                            l_U104 = 2;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_IN_CAR( l_U277, l_U273 )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U277, "EMERG_ARRIVE_AT_SCENE", "M_Y_COP_BLACK", 1, 1, 2 );
                            OPEN_SEQUENCE_TASK( ref l_U285 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U124._fU0, l_U124._fU4, l_U124._fU8, 2, -2, 2.00000000 );
                            TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "idle_adjust_hat", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U285 );
                            TASK_PERFORM_SEQUENCE( l_U277, l_U285 );
                            CLEAR_SEQUENCE_TASK( l_U285 );
                            l_U104 = 3;
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U277, 29, ref l_U271 );
                        if (l_U271 == 7)
                        {
                            l_U104 = 4;
                        }
                        break;
                        case 4:
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U277, "EMERG_PRANK_CALL", "M_Y_COP_BLACK", 1, 1, 0 );
                        l_U271 = 0;
                        l_U104 = 5;
                        break;
                        case 5:
                        GET_SCRIPT_TASK_STATUS( l_U277, 80, ref l_U271 );
                        if (l_U271 == 7)
                        {
                            SWITCH_CAR_SIREN( l_U273, 0 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( l_U277, l_U273, -2, 0 );
                            GET_GAME_TIMER( ref l_U133 );
                            l_U104 = 6;
                        }
                        break;
                        case 6:
                        if (IS_CHAR_IN_CAR( l_U277, l_U273 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U277, 1 );
                            TASK_STAND_STILL( l_U277, -2 );
                            SET_CHAR_KEEP_TASK( l_U280, 1 );
                            TASK_CAR_DRIVE_WANDER( l_U280, l_U273, 10, 6 );
                            l_U102 = 6;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U134 );
                            l_U135 = l_U134 - l_U133;
                            if (l_U135 > 50000)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U277, l_U284 )))
                                {
                                    SET_GROUP_MEMBER( l_U284, l_U277 );
                                }
                                l_U102 = 6;
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_13941()
{
    l_U104 = 0;
    if (NOT (IS_CHAR_DEAD( l_U277 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U277 );
        l_U277 = nil;
    }
    if (NOT (IS_CHAR_DEAD( l_U278 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U278 );
        l_U278 = nil;
    }
    if (NOT (IS_CHAR_DEAD( l_U279 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U279 );
        l_U279 = nil;
    }
    if (NOT (IS_CHAR_DEAD( l_U280 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U280 );
        l_U280 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U273 ))
    {
        SWITCH_CAR_SIREN( l_U273, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U273 );
        l_U273 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U274 ))
    {
        SWITCH_CAR_SIREN( l_U274, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U274 );
        l_U274 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        SWITCH_CAR_SIREN( l_U275, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
        l_U275 = nil;
    }
    l_U102 = 2;
    return;
}

void sub_15140()
{
    if (NOT (IS_CHAR_INJURED( l_U278 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U280 )))
        {
            if (NOT (IS_CAR_DEAD( l_U274 )))
            {
                if (IS_VEH_DRIVEABLE( l_U274 ))
                {
                    sub_15221( 2 );
                    switch (l_U104)
                    {
                        case 0:
                        GET_GAME_TIMER( ref l_U134 );
                        l_U135 = l_U134 - l_U133;
                        if (l_U135 > 100000)
                        {
                            sub_13941();
                        }
                        else if (LOCATE_CAR_2D( l_U274, l_U118._fU0, l_U118._fU4, 10.00000000, 10.00000000, 0 ))
                        {
                            TASK_CAR_MISSION( l_U280, l_U274, 0, 5, 1.00000000, 2, 5, 20 );
                            l_U104 = 1;
                        }
                        break;
                        case 1:
                        GET_CAR_SPEED( l_U274, ref l_U128 );
                        if (l_U128 < 2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U274, 0.00000000, 4.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                            TASK_LEAVE_CAR( l_U278, l_U274 );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U130 );
                            l_U104 = 2;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_IN_CAR( l_U278, l_U274 )))
                        {
                            if (l_U130 == 0)
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_ARRIVE_AT_SCENE", "M_Y_PMEDIC_CHINESE", 1, 1, 2 );
                            }
                            else
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_ARRIVE_AT_SCENE", "M_Y_PMEDIC_BLACK", 1, 1, 2 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U285 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U124._fU0, l_U124._fU4, l_U124._fU8, 2, -2, 2.00000000 );
                            TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "idle_adjust_hat", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U285 );
                            TASK_PERFORM_SEQUENCE( l_U278, l_U285 );
                            CLEAR_SEQUENCE_TASK( l_U285 );
                            l_U104 = 3;
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U278, 29, ref l_U271 );
                        if (l_U271 == 7)
                        {
                            l_U104 = 4;
                        }
                        break;
                        case 4:
                        if (l_U130 == 0)
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_PRANK_CALL", "M_Y_PMEDIC_CHINESE", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_PRANK_CALL", "M_Y_PMEDIC_BLACK", 1, 1, 0 );
                        }
                        l_U271 = 0;
                        l_U104 = 5;
                        break;
                        case 5:
                        SWITCH_CAR_SIREN( l_U274, 0 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U278, l_U274, -2, 0 );
                        GET_GAME_TIMER( ref l_U133 );
                        l_U104 = 6;
                        break;
                        case 6:
                        if (IS_CHAR_IN_CAR( l_U278, l_U274 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U278, 1 );
                            TASK_STAND_STILL( l_U278, -2 );
                            SET_CHAR_KEEP_TASK( l_U280, 1 );
                            TASK_CAR_DRIVE_WANDER( l_U280, l_U274, 10, 6 );
                            l_U102 = 6;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U134 );
                            l_U135 = l_U134 - l_U133;
                            if (l_U135 > 50000)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U278, l_U284 )))
                                {
                                    SET_GROUP_MEMBER( l_U284, l_U278 );
                                }
                                l_U102 = 6;
                            }
                        }
                        break;
                        case 7: break;
                    }
                }
            }
        }
    }
    return;
}

void sub_15221(int iParam0)
{
    if (iParam0 == 2)
    {
        if (IS_VEH_DRIVEABLE( l_U274 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U278 )))
            {
                if (l_U106 > 0)
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_1061() ))
                    {
                        CLEAR_CHAR_TASKS( l_U278 );
                        l_U106 = 6;
                    }
                }
                switch (l_U106)
                {
                    case 0:
                    if (sub_15397())
                    {
                        CLEAR_CHAR_TASKS( l_U278 );
                        PRINT_HELP_WITH_NUMBER( "emerg_cost", sub_15510() );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U130 );
                        l_U104 = 7;
                        l_U106 = 1;
                    }
                    break;
                    case 1:
                    if (NOT (IS_GROUP_MEMBER( l_U278, sub_15659() )))
                    {
                        if (l_U130 == 0)
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_MEDIC_SEES_P", "M_Y_PMEDIC_CHINESE", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_MEDIC_SEES_P", "M_Y_PMEDIC_BLACK", 1, 1, 0 );
                        }
                        SET_GROUP_SEPARATION_RANGE( sub_15659(), 30.00000000 );
                        SET_GROUP_MEMBER( sub_15659(), l_U278 );
                        SET_GROUP_FORMATION( sub_15659(), 1 );
                        SET_GROUP_FORMATION_SPACING( sub_15659(), 0.50000000 );
                        GET_GAME_TIMER( ref l_U112 );
                        l_U106 = 2;
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref l_U113 );
                    l_U114 = l_U113 - l_U112;
                    if (sub_15955() == 0)
                    {
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U278, sub_1061(), 1.50000000, 1.50000000, 10.00000000, 0 ))
                        {
                            if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_328() ))
                            {
                                if (IS_SCORE_GREATER( sub_328(), sub_15510() ))
                                {
                                    if (l_U130 == 0)
                                    {
                                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_MEDIC_HEALS_P", "M_Y_PMEDIC_CHINESE", 1, 1, 0 );
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U278, "EMERG_MEDIC_HEALS_P", "M_Y_PMEDIC_BLACK", 1, 1, 0 );
                                    }
                                    SET_PLAYER_CONTROL( sub_328(), 0 );
                                    l_U106 = 3;
                                }
                                else if (NOT (IS_GROUP_MEMBER( l_U278, sub_15659() )))
                                {
                                    l_U106 = 6;
                                }
                                if (l_U114 > 50000)
                                {
                                    if (IS_GROUP_MEMBER( l_U278, sub_15659() ))
                                    {
                                        REMOVE_CHAR_FROM_GROUP( l_U278 );
                                    }
                                    l_U106 = 6;
                                }
                            }
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U278, sub_15659() )))
                        {
                            l_U106 = 6;
                        }
                        if (l_U114 > 50000)
                        {
                            if (IS_GROUP_MEMBER( l_U278, sub_15659() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U278 );
                            }
                            l_U106 = 6;
                        }
                    }
                    else
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "emerg_spook" );
                        if (IS_GROUP_MEMBER( l_U278, sub_15659() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U278 );
                        }
                        l_U106 = 6;
                    }
                    break;
                    case 3:
                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_1061(), l_U278 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U278, sub_1061() );
                    l_U106 = 4;
                    break;
                    case 4:
                    GET_SCRIPT_TASK_STATUS( sub_1061(), 34, ref l_U271 );
                    if (l_U271 == 7)
                    {
                        l_U106 = 5;
                    }
                    break;
                    case 5:
                    ADD_SCORE( sub_328(), -sub_15510() );
                    INCREMENT_INT_STAT( 102, sub_15510() );
                    SET_CHAR_MONEY( l_U278, sub_15510() );
                    SET_CHAR_HEALTH( sub_1061(), sub_16719() );
                    sub_16781();
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U278, "Medic_health_inject", "Missemergencycall", 8.00000000, 0, 1, 1, 0, -2 );
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1061(), "player_health_recieve", "Missemergencycall", 8.00000000, 0, 1, 1, 0, -2 );
                    l_U106 = 6;
                    break;
                    case 6:
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U278, "Missemergencycall", "Medic_health_inject" )))
                    {
                        SET_PLAYER_CONTROL( sub_328(), 1 );
                        if (IS_GROUP_MEMBER( l_U278, sub_15659() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U278 );
                        }
                        l_U104 = 5;
                        l_U106 = 7;
                    }
                    break;
                    case 7: break;
                }
            }
        }
    }
    return;
}

int sub_15397()
{
    if (NOT (IS_CHAR_INJURED( l_U278 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1061() )))
        {
            GET_CHAR_HEALTH( sub_1061(), ref l_U111 );
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U278, sub_1061(), 40.00000000, 40.00000000, 40.00000000, 0 ))
            {
                if ((l_U111 < 175) AND (IS_SCORE_GREATER( sub_328(), sub_15510() )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_15510()
{
    int iVar2;

    GET_CHAR_HEALTH( sub_1061(), ref iVar2 );
    return (ProtectedGet(l_U286) - (iVar2 * 5)) + ProtectedGet(l_U287);
}

void sub_15659()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_15955()
{
    if (NOT (IS_CHAR_INJURED( l_U278 )))
    {
        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_328(), l_U278 ))
        {
            return 1;
        }
        if (IS_PLAYER_TARGETTING_CHAR( sub_328(), l_U278 ))
        {
            return 1;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_1061() ))
        {
            return 1;
        }
        if (IS_CHAR_IN_MELEE_COMBAT( sub_1061() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_16719()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_1061() )))
    {
        GET_CHAR_HEALTH( sub_1061(), ref Result );
        Result = 200;
    }
    return Result;
}

void sub_16781()
{
    if (NOT (IS_CHAR_DEAD( sub_1061() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_1061() );
    }
    return;
}

void sub_18254()
{
    if (NOT (IS_CHAR_INJURED( l_U279 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U280 )))
        {
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                if (IS_VEH_DRIVEABLE( l_U275 ))
                {
                    switch (l_U104)
                    {
                        case 0:
                        GET_GAME_TIMER( ref l_U134 );
                        l_U135 = l_U134 - l_U133;
                        if (l_U135 > 100000)
                        {
                            sub_13941();
                        }
                        else if (LOCATE_CAR_2D( l_U275, l_U118._fU0, l_U118._fU4, 10.00000000, 10.00000000, 0 ))
                        {
                            TASK_CAR_MISSION( l_U280, l_U275, 0, 5, 1.00000000, 2, 5, 20 );
                            l_U104 = 1;
                        }
                        break;
                        case 1:
                        GET_CAR_SPEED( l_U275, ref l_U128 );
                        if (l_U128 < 2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U275, 0.00000000, 7.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                            TASK_LEAVE_CAR( l_U279, l_U275 );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U130 );
                            l_U104 = 2;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_IN_CAR( l_U279, l_U275 )))
                        {
                            if (l_U130 == 0)
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U279, "EMERG_ARRIVE_AT_SCENE", "M_M_FIRECHIEF", 1, 1, 2 );
                            }
                            else
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U279, "EMERG_ARRIVE_AT_SCENE", "M_Y_FIREMAN_BLACK", 1, 1, 2 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U285 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U124._fU0, l_U124._fU4, l_U124._fU8, 2, -2, 2.00000000 );
                            TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "idle_adjust_hat", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U285 );
                            TASK_PERFORM_SEQUENCE( l_U279, l_U285 );
                            CLEAR_SEQUENCE_TASK( l_U285 );
                            l_U104 = 3;
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U279, 29, ref l_U271 );
                        if (l_U271 == 7)
                        {
                            l_U104 = 4;
                        }
                        break;
                        case 4:
                        if (l_U130 == 0)
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U279, "EMERG_PRANK_CALL", "M_M_FIRECHIEF", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U279, "EMERG_PRANK_CALL", "M_Y_FIREMAN_BLACK", 1, 1, 0 );
                        }
                        l_U271 = 0;
                        l_U104 = 5;
                        break;
                        case 5:
                        SWITCH_CAR_SIREN( l_U275, 0 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U279, l_U275, -2, 0 );
                        GET_GAME_TIMER( ref l_U133 );
                        l_U104 = 6;
                        break;
                        case 6:
                        if (IS_CHAR_IN_CAR( l_U279, l_U275 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U279, 1 );
                            TASK_STAND_STILL( l_U279, -2 );
                            SET_CHAR_KEEP_TASK( l_U280, 1 );
                            TASK_CAR_DRIVE_WANDER( l_U280, l_U275, 10, 6 );
                            l_U102 = 6;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U134 );
                            l_U135 = l_U134 - l_U133;
                            if (l_U135 > 50000)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U279, l_U284 )))
                                {
                                    SET_GROUP_MEMBER( l_U284, l_U279 );
                                }
                                l_U102 = 6;
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_19456()
{
    if (NOT (IS_CHAR_INJURED( l_U277 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U277 )))
        {
            if (NOT (IS_CAR_DEAD( l_U273 )))
            {
                FORCE_CAR_LIGHTS( l_U273, 1 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U277 );
        l_U277 = nil;
    }
    if (NOT (IS_CHAR_INJURED( l_U278 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U278 )))
        {
            if (IS_GROUP_MEMBER( l_U278, sub_15659() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U278 );
            }
            if (NOT (IS_CAR_DEAD( l_U274 )))
            {
                FORCE_CAR_LIGHTS( l_U274, 1 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U278 );
        l_U278 = nil;
    }
    if (NOT (IS_CHAR_INJURED( l_U279 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U279 )))
        {
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                FORCE_CAR_LIGHTS( l_U275, 1 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U279 );
        l_U279 = nil;
    }
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        CLEAR_CHAR_TASKS( l_U280 );
        SET_CHAR_KEEP_TASK( l_U280, 1 );
        if (l_U102 == 3)
        {
            if (IS_VEH_DRIVEABLE( l_U273 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U280, l_U273, 10, 6 );
            }
        }
        if (l_U102 == 4)
        {
            if (IS_VEH_DRIVEABLE( l_U274 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U280, l_U274, 10, 6 );
            }
        }
        if (l_U102 == 5)
        {
            if (IS_VEH_DRIVEABLE( l_U275 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U280, l_U275, 10, 6 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U280 );
        l_U280 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U273 ))
    {
        SWITCH_CAR_SIREN( l_U273, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U273 );
        l_U273 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U274 ))
    {
        SWITCH_CAR_SIREN( l_U274, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U274 );
        l_U274 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        SWITCH_CAR_SIREN( l_U275, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
        l_U275 = nil;
    }
    if (HAS_MODEL_LOADED( l_U265 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U265 );
    }
    if (HAS_MODEL_LOADED( l_U266 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U266 );
    }
    if (HAS_MODEL_LOADED( l_U267 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U267 );
    }
    if (HAS_MODEL_LOADED( l_U262 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U262 );
    }
    if (HAS_MODEL_LOADED( l_U263 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U263 );
    }
    if (HAS_MODEL_LOADED( l_U264 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U264 );
    }
    if (DOES_GROUP_EXIST( l_U284 ))
    {
        REMOVE_GROUP( l_U284 );
    }
    return;
}

void sub_20317()
{
    if (l_U103 == 1)
    {
        if (HAVE_ANIMS_LOADED( "missemergencycall" ))
        {
            REMOVE_ANIMS( "missemergencycall" );
        }
        if (HAS_MODEL_LOADED( l_U265 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U265 );
        }
    }
    else if (l_U103 == 2)
    {
        if (HAVE_ANIMS_LOADED( "missemergencycall" ))
        {
            REMOVE_ANIMS( "missemergencycall" );
        }
        if (HAS_MODEL_LOADED( l_U266 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U266 );
        }
    }
    else if (l_U103 == 3)
    {
        if (HAVE_ANIMS_LOADED( "missemergencycall" ))
        {
            REMOVE_ANIMS( "missemergencycall" );
        }
        if (HAS_MODEL_LOADED( l_U267 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U267 );
        }
    };;;
    return;
}

void sub_20644()
{
    int I;

    for ( I = 0; I <= 19; I++ )
    {
        CLEAR_TEXT_LABEL( ref l_U176[I] );
    }
    l_U108 = 0;
    l_U109 = 0;
    l_U139 = 0;
    l_U132 = 1;
    l_U175 = 0;
    l_U107 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U102 = 0;
    return;
}
