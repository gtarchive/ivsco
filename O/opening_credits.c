void main()
{
    boolean bVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U202 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 1;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 1;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 1;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 1;
    l_U230 = 1;
    l_U231 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U879 = 90.00000000;
    l_U880 = 5.00000000;
    l_U881 = 25.00000000;
    l_U882 = 15.00000000;
    l_U883 = 2.00000000;
    l_U884 = 4.00000000;
    l_U885 = 0.50000000;
    l_U886 = 120.00000000;
    l_U887 = 0.00000000;
    l_U888 = 0.00000000;
    l_U890 = 1.00000000;
    l_U891 = 0.00000000;
    l_U892 = 1.00000000;
    l_U893 = 10.00000000;
    l_U894 = 30.00000000;
    l_U896 = 1.00000000;
    l_U898 = 1.00000000;
    l_U899 = 5.00000000;
    l_U900 = 1.00000000;
    l_U901 = 1.00000000;
    l_U906 = 0.30000000;
    l_U907 = 0.50000000;
    l_U908 = 50.00000000;
    l_U1114 = 0;
    l_U1115 = 0;
    l_U1116 = 0;
    l_U1117 = 0;
    l_U1118 = 1;
    l_U1119 = 0;
    l_U1120 = 0;
    l_U1121 = 0;
    l_U1122 = 0;
    l_U1123 = -1;
    l_U1124 = 0;
    l_U1125 = 0;
    l_U1126 = 0;
    l_U1127 = 0;
    l_U1128 = 0;
    l_U1129 = 0;
    l_U1130 = 0;
    l_U1801 = 0;
    l_U1802 = 0;
    l_U1815 = "introCutJustTitles";
    l_U1830 = 1.90000000;
    l_U1831 = 1.40000000;
    l_U1886 = 0.10000000;
    l_U1887 = 0.10000000;
    l_U1888 = 0.10000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_711();
        sub_3028();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    SET_MISSION_FLAG( 1 );
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
    # -NULL-0xc27cb1( 0 );
    LOAD_ADDITIONAL_TEXT( "E2INTAU", 6 );
    LOAD_ADDITIONAL_TEXT( "E2T1AUD", 0 );
    ENABLE_FOV_LOD_MULTIPLIER( 0 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 1 );
    FORCE_WEATHER_NOW( 1 );
    while (true)
    {
        CLEAR_AREA( -26.65000000, -321.26000000, 18.85000000, 1000.00000000, 1 );
        switch (l_U1806)
        {
            case 0:
            if (IS_PLAYER_PLAYING( sub_3376() ))
            {
                SET_PLAYER_CONTROL( sub_3376(), 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3804() );
                SET_CHAR_COORDINATES( sub_3804(), -28.72500000, -482.98400000, 13.78670000 );
                FORCE_WEATHER_NOW( 1 );
            }
            l_U1806++;
            break;
            case 1:
            if (NOT l_U1809)
            {
                REQUEST_STREAMED_TXD( l_U1815, 1 );
                LOAD_ALL_OBJECTS_NOW();
                while (NOT (HAS_STREAMED_TXD_LOADED( l_U1815 )))
                {
                    WAIT( 0 );
                }
                sub_12707();
                sub_13515();
                sub_13598();
                SETTIMERA( 0 );
                START_CUTSCENE_NOW( "E2_INT" );
                l_U1806++;
            }
            else
            {
                l_U1806 = 99;
            }
            break;
            case 2:
            if (HAS_CUTSCENE_LOADED())
            {
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    l_U1807 = GET_CUTSCENE_TIME();
                    l_U1808 = GET_CUTSCENE_SECTION_PLAYING();
                    if (l_U1808 < 10)
                    {
                        SET_TIME_OF_DAY( 11, 10 );
                    }
                    switch (l_U1808)
                    {
                        case 0:
                        if (l_U1807 < 5000)
                        {
                            sub_13919();
                            sub_14201();
                        }
                        else
                        {
                            sub_14306();
                            sub_14201();
                        }
                        if (l_U1807 > 2000)
                        {
                            if (l_U1807 < 6000)
                            {
                                sub_14656();
                                sub_14938();
                            }
                            else
                            {
                                sub_15043();
                                sub_14938();
                            }
                        }
                        break;
                        case 2:
                        if (l_U1807 > 23467)
                        {
                            if (l_U1941 == 0)
                            {
                                SHAKE_PAD_IN_CUTSCENE( 0, 1200, 100 );
                                l_U1941 = 1;
                            }
                        }
                        break;
                        case 3:
                        if (l_U1814 == 0)
                        {
                            SET_TIMECYCLE_MODIFIER( "harlemprojects" );
                            REQUEST_MODEL( 1208856469 );
                            REQUEST_CAR_RECORDING( 802 );
                            REQUEST_CAR_RECORDING( 820 );
                            l_U1814 = 1;
                        }
                        break;
                        case 4:
                        switch (l_U1947)
                        {
                            case 0:
                            CLEAR_TIMECYCLE_MODIFIER();
                            l_U1947 = 1;
                            break;
                            case 1:
                            if (l_U1807 > 4400)
                            {
                                l_U1947 = 2;
                            }
                            break;
                            case 2:
                            if (l_U1807 > 6000)
                            {
                                l_U1947 = 3;
                            }
                            break;
                            case 3:
                            if (l_U1807 > 6600)
                            {
                                l_U1947 = 4;
                            }
                            break;
                        }
                        break;
                        case 5:
                        switch (l_U1967)
                        {
                            case 0:
                            REQUEST_MODEL( -1188246269 );
                            REQUEST_MODEL( 2084514704 );
                            REQUEST_ANIMS( "AMB@BUSKER" );
                            if (HAS_MODEL_LOADED( 1208856469 ))
                            {
                                DELETE_CAR( ref l_U1942 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( 1127131465 );
                                l_U228 = 1;
                            }
                            SETTIMERA( 0 );
                            l_U1967 = 1;
                            break;
                            case 1:
                            if (l_U1807 > 4200)
                            {
                                if ((HAS_MODEL_LOADED( -1149743642 )) AND (l_U1978 == 0))
                                {
                                    l_U1978 = 1;
                                }
                            }
                            if (l_U1807 > 7500)
                            {
                                if (NOT (DOES_CHAR_EXIST( l_U1939 )))
                                {
                                    if (((HAVE_ANIMS_LOADED( "AMB@BUSKER" )) AND (HAS_MODEL_LOADED( 2084514704 ))) AND (HAS_MODEL_LOADED( -1188246269 )))
                                    {
                                        CREATE_CHAR( 26, -1188246269, -31.84870000, -396.42190000, 13.76660000, ref l_U1939, 1 );
                                        SET_CHAR_HEADING( l_U1939, 149.16640000 );
                                        SET_CHAR_COMPONENT_VARIATION( l_U1939, 0, 0, 0 );
                                        CREATE_OBJECT( 2084514704, -31.84870000, -396.42190000, 13.76660000, ref l_U1940, 1 );
                                        ATTACH_OBJECT_TO_PED( l_U1940, l_U1939, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
                                        TASK_PLAY_ANIM( l_U1939, "SAX_loop_B", "AMB@BUSKER", 10.00000000, 1, 0, 0, 0, -1 );
                                        SET_CHAR_IN_CUTSCENE( l_U1939, 1 );
                                    }
                                    else
                                    {
                                        SCRIPT_ASSERT( "shit didnt'; load" );
                                    }
                                }
                                if (NOT (IS_CAR_DEAD( l_U1968 )))
                                {
                                    SET_CAR_VISIBLE( l_U1968, 1 );
                                }
                            }
                            if ((l_U1807 > 5600) AND (l_U1988 == 0))
                            {
                                l_U1988 = 1;
                            }
                            sub_16251( l_U1968, 1.00000000 );
                            sub_30270();
                            break;
                        }
                        break;
                        case 6:
                        if (NOT (IS_CHAR_DEAD( sub_3804() )))
                        {
                            SET_CHAR_COORDINATES( sub_3804(), -26.65000000, -321.26000000, 18.85000000 );
                        }
                        switch (l_U1989)
                        {
                            case 0:
                            DELETE_CHAR( ref l_U1981[4] );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
                            DELETE_CHAR( ref l_U1948[7] );
                            DELETE_CHAR( ref l_U1948[8] );
                            DELETE_CHAR( ref l_U1948[9] );
                            if (NOT (IS_CAR_DEAD( l_U1968 )))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1968 );
                            }
                            sub_3074( 1 );
                            sub_31056();
                            CREATE_CAR( 1208856469, 0.00000000, 0.00000000, 0.00000000, ref l_U1968, 1 );
                            START_PLAYBACK_RECORDED_CAR( l_U1968, 820 );
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1968, 3500.00000000 );
                            SET_CAR_IN_CUTSCENE( l_U1968, 1 );
                            l_U228 = 1;
                            l_U1989 = 1;
                            break;
                            case 1:
                            sub_16251( l_U1968, 1.00000000 );
                            sub_30270();
                            break;
                        }
                        break;
                        case 7:
                        if (l_U1962 == 0)
                        {
                            REMOVE_ANIMS( "AMB@BUSKER" );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( 2084514704 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( -1188246269 );
                            DELETE_OBJECT( ref l_U1940 );
                            DELETE_CHAR( ref l_U1939 );
                            DELETE_CHAR( ref l_U1970[0] );
                            DELETE_CHAR( ref l_U1970[1] );
                            DELETE_CHAR( ref l_U1970[2] );
                            DELETE_CHAR( ref l_U1970[3] );
                            DELETE_CHAR( ref l_U1970[4] );
                            DELETE_CHAR( ref l_U1970[5] );
                            DELETE_CHAR( ref l_U1970[6] );
                            l_U1962 = 1;
                        }
                        sub_16251( l_U1968, 1.00000000 );
                        sub_30270();
                        break;
                        case 8:
                        sub_16251( l_U1968, 1.00000000 );
                        sub_30270();
                        if ((l_U1807 > 2500) AND (l_U2003 == 0))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1981[5] );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( 996267216 );
                            l_U2003 = 1;
                        }
                        if (l_U1807 > 12000)
                        {
                            if (l_U1813 == 0)
                            {
                                l_U1813 = 1;
                            }
                        }
                        break;
                        case 9:
                        if (l_U1811 == 0)
                        {
                            for ( l_U1938 = 0; l_U1938 <= 11; l_U1938++ )
                            {
                                DELETE_CHAR( ref l_U1990[l_U1938] );
                            }
                            for ( l_U1938 = 0; l_U1938 <= 5; l_U1938++ )
                            {
                                DELETE_CHAR( ref l_U1981[l_U1938] );
                            }
                            for ( l_U1938 = 0; l_U1938 <= 9; l_U1938++ )
                            {
                                DELETE_CHAR( ref l_U1948[l_U1938] );
                            }
                            MARK_MODEL_AS_NO_LONGER_NEEDED( -1149743642 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( -1064645793 );
                            sub_3074( 1 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( 1208856469 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1968 );
                            l_U1811 = 1;
                        }
                        if (NOT (IS_CHAR_DEAD( sub_3804() )))
                        {
                            SET_CHAR_COORDINATES( sub_3804(), -71.96730000, -225.74540000, 13.67770000 );
                        }
                        sub_16251( l_U1968, 1.00000000 );
                        sub_30270();
                        break;
                        case 10: break;
                        case 11:
                        if (NOT l_U1812)
                        {
                            SET_TIME_OF_DAY( 19, 10 );
                            l_U1812 = 1;
                        }
                        break;
                    }
                    if (sub_34898())
                    {
                        l_U1810 = 1;
                        l_U1806 = 99;
                    }
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "E2_INT" );
                sub_3074( 1 );
                PRINTSTRING( "Opening Credits - E2_INT finished and cleared" );
                PRINTNL();
                l_U1806 = 99;
            }
            break;
            case 99:
            PRINTSTRING( "Opening Credits - E2_INT skipped" );
            PRINTNL();
            bVar2 = false;
            while (NOT bVar2)
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING())
                    {
                        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                    }
                }
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                else
                {
                    bVar2 = true;
                }
            }
            sub_3028();
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_711()
{
    int iVar2;

    iVar2 = 0;
    sub_725( iVar2 );
    sub_2011( iVar2 );
    return;
}

void sub_725(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_734();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_910();
        sub_1118();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1243();
            sub_1295();
            g_U11063 = 1;
        }
    }
    sub_1388();
    sub_1527();
    uVar5 = sub_1640( uParam0 );
    sub_1918( uVar5, 0 );
    return;
}

void sub_734()
{
    g_U43588 = 0;
    g_U43628 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    return;
}

void sub_910()
{
    if (g_U10972)
    {
        return;
    }
    sub_937( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1058();
    }
    return;
}

void sub_937(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3--;
    g_U22960[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1058()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1118()
{
    sub_1127();
    return;
}

void sub_1127()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1243()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1295()
{
    sub_1304();
    return;
}

void sub_1304()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1388()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12382[J]._fU148[I]._fU36)
            {
                g_U12382[J]._fU28 = 1;
            }
            g_U12382[J]._fU148[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1527()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1549();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1549()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1640(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1871( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_1871(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1918(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2011(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2020();
    if (g_U0)
    {
        return;
    }
    if (g_U43133)
    {
        return;
    }
    if (g_U95._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12379)
    {
        return;
    }
    iVar3 = g_U14925[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12382[iParam0]._fU12)
    {
        return;
    }
    if (g_U10938._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2795())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_2861();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2020()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2058( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2058( 1, g_U575[I] )) != 0)
            {
                sub_2344( I );
            }
        }
    }
    if (NOT sub_2510())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_2058(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2344(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2429( g_U575 - 1 );
    return;
}

void sub_2429(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2510()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2058( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2795()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2861()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_3028()
{
    unknown uVar2;

    CLEAR_TIMECYCLE_MODIFIER();
    if (HAS_STREAMED_TXD_LOADED( l_U1815 ))
    {
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( l_U1815 );
    }
    sub_3074( 1 );
    PRINTSTRING( "Opening Credits - cleaning up" );
    PRINTNL();
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    # -NULL-0xc27cb1( 1 );
    RELEASE_WEATHER();
    g_U10526 = 1;
    g_U10935 = 0;
    SET_TIME_CYCLE_FAR_CLIP_DISABLED( 0 );
    MUTE_GAMEWORLD_AUDIO( 0 );
    ENABLE_FOV_LOD_MULTIPLIER( 1 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    sub_5779();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3074(boolean bParam0)
{
    l_U234 = 0;
    sub_3089();
    l_U233 = 1;
    sub_3261();
    if (IS_PLAYER_PLAYING( sub_3376() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3376(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3376(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3457() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3486() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3515() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3544() );
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam0))
    {
        sub_3590();
        sub_4061();
        sub_4247();
    }
    else
    {
        sub_4465();
        sub_5056();
    }
    return;
}

void sub_3089()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_3112();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_3112()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (g_U9310[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9551[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9551[I], 101 );
        }
    }
    return;
}

void sub_3261()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1649._fU0, l_U1649._fU4, l_U1649._fU8, l_U1652._fU0, l_U1652._fU4, l_U1652._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1643._fU0, l_U1643._fU4, l_U1643._fU8, l_U1646._fU0, l_U1646._fU4, l_U1646._fU8 );
    return;
}

void sub_3376()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3457()
{
    return -2139064254;
}

int sub_3486()
{
    return 1264341792;
}

int sub_3515()
{
    return 2046537925;
}

int sub_3544()
{
    return -183203150;
}

void sub_3590()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1655[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1655[I] )))
            {
                SET_CAR_COLLISION( l_U1655[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U1655[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1655[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                }
            }
            sub_3740( l_U1655[I] );
            sub_3937( l_U1655[I] );
        }
        l_U960[I] = 0;
    }
    for ( I = 0; I < 50; I++ )
    {
        if (NOT (l_U1131[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1131[I] );
        }
    }
    l_U1124 = 0;
    l_U1114 = 0;
    return;
}

void sub_3740(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == sub_3804()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    if (fVar3 > 62.90000000)
                    {
                        fVar3 = 62.90000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_3804()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3937(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_4061()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1713[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1713[I] )))
            {
                SET_CAR_COLLISION( l_U1713[I], 1 );
            }
            sub_3937( l_U1713[I] );
        }
    }
    for ( I = 0; I < 50; I++ )
    {
        if (NOT (l_U1182[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1182[I] );
        }
    }
    l_U1126 = 0;
    l_U1117 = 0;
    return;
}

void sub_4247()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1764[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1764[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1764[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                }
            }
            sub_3740( l_U1764[I] );
            sub_3937( l_U1764[I] );
        }
        l_U1037[I] = 0;
    }
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (l_U1233[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1233[I] );
        }
    }
    return;
}

void sub_4465()
{
    sub_4474();
    sub_4690();
    sub_4848();
    return;
}

void sub_4474()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1655[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1655[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1655[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                }
            }
            DELETE_CAR( ref l_U1655[I] );
        }
        l_U960[I] = 0;
    }
    for ( I = 0; I < 50; I++ )
    {
        if (NOT (l_U1131[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1131[I] );
        }
    }
    l_U1124 = 0;
    l_U1114 = 0;
    return;
}

void sub_4690()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1713[I] ))
        {
            DELETE_CAR( ref l_U1713[I] );
        }
        l_U1063[I] = 0;
    }
    for ( I = 0; I < 50; I++ )
    {
        if (NOT (l_U1182[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1182[I] );
        }
    }
    l_U1126 = 0;
    l_U1117 = 0;
    return;
}

void sub_4848()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1764[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1764[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1764[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                }
            }
            DELETE_CAR( ref l_U1764[I] );
        }
        l_U1037[I] = 0;
    }
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (l_U1233[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1233[I] );
        }
    }
    return;
}

void sub_5056()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        l_U1655[I] = nil;
        l_U1259[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U260[I] = 0.00000000;
        l_U311[I] = 0.00000000;
        l_U362[I] = 0.00000000;
        l_U413[I] = 0.00000000;
        l_U909[I] = 0;
        l_U464[I] = 0.00000000;
        l_U960[I] = 0;
        l_U1131[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U1706[I] = nil;
    }
    l_U1122 = 0;
    l_U1114 = 0;
    l_U1115 = 0;
    for ( I = 0; I < 50; I++ )
    {
        l_U1713[I] = nil;
        l_U1410[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U675[I] = 0.00000000;
        l_U726[I] = 0.00000000;
        l_U777[I] = 0.00000000;
        l_U828[I] = 0.00000000;
        l_U1063[I] = 0;
        l_U1182[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U1790[I] = nil;
    }
    l_U1121 = 0;
    l_U1117 = 0;
    for ( I = 0; I < 25; I++ )
    {
        l_U1764[I] = nil;
        l_U1561[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U519[I] = 0.00000000;
        l_U545[I] = 0.00000000;
        l_U571[I] = 0.00000000;
        l_U597[I] = 0.00000000;
        l_U1011[I] = 0;
        l_U623[I] = 0.00000000;
        l_U1037[I] = 0;
        l_U1233[I] = 0;
    }
    l_U1116 = 0;
    l_U1124 = 0;
    l_U1128 = 0;
    l_U1129 = 0;
    l_U1130 = 0;
    return;
}

void sub_5779()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_5797();
    sub_5856( iVar2, iVar3, iVar4 );
    return;
}

void sub_5797()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_5856(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_5886( iVar5, uParam0, uParam1, uParam2, "GayTony" );
    return;
}

void sub_5886(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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

    if (bParam1)
    {
        if (g_U43133)
        {
            sub_5914();
            return;
        }
    }
    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14925[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_6088( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_6088( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14925[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_6088( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_6088( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_6088( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_6088( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_6665( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12382[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14925[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12382[uParam0]._fU148[I]._fU8++;
            if ((NOT g_U12382[uParam0]._fU148[I]._fU12) AND (g_U12382[uParam0]._fU148[I]._fU8 >= g_U12382[uParam0]._fU148[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12382[uParam0]._fU148[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_7113( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_3376() );
    sub_2020();
    bVar28 = true;
    uVar29 = sub_6665( uParam0, iVar7 );
    uVar30 = sub_1640( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14925[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U22960[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10961 );
                sub_11387( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_5914();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_11838( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_11917( uParam0 );
                sub_11956( 0 );
                sub_1918( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_12131();
        }
    }
    if (bParam2)
    {
        sub_5914();
        sub_12230();
        sub_11956( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_5914();
        sub_12282();
        sub_11956( 0 );
        sub_1918( uVar30, 0 );
    }
    sub_1527();
    return;
}

void sub_5914()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_6088(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_6665(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1871( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_7113(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_7209( uParam1 );
        break;
        case 1:
        bVar8 = sub_8090( uParam1 );
        break;
        case 2:
        bVar8 = sub_8279( uParam1 );
        break;
        case 3:
        bVar8 = sub_8497( uParam1 );
        break;
        case 4:
        bVar8 = sub_9095( uParam1 );
        break;
        case 5:
        bVar8 = sub_9228( uParam1 );
        break;
        case 6:
        bVar8 = sub_9425( uParam1 );
        break;
        case 7:
        bVar8 = sub_9562( uParam1 );
        break;
        case 8:
        bVar8 = sub_9711( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_8708( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_6665( uParam0, uParam1 );
    if (bParam3)
    {
        sub_9929( uVar9, uParam0 );
    }
    return 1;
}

int sub_7209(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_7376( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7376( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_7376( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_7376( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_7376( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_7376( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_7376( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_7376( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_7376( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_7376( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_7376( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_7376( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_7998( "Gay Tony", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Gay Tony", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_7376(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_7387( uParam1 );
    sub_7561( uParam0, 0, uParam2 );
    sub_7561( uParam0, 1, uParam3 );
    sub_7561( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_5797();
    return;
}

void sub_7387(unknown uParam0)
{
    ADD_SCORE( sub_3376(), uParam0 );
    sub_7412( uParam0 );
    return;
}

void sub_7412(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1871( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_7561(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_7998(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7376( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7376( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_7998( "Mori", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Mori", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8279(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7376( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7376( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_7376( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_7998( "Yusuf", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Yusuf", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8497(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7376( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7376( iVar3, 0, sub_8586(), sub_8852(), 0, 0 );
        break;
        default:
        sub_7998( "Dominicans", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Dominicans", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8586()
{
    switch (l_U196[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8708( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8708(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_8852()
{
    switch (l_U196[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8708( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_9095(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_7998( "Mum", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Mum", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9228(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7376( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7376( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_7998( "Bulgarin", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Bulgarin", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9425(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_7998( "Rocco", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Rocco", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9562(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7376( iVar3, 0, sub_8586(), sub_8852(), 0, 0 );
        break;
        default:
        sub_7998( "Henrique", 1 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7998( "Henrique", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9711(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_7998( "Reserve 1", 0 );
        sub_7376( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_9929(int iParam0, int iParam1)
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
    if (g_U10972)
    {
        return;
    }
    if (sub_9990( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_10716( iParam1 );
    }
    return;
}

int sub_9990(int iParam0, int iParam1)
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
    iVar4 = g_U14925[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U22960[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U22960[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_10130( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_10130(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_10300( 0 );
    return;
}

void sub_10300(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_10545();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_10545()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_10716(int iParam0)
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
    if (g_U14902[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14902[iParam0]._fU4 == g_U14902[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14902[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14902[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_10955( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_10955( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_10955( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_10955( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_10955( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_10955( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_10955(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_11387(unknown uParam0, unknown uParam1)
{
    sub_11406( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_11406(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_11838(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 12)
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

void sub_11917(unknown uParam0)
{
    sub_1388();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_11956(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_12007( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_12007(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_12131()
{
    sub_12140();
    return;
}

void sub_12140()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_12230()
{
    sub_12140();
    return;
}

void sub_12282()
{
    sub_12140();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_12707()
{
    int I;

    l_U1824 = GET_TEXTURE_FROM_STREAMED_TXD( l_U1815, "E2_Titles_Rockstar" );
    l_U1825 = GET_TEXTURE_FROM_STREAMED_TXD( l_U1815, "E2_Titles_Games" );
    l_U1826 = GET_TEXTURE_FROM_STREAMED_TXD( l_U1815, "E2_Titles_Presents" );
    l_U1827 = GET_TEXTURE_FROM_STREAMED_TXD( l_U1815, "E2_Titles_ARockstar" );
    l_U1828 = GET_TEXTURE_FROM_STREAMED_TXD( l_U1815, "E2_Titles_North" );
    l_U1829 = GET_TEXTURE_FROM_STREAMED_TXD( l_U1815, "E2_Titles_Production" );
    l_U1832[0] = 0.25000000;
    l_U1836[0] = 0.16000000;
    l_U1840[0] = 0.40000000;
    l_U1844[0] = 0.18000000;
    l_U1832[1] = 0.25000000;
    l_U1836[1] = 0.31000000;
    l_U1840[1] = 0.40000000;
    l_U1844[1] = 0.40000000;
    l_U1832[2] = 0.25000000;
    l_U1836[2] = 0.47000000;
    l_U1840[2] = 0.40000000;
    l_U1844[2] = 0.18000000;
    l_U1848[0] = 0.71000000;
    l_U1852[0] = 0.63000000;
    l_U1856[0] = 0.41000000;
    l_U1860[0] = 0.18000000;
    l_U1848[1] = 0.75000000;
    l_U1852[1] = 0.75000000;
    l_U1856[1] = 0.40000000;
    l_U1860[1] = 0.18000000;
    l_U1848[2] = 0.75000000;
    l_U1852[2] = 0.87000000;
    l_U1856[2] = 0.40000000;
    l_U1860[2] = 0.18000000;
    if (NOT GET_IS_WIDESCREEN())
    {
        for ( I = 0; I <= 2; I++ )
        {
            l_U1840[I] *= 1.25000000;
            l_U1832[I] += 0.10000000;
        }
        for ( I = 0; I <= 2; I++ )
        {
            l_U1856[I] *= 1.25000000;
            l_U1848[I] -= 0.10000000;
        }
    }
    else
    {
        for ( I = 0; I <= 2; I++ )
        {
            l_U1832[I] += 0.05000000;
        }
        for ( I = 0; I <= 2; I++ )
        {
            l_U1848[I] -= 0.05000000;
        }
    }
    return;
}

void sub_13515()
{
    l_U1832[0] -= 0.02000000;
    l_U1832[1] += 0.03000000;
    l_U1832[2] -= 0.02100000;
    return;
}

void sub_13598()
{
    l_U1848[0] += 0.02700000;
    l_U1848[1] -= 0.01400000;
    l_U1848[2] += 0.02900000;
    return;
}

void sub_13919()
{
    if (l_U1888 < 255)
    {
        l_U1888 *= l_U1831;
    }
    if (l_U1888 > 255)
    {
        l_U1888 = 255;
    }
    DRAW_SPRITE( l_U1824, l_U1832[0], l_U1836[0], l_U1840[0], l_U1844[0], 0.00000000, 255, 255, 255, ROUND( l_U1888 ) );
    DRAW_SPRITE( l_U1825, l_U1832[1], l_U1836[1], l_U1840[1], l_U1844[1], 0.00000000, 255, 255, 255, ROUND( l_U1888 ) );
    DRAW_SPRITE( l_U1826, l_U1832[2], l_U1836[2], l_U1840[2], l_U1844[2], 0.00000000, 255, 255, 255, ROUND( l_U1888 ) );
    return;
}

void sub_14201()
{
    unknown uVar2;

    GET_FRAME_TIME( ref uVar2 );
    l_U1832[0] += 0.00200000 * uVar2;
    l_U1832[1] -= 0.00300000 * uVar2;
    l_U1832[2] += 0.00250000 * uVar2;
    return;
}

void sub_14306()
{
    if (l_U1888 > 0)
    {
        l_U1888 *= 0.85000000;
    }
    if (l_U1888 < 1)
    {
        l_U1888 = 0;
    }
    PRINTSTRING( "ALPHA" );
    PRINTINT( ROUND( l_U1888 ) );
    PRINTNL();
    DRAW_SPRITE( l_U1824, l_U1832[0], l_U1836[0], l_U1840[0], l_U1844[0], 0.00000000, 255, 255, 255, ROUND( l_U1888 ) );
    DRAW_SPRITE( l_U1825, l_U1832[1], l_U1836[1], l_U1840[1], l_U1844[1], 0.00000000, 255, 255, 255, ROUND( l_U1888 ) );
    DRAW_SPRITE( l_U1826, l_U1832[2], l_U1836[2], l_U1840[2], l_U1844[2], 0.00000000, 255, 255, 255, ROUND( l_U1888 ) );
    return;
}

void sub_14656()
{
    if (l_U1887 < 255)
    {
        l_U1887 *= l_U1831;
    }
    if (l_U1887 > 255)
    {
        l_U1887 = 255;
    }
    DRAW_SPRITE( l_U1827, l_U1848[0], l_U1852[0], l_U1856[0], l_U1860[0], 0.00000000, 255, 255, 255, ROUND( l_U1887 ) );
    DRAW_SPRITE( l_U1828, l_U1848[1], l_U1852[1], l_U1856[1], l_U1860[1], 0.00000000, 255, 255, 255, ROUND( l_U1887 ) );
    DRAW_SPRITE( l_U1829, l_U1848[2], l_U1852[2], l_U1856[2], l_U1860[2], 0.00000000, 255, 255, 255, ROUND( l_U1887 ) );
    return;
}

void sub_14938()
{
    unknown uVar2;

    GET_FRAME_TIME( ref uVar2 );
    l_U1848[0] -= 0.00270000 * uVar2;
    l_U1848[1] += 0.00140000 * uVar2;
    l_U1848[2] -= 0.00200000 * uVar2;
    return;
}

void sub_15043()
{
    if (l_U1887 > 0)
    {
        l_U1887 *= 0.85000000;
    }
    if (l_U1887 < 1)
    {
        l_U1887 = 0;
        if (l_U1878 == 0)
        {
            MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( l_U1815 );
            l_U1878 = 1;
        }
    }
    PRINTSTRING( "ALPHA" );
    PRINTINT( ROUND( l_U1888 ) );
    PRINTNL();
    DRAW_SPRITE( l_U1827, l_U1848[0], l_U1852[0], l_U1856[0], l_U1860[0], 0.00000000, 255, 255, 255, ROUND( l_U1887 ) );
    DRAW_SPRITE( l_U1828, l_U1848[1], l_U1852[1], l_U1856[1], l_U1860[1], 0.00000000, 255, 255, 255, ROUND( l_U1887 ) );
    DRAW_SPRITE( l_U1829, l_U1848[2], l_U1852[2], l_U1856[2], l_U1860[2], 0.00000000, 255, 255, 255, ROUND( l_U1887 ) );
    return;
}

void sub_16251(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U1803 += fVar5;
    l_U1804 += fVar5;
    l_U1805 += fVar5;
    l_U897 = fParam1;
    if (NOT l_U224)
    {
        if (l_U223)
        {
            sub_16345();
            l_U233 = 0;
            if (IS_PLAYER_PLAYING( sub_3376() ))
            {
                GET_CHAR_COORDINATES( sub_3804(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U224 = 1;
        }
    }
    else if (NOT l_U223)
    {
        sub_3089();
        l_U233 = 1;
        l_U224 = 0;
    }
    if (l_U223)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U214)
    {
        if (l_U205)
        {
            l_U892 = 0.00000000;
        }
        else
        {
            l_U892 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_3376() ))
                {
                    if (sub_16763( sub_3804(), uParam0 ))
                    {
                        l_U222 = 1;
                    }
                    else
                    {
                        l_U222 = 0;
                    }
                }
                l_U889 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U1123 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U890) * l_U892 );
                if (l_U209)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U221)
                {
                    if (l_U895 > 1000.00000000)
                    {
                        sub_17207( uParam0, l_U889 );
                        sub_17702( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U889;
                            fVar5 += 4000.00000000;
                            sub_17928( uParam0, fVar5, l_U894 );
                        }
                        l_U895 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U895 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((l_U889 == 0) || (IS_SCREEN_FADED_OUT()))
        {
            iVar10 = 1;
        }
        if ((iVar10) AND (NOT l_U236))
        {
            if (NOT l_U202)
            {
                sub_18560( uParam0, (fParam1 * l_U890) * l_U892 );
                sub_24038( ref uParam0 );
                sub_24602( ref uParam0 );
            }
            if (l_U207)
            {
                sub_25115( uParam0 );
            }
            if (NOT l_U202)
            {
                sub_26069( uParam0, (fParam1 * l_U890) * l_U892 );
            }
        }
        if (l_U216)
        {
            if (IS_PLAYER_PLAYING( sub_3376() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3804() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3804(), ref l_U1797 );
                    GET_CAR_COORDINATES( l_U1797, ref l_U1637._fU0, ref l_U1637._fU4, ref l_U1637._fU8 );
                    GET_VEHICLE_QUATERNION( l_U1797, ref l_U515, ref l_U516, ref l_U517, ref l_U518 );
                }
            }
            l_U216 = 0;
        }
        if (l_U215)
        {
            if (DOES_VEHICLE_EXIST( l_U1797 ))
            {
                sub_3937( l_U1798 );
                l_U1798 = l_U1797;
            }
            if (IS_VEH_DRIVEABLE( l_U1798 ))
            {
                SET_CAR_COORDINATES( l_U1798, l_U1637._fU0, l_U1637._fU4, l_U1637._fU8 );
                SET_VEHICLE_QUATERNION( l_U1798, l_U515, l_U516, l_U517, l_U518 );
            }
            l_U888 = l_U891;
            l_U202 = 1;
            l_U215 = 0;
        }
        if (l_U202)
        {
            while (NOT (sub_29822( ref uParam0, l_U888 )))
            {
                WAIT( 0 );
            }
            l_U205 = 1;
        }
    }
    return;
}

void sub_16345()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

int sub_16763(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_16984( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_16984(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_17207(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_3261();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12._fU0 < vVar6.x)
                {
                    vVar6.x = uVar12._fU0;
                }
                if (uVar12._fU4 < vVar6.y)
                {
                    vVar6.y = uVar12._fU4;
                }
                if (uVar12._fU8 < vVar6.z)
                {
                    vVar6.z = uVar12._fU8;
                }
                if (uVar12._fU0 > vVar9.x)
                {
                    vVar9.x = uVar12._fU0;
                }
                if (uVar12._fU4 > vVar9.y)
                {
                    vVar9.y = uVar12._fU4;
                }
                if (uVar12._fU8 > vVar9.z)
                {
                    vVar9.z = uVar12._fU8;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U908 * -1.00000000, l_U908 * -1.00000000, l_U908 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U908, l_U908, l_U908))};
    l_U1649 = {vVar6};
    l_U1652 = {vVar9};
    SWITCH_ROADS_OFF( l_U1643._fU0, l_U1643._fU4, l_U1643._fU8, l_U1646._fU0, l_U1646._fU4, l_U1646._fU8 );
    SWITCH_ROADS_OFF( l_U1649._fU0, l_U1649._fU4, l_U1649._fU8, l_U1652._fU0, l_U1652._fU4, l_U1652._fU8 );
    return;
}

void sub_17702(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U224)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_3376() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_3804(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_17928(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_18057( vVar6, fVar15 );
        }
    }
    return;
}

void sub_18057(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U224)
    {
        if (NOT (sub_18087( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_3376() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            }
        }
    }
    return;
}

int sub_18087(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U224)
        {
            if (NOT l_U202)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_3376() ))
                    {
                        GET_CHAR_COORDINATES( sub_3804(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_18560(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U1125 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 50; I++ )
        {
            if (I < l_U1124)
            {
                I = l_U1124;
            }
            if (l_U960[I] == 0)
            {
                if (((l_U909[I] > 0) AND (l_U909[I] < 3000)) AND (NOT (l_U1131[I] == 0)))
                {
                    if (NOT l_U202)
                    {
                        if (l_U889 > (l_U464[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1130++;
                            l_U960[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = l_U889 - l_U464[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_18834( l_U909[I] )))
                            {
                                l_U1130++;
                                l_U960[I]++;
                            }
                            else
                            {
                                sub_18960( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_18960( I, 1090519040 );
                }
            }
            if (l_U960[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U909[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U909[I] );
                }
                else if (l_U1131[I] == sub_3515())
                {
                    if (HAS_MODEL_LOADED( sub_3544() ))
                    {
                        l_U960[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_3544() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U960[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_3457() ))
                {
                    l_U960[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_3457() );
                };;;;
            }
            if (l_U960[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U1131[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U1655[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_3457() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_3457() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_18087( l_U1259[I], 5.00000000, 1120403456 ))) AND (NOT (sub_19896( l_U1259[I] ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U228)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U221)
                                {
                                    sub_18057( l_U1259[I], l_U894 );
                                }
                                CREATE_CAR( l_U1131[I], l_U1259[I]._fU0, l_U1259[I]._fU4, l_U1259[I]._fU8, ref l_U1655[I], 1 );
                                if (l_U1131[I] == sub_3515())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1655[I], 6, sub_3544(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3544() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U1655[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1655[I], 4, sub_3457(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3457() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U1655[I], l_U260[I], l_U311[I], l_U362[I], l_U413[I] );
                                FREEZE_CAR_POSITION( l_U1655[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1655[I], 1 );
                                SET_CAR_COLLISION( l_U1655[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1131[I] );
                                sub_20420( l_U1655[I] );
                                GET_INTERIOR_FROM_CAR( l_U1655[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1655[I] );
                                }
                                l_U1130--;
                                l_U960[I]++;
                            }
                            else if (l_U889 > l_U464[I])
                            {
                                l_U1130--;
                                sub_18960( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U1131[I] );
                }
            }
            if (l_U960[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U909[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U909[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U1655[I] ))
                {
                    if (l_U889 > l_U464[I])
                    {
                        if (6 > l_U1114)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U889 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U889 - l_U464[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U909[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U909[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U1655[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U909[I], fVar14, ref uVar11 );
                                    if ((NOT (sub_18087( uVar8, 5.00000000, 1120403456 ))) AND (sub_18087( uVar11, 5.00000000, 1120403456 )))
                                    {
                                        sub_18960( I, 1090519040 );
                                    }
                                    else if (sub_21009( ref l_U1655[I], l_U909[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U1655[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U1655[I], uParam1 );
                                        sub_21375( ref l_U1655[I] );
                                        l_U1114++;
                                        l_U960[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_18960( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_18960( I, 1090519040 );
                        }
                    }
                    else if ((l_U222) AND (NOT l_U237))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_18960( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_18960( I, 1090519040 );
                }
            }
            if (l_U960[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U1655[I] ))
                {
                    SET_CAR_COLLISION( l_U1655[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1655[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U1655[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_3376() ))
                                {
                                    if ((((IS_CHAR_TOUCHING_VEHICLE( sub_3804(), l_U1655[I] )) AND (NOT l_U208)) AND (NOT l_U205)) AND (NOT l_U217))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_3804() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3804(), ref uVar7 );
                                            if (NOT (sub_22233( l_U1655[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_22395( uVar7, l_U1655[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_22626( l_U1655[I] );
                                                l_U960[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_22395( l_U1655[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U1655[I], uParam1 );
                                    }
                                    else if ((sub_22753( uParam0, l_U1655[I] )) AND (NOT l_U217))
                                    {
                                        sub_22626( l_U1655[I] );
                                        l_U960[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U1655[I], uParam1 );
                                    }
                                    if (l_U210)
                                    {
                                        # -NULL-0xbfc99f( l_U1655[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1655[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                        }
                    }
                    else
                    {
                        l_U960[I]++;
                    }
                }
                else
                {
                    l_U960[I]++;
                }
            }
            if (l_U960[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U1655[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1655[I] )))
                    {
                        l_U960[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U1655[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U1655[I], uParam1 );
                                if (l_U210)
                                {
                                    # -NULL-0xbfc99f( l_U1655[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U1655[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U909[I] ))
                        {
                            if (l_U889 > (l_U464[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U909[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1655[I] );
                        }
                    }
                }
                else
                {
                    l_U960[I]++;
                }
            }
            if (l_U960[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U1655[I] )))
                {
                    GET_CAR_SPEED( l_U1655[I], ref uVar15 );
                }
                sub_23866( ref l_U1655[I] );
                l_U1114--;
                sub_18960( I, uVar15 );
            }
            l_U1125++;
        }
    }
    else
    {
        sub_3590();
    }
    return;
}

void sub_18834(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_18960(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U1131[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1131[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U1655[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U1655[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U1655[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U1655[iParam0] ))
    {
        sub_3740( l_U1655[iParam0] );
        SET_CAR_COLLISION( l_U1655[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U1655[iParam0], 0 );
    }
    if (NOT l_U206)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                if (fParam1 > 62.90000000)
                {
                    fParam1 = 62.90000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_19262( uVar5 );
        }
        sub_3937( l_U1655[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U1655[iParam0] ))
    {
        DELETE_CAR( ref l_U1655[iParam0] );
    }
    if (iParam0 >= l_U1124)
    {
        for ( I = 0; I < 50; I++ )
        {
            if (NOT (l_U960[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 49)
                    {
                        l_U1124 = iParam0 + 1;
                    }
                }
                I = 50;
            }
        }
    }
    l_U960[iParam0] = 99;
    return;
}

void sub_19262(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_19896(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U239[I] ))
        {
            if (LOCATE_CAR_3D( l_U239[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_20420(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

int sub_21009(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 > 0) AND (iParam1 < 3000))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_21375(unknown uParam0)
{
    int iVar3;

    if (l_U218)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_21409();
            if (NOT (iVar3 == -1))
            {
                l_U239[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U239[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U239[iVar3], ref l_U246[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_21409()
{
    int Result;

    for ( Result = 0; Result < 6; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U239[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_22233(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4._fU8 = 0.00000000;
    uVar7._fU8 = 0.00000000;
    fVar10 = sub_16984( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_22395(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_16984( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_22626(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_3740( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_22753(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_22766( uParam0, uParam1 );
    fVar5 = sub_22990( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_22766(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_22990(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_23866(unknown uParam0)
{
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (l_U239[I] == (uParam0^))
        {
            l_U239[I] = nil;
            if (DOES_BLIP_EXIST( l_U246[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U246[I] );
            }
            return;
        }
    }
    return;
}

void sub_24038(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1124 - 5;
    iVar5 = iVar4 + 15;
    if (l_U1803 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_3376() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3804() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3804(), ref uVar6 );
            }
            for ( I = 0; I < 50; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U1655[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1655[I] ))
                    {
                        if ((sub_24207( l_U1655[I], (uParam0^) )) || (sub_24207( l_U1655[I], uVar6 )))
                        {
                            SOUND_CAR_HORN( l_U1655[I], 3000 );
                            l_U1803 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 50;
                }
            }
        }
    }
    return;
}

int sub_24207(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if ((DOES_VEHICLE_EXIST( uParam0 )) AND (DOES_VEHICLE_EXIST( uParam1 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_22233( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if (((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_24602(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1124 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_3376() ))
    {
        switch (l_U1801)
        {
            case 0:
            if (l_U1804 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3804() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3804(), ref uVar6 );
                }
                for ( I = 0; I < 50; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U1655[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1655[I] ))
                        {
                            if ((sub_24207( l_U1655[I], (uParam0^) )) || (sub_24207( l_U1655[I], uVar6 )))
                            {
                                l_U1800 = l_U1655[I];
                                l_U1804 = 0.00000000;
                                I = 50;
                                l_U1801++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 50;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U1800 ))
            {
                if (l_U1804 < 1000.00000000)
                {
                    if (l_U1805 > 100.00000000)
                    {
                        if (NOT l_U1802)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U1800, 2.00000000 );
                            l_U1802 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U1800, 1.00000000 );
                            l_U1802 = 0;
                        }
                        l_U1805 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U1800, 1.00000000 );
                    l_U1801 = 0;
                    l_U1804 = 0.00000000;
                    l_U1802 = 0;
                }
            }
            else
            {
                l_U1801 = 0;
                l_U1804 = 0.00000000;
                l_U1802 = 0;
            }
            break;
        }
    }
    return;
}

void sub_25115(unknown uParam0)
{
    int I;
    int iVar4;

    l_U1127 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 50; I++ )
        {
            if (I < l_U1126)
            {
                I = l_U1126;
            }
            if (l_U1063[I] == 0)
            {
                if (NOT (l_U1182[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U1410[I]._fU0, l_U1410[I]._fU4, l_U886, l_U886, 0 ))
                    {
                        l_U1128++;
                        l_U1063[I]++;
                    }
                }
                else
                {
                    sub_25297( I );
                }
            }
            if (l_U1063[I] == 1)
            {
                if (6 > l_U1117)
                {
                    if (HAS_MODEL_LOADED( l_U1182[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1713[I] )))
                        {
                            if (((NOT (sub_18087( l_U1410[I], 5.00000000, 1120403456 ))) || (l_U202)) || (l_U228))
                            {
                                if (l_U221)
                                {
                                    sub_18057( l_U1410[I], l_U894 );
                                }
                                CREATE_CAR( l_U1182[I], l_U1410[I]._fU0, l_U1410[I]._fU4, l_U1410[I]._fU8, ref l_U1713[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U1713[I], l_U675[I], l_U726[I], l_U777[I], l_U828[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1182[I] );
                                if (IS_CAR_MODEL( l_U1713[I], sub_3515() ))
                                {
                                    SWITCH_CAR_SIREN( l_U1713[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U1713[I], sub_3486() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U1713[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U1713[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1713[I] );
                                }
                                l_U1128--;
                                l_U1117++;
                                l_U1063[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1182[I] );
                    }
                }
            }
            if (l_U1063[I] == 2)
            {
                if (NOT (sub_22395( l_U1713[I], uParam0 )))
                {
                    if (NOT l_U206)
                    {
                        sub_3937( l_U1713[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U1713[I] );
                    }
                    l_U1117--;
                    sub_25297( I );
                }
            }
            l_U1127++;
            if (l_U1127 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_4061();
    }
    return;
}

void sub_25297(int iParam0)
{
    int I;

    if (iParam0 >= l_U1126)
    {
        for ( I = 0; I < 50; I++ )
        {
            if (NOT (l_U1063[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 49)
                    {
                        l_U1126 = iParam0 + 1;
                    }
                }
                I = 50;
            }
        }
    }
    l_U1063[iParam0] = 99;
    return;
}

void sub_26069(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 25; I++ )
        {
            if (((l_U1011[I] > 0) AND (l_U1011[I] < 3000)) AND (NOT (l_U1233[I] == 0)))
            {
                if (l_U1037[I] == 0)
                {
                    if (NOT l_U202)
                    {
                        if (l_U889 > (l_U623[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1037[I]++;
                            l_U1129++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U889 - l_U623[I];
                        fVar13 *= l_U649[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_18834( l_U1011[I] )))
                            {
                                l_U1037[I]++;
                                l_U1129++;
                            }
                            else
                            {
                                l_U1037[I] = 99;
                            }
                        }
                    }
                }
                if (l_U1037[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1011[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1011[I] );
                    }
                    else if (l_U1233[I] == sub_3515())
                    {
                        if (HAS_MODEL_LOADED( sub_3544() ))
                        {
                            l_U1037[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_3544() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U1037[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_3457() ))
                    {
                        l_U1037[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_3457() );
                    };;;;
                }
                if (l_U1037[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U1233[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1764[I] )))
                        {
                            bVar15 = false;
                            if (l_U1233[I] == sub_3515())
                            {
                                if (HAS_MODEL_LOADED( sub_3544() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_3544() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_3457() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_3457() );
                            };;;
                            if (bVar15)
                            {
                                if ((NOT (sub_18087( l_U1561[I], 5.00000000, 1120403456 ))) || (l_U228))
                                {
                                    CREATE_CAR( l_U1233[I], l_U1561[I]._fU0, l_U1561[I]._fU4, l_U1561[I]._fU8, ref l_U1764[I], 1 );
                                    if (l_U1233[I] == sub_3515())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1764[I], 6, sub_3544(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3544() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U1764[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1764[I], 26, sub_3457(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3457() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_19262( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U1764[I], l_U519[I], l_U545[I], l_U571[I], l_U597[I] );
                                    FREEZE_CAR_POSITION( l_U1764[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1233[I] );
                                    sub_20420( l_U1764[I] );
                                    GET_INTERIOR_FROM_CAR( l_U1764[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U1764[I] );
                                    }
                                    l_U1037[I]++;
                                    l_U1129--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1233[I] );
                    }
                }
                if (l_U1037[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1011[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1011[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1764[I] ))
                    {
                        if (l_U889 > l_U623[I])
                        {
                            if (6 > l_U1116)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U889 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U889 - l_U623[I];
                                fVar13 *= l_U649[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1011[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1011[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U1764[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1011[I], fVar13, ref uVar10 );
                                        if (((NOT (sub_18087( uVar7, 5.00000000, 1120403456 ))) AND (sub_18087( uVar10, 5.00000000, 1120403456 ))) AND (NOT l_U228))
                                        {
                                            l_U1116++;
                                            l_U1037[I]++;
                                        }
                                        else if (sub_21009( ref l_U1764[I], l_U1011[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U1764[I], uParam1 * l_U649[I] );
                                            if (IS_VEH_DRIVEABLE( l_U1764[I] ))
                                            {
                                                if (l_U1233[I] == sub_3515())
                                                {
                                                    SWITCH_CAR_SIREN( l_U1764[I], 1 );
                                                }
                                            }
                                            if (l_U219)
                                            {
                                                # -NULL-0xbfc99f( l_U1764[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1764[I], 0 );
                                            }
                                            l_U1116++;
                                            l_U1037[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U1116++;
                                        l_U1037[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U1116++;
                                l_U1037[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U1116++;
                        l_U1037[I]++;
                    }
                }
                if (l_U1037[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U1764[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1764[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1764[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_3376() ))
                                    {
                                        if ((((IS_CHAR_TOUCHING_VEHICLE( sub_3804(), l_U1764[I] )) AND (NOT l_U208)) AND (NOT l_U205)) AND (NOT l_U238))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_3804() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3804(), ref uVar6 );
                                                if (NOT (sub_28232( l_U1764[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_22395( uVar6, l_U1764[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_28517( uVar6, l_U1764[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_22626( l_U1764[I] );
                                                    l_U1037[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U1764[I], uParam1 * l_U649[I] );
                                            if (l_U219)
                                            {
                                                # -NULL-0xbfc99f( l_U1764[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1764[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                            }
                        }
                        else
                        {
                            l_U1037[I]++;
                        }
                    }
                    else
                    {
                        l_U1037[I]++;
                    }
                }
                if (l_U1037[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U1764[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1764[I] )))
                        {
                            l_U1037[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U1764[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U1764[I], uParam1 * l_U649[I] );
                                    if (l_U219)
                                    {
                                        # -NULL-0xbfc99f( l_U1764[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1764[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1011[I] ))
                            {
                                if (l_U889 > (l_U623[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1011[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1764[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U1037[I]++;
                    }
                }
                if (l_U1037[I] == 6)
                {
                    if (NOT (l_U1764[I] == l_U1799))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1764[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1764[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U1764[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        if (fVar14 > 62.90000000)
                                        {
                                            fVar14 = 62.90000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U206)
                        {
                            sub_3937( l_U1764[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U1764[I] ))
                        {
                            DELETE_CAR( ref l_U1764[I] );
                        }
                    }
                    l_U1116--;
                    l_U1037[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_4247();
    }
    return;
}

int sub_28232(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5._fU8 = 0.00000000;
    uVar8._fU8 = 0.00000000;
    fVar11 = sub_16984( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_28517(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) > fParam2) || ((uVar5 - uVar6) < (fParam2 * -1.00000000)))
    {
        return 1;
    }
    return 0;
}

int sub_29822(unknown uParam0, unknown uParam1)
{
    if (NOT l_U231)
    {
        l_U202 = 1;
        sub_4465();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U1123 == -1))
            {
                while (NOT (sub_21009( uParam0, l_U1123, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U213)
                {
                    l_U205 = 1;
                    l_U892 = 0.00000000;
                    l_U1124 = 0;
                    l_U1126 = 0;
                    l_U1114 = 0;
                    l_U1116 = 0;
                    l_U1117 = 0;
                    l_U1128 = 0;
                    l_U1129 = 0;
                    l_U1130 = 0;
                }
            }
        }
        l_U231 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U890) * l_U892 );
            sub_21009( uParam0, l_U1123, uParam1, 1, 0, 0 );
        }
    }
    l_U889 = uParam1;
    sub_26069( (uParam0^), (1.00000000 * l_U890) * l_U892 );
    sub_18560( (uParam0^), (1.00000000 * l_U890) * l_U892 );
    sub_25115( (uParam0^) );
    if (((l_U1128 == 0) AND (l_U1129 == 0)) AND (l_U1130 == 0))
    {
        l_U205 = 0;
        l_U202 = 0;
        l_U231 = 0;
        return 1;
    }
    return 0;
}

void sub_30270()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 49; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1655[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1655[I] )))
            {
                SET_CAR_AS_MISSION_CAR( l_U1655[I] );
                GET_DRIVER_OF_CAR( l_U1655[I], ref uVar3 );
                if (NOT (IS_CHAR_DEAD( uVar3 )))
                {
                    SET_CHAR_IN_CUTSCENE( uVar3, 1 );
                }
                SET_CAR_IN_CUTSCENE( l_U1655[I], 1 );
            }
        }
    }
    for ( I = 0; I <= 49; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1713[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1713[I] )))
            {
                SET_CAR_AS_MISSION_CAR( l_U1713[I] );
                SET_CAR_IN_CUTSCENE( l_U1713[I], 1 );
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U1764[10] ))
    {
        if (NOT (IS_CAR_DEAD( l_U1764[10] )))
        {
            if (IS_CAR_MODEL( l_U1764[10], 2046537925 ))
            {
                SWITCH_CAR_SIREN( l_U1764[10], 1 );
            }
        }
    }
    for ( I = 0; I <= 24; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1764[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1764[I] )))
            {
                SET_CAR_AS_MISSION_CAR( l_U1764[I] );
                GET_DRIVER_OF_CAR( l_U1764[I], ref uVar3 );
                if (NOT (IS_CHAR_DEAD( uVar3 )))
                {
                    SET_CHAR_IN_CUTSCENE( uVar3, 1 );
                }
                if (I == 7)
                {
                    if (l_U1979 == 0)
                    {
                        DELETE_CHAR( ref uVar3 );
                        CREATE_CHAR_INSIDE_CAR( l_U1764[7], 26, 8206123, ref l_U1969 );
                        SET_CHAR_IN_CUTSCENE( l_U1969, 1 );
                        l_U1979 = 1;
                    }
                    CHANGE_CAR_COLOUR( l_U1764[7], 69, 112 );
                    SET_EXTRA_CAR_COLOURS( l_U1764[7], 112, 0 );
                }
                SET_CAR_IN_CUTSCENE( l_U1764[I], 1 );
            }
        }
    }
    return;
}

void sub_31056()
{
    sub_31067( 0, 0 );
    l_U1259[2] = {-51.54460000, -258.17310000, 14.28770000};
    l_U260[2] = -0.00060000;
    l_U311[2] = -0.00070000;
    l_U362[2] = 1.00000000;
    l_U413[2] = -0.00710000;
    l_U909[2] = 823;
    l_U464[2] = 25084.00000000;
    l_U1131[2] = -1962071130;
    l_U1259[4] = {-52.02730000, -250.44120000, 14.39770000};
    l_U260[4] = -0.00050000;
    l_U311[4] = 0.00390000;
    l_U362[4] = 0.99990000;
    l_U413[4] = 0.01200000;
    l_U909[4] = 825;
    l_U464[4] = 27526.00000000;
    l_U1131[4] = -956048545;
    l_U1410[3] = {-60.33610000, -204.65040000, 14.20160000};
    l_U675[3] = -0.03540000;
    l_U726[3] = -0.01750000;
    l_U777[3] = 0.99900000;
    l_U828[3] = -0.02120000;
    l_U1182[3] = -1962071130;
    l_U1259[7] = {-51.54300000, -186.62300000, 14.56790000};
    l_U260[7] = 0.00020000;
    l_U311[7] = 0.00330000;
    l_U362[7] = 1.00000000;
    l_U413[7] = 0.00040000;
    l_U909[7] = 828;
    l_U464[7] = 42441.00000000;
    l_U1131[7] = 1884962369;
    l_U1259[9] = {-51.96020000, -172.56490000, 14.55070000};
    l_U260[9] = -0.00520000;
    l_U311[9] = 0.00330000;
    l_U362[9] = 0.99970000;
    l_U413[9] = 0.02200000;
    l_U909[9] = 830;
    l_U464[9] = 51949.00000000;
    l_U1131[9] = 1884962369;
    l_U1259[10] = {-52.51450000, -174.42890000, 14.53570000};
    l_U260[10] = -0.01220000;
    l_U311[10] = 0.00470000;
    l_U362[10] = 0.99970000;
    l_U413[10] = 0.02120000;
    l_U909[10] = 831;
    l_U464[10] = 54123.00000000;
    l_U1131[10] = 1208856469;
    l_U1259[11] = {-56.73210000, -171.67460000, 14.40770000};
    l_U260[11] = 0.01620000;
    l_U311[11] = 0.00990000;
    l_U362[11] = 0.99170000;
    l_U413[11] = -0.12700000;
    l_U909[11] = 832;
    l_U464[11] = 58545.00000000;
    l_U1131[11] = -956048545;
    l_U1259[12] = {-57.11890000, -172.86410000, 14.61360000};
    l_U260[12] = -0.00930000;
    l_U311[12] = -0.01040000;
    l_U362[12] = 0.99780000;
    l_U413[12] = 0.06470000;
    l_U909[12] = 833;
    l_U464[12] = 60327.00000000;
    l_U1131[12] = 675415136;
    l_U1259[14] = {-80.68590000, -166.21030000, 14.41190000};
    l_U260[14] = 0.00340000;
    l_U311[14] = -0.00470000;
    l_U362[14] = 0.72140000;
    l_U413[14] = -0.69250000;
    l_U909[14] = 835;
    l_U464[14] = 62703.00000000;
    l_U1131[14] = -956048545;
    l_U1259[15] = {-74.37580000, -161.99330000, 14.41380000};
    l_U260[15] = 0.00390000;
    l_U311[15] = -0.00550000;
    l_U362[15] = 0.72540000;
    l_U413[15] = -0.68820000;
    l_U909[15] = 836;
    l_U464[15] = 62967.00000000;
    l_U1131[15] = -956048545;
    l_U1259[16] = {-121.80460000, -301.00410000, 14.43630000};
    l_U260[16] = 0.01180000;
    l_U311[16] = 0.01200000;
    l_U362[16] = 0.71540000;
    l_U413[16] = -0.69850000;
    l_U909[16] = 846;
    l_U464[16] = 31707.00000000;
    l_U1131[16] = 1208856469;
    l_U1410[6] = {-156.14160000, -239.04800000, 12.36060000};
    l_U675[6] = 0.03380000;
    l_U726[6] = -0.00250000;
    l_U777[6] = 0.71980000;
    l_U828[6] = 0.69330000;
    l_U1182[6] = -1962071130;
    l_U1561[0] = {-59.51570000, -219.24070000, 79.15710000};
    l_U519[0] = -0.00010000;
    l_U545[0] = 0.00080000;
    l_U571[0] = 0.99620000;
    l_U597[0] = -0.08760000;
    l_U1011[0] = 837;
    l_U623[0] = 31517.00000000;
    l_U1233[0] = 837858166;
    l_U649[0] = 0.96500000;
    l_U1561[1] = {-52.51080000, -318.43010000, 14.57230000};
    l_U519[1] = 0.00010000;
    l_U545[1] = 0.00000000;
    l_U571[1] = 1.00000000;
    l_U597[1] = 0.00510000;
    l_U1011[1] = 838;
    l_U623[1] = 10000.00000000;
    l_U649[1] = 1.00000000;
    l_U1233[1] = 1884962369;
    l_U1561[12] = {-52.51080000, -318.43010000, 14.57230000};
    l_U519[12] = 0.00010000;
    l_U545[12] = 0.00000000;
    l_U571[12] = 1.00000000;
    l_U597[12] = 0.00510000;
    l_U1011[12] = 838;
    l_U623[12] = 12600.00000000;
    l_U649[21] = 1.00000000;
    l_U1233[21] = 1884962369;
    l_U1561[3] = {-57.77870000, -306.72800000, 14.38720000};
    l_U519[3] = -0.01180000;
    l_U545[3] = 0.00360000;
    l_U571[3] = 0.99980000;
    l_U597[3] = 0.01270000;
    l_U1011[3] = 840;
    l_U623[3] = 32000;
    l_U649[3] = 1.10000000;
    l_U1233[3] = -956048545;
    l_U1561[4] = {-126.49430000, -305.39260000, 14.29590000};
    l_U519[4] = -0.00210000;
    l_U545[4] = -0.01590000;
    l_U571[4] = 0.72270000;
    l_U597[4] = -0.69090000;
    l_U1011[4] = 841;
    l_U623[4] = 38884.00000000;
    l_U649[4] = 0.95000000;
    l_U1233[4] = 2016857647;
    l_U1561[5] = {-58.50460000, -271.37370000, 14.20750000};
    l_U519[5] = -0.02710000;
    l_U545[5] = 0.00120000;
    l_U571[5] = 0.99960000;
    l_U597[5] = 0.00300000;
    l_U1011[5] = 842;
    l_U623[5] = 41738.00000000;
    l_U649[5] = 1.00000000;
    l_U1233[5] = 2016857647;
    l_U1561[6] = {-126.82870000, -300.85380000, 14.37130000};
    l_U519[6] = 0.01280000;
    l_U545[6] = 0.01300000;
    l_U571[6] = 0.72370000;
    l_U597[6] = -0.68990000;
    l_U1011[6] = 843;
    l_U623[6] = 30100.00000000;
    l_U649[6] = 1.00000000;
    l_U1233[6] = -956048545;
    l_U1561[9] = {-23.41590000, -235.22540000, 14.55080000};
    l_U519[9] = 0.00840000;
    l_U545[9] = -0.00850000;
    l_U571[9] = 0.72910000;
    l_U597[9] = 0.68430000;
    l_U1011[9] = 847;
    l_U623[9] = 46500;
    l_U649[9] = 1.00000000;
    l_U1233[9] = 1884962369;
    l_U1561[10] = {-27.73790000, -231.08330000, 14.40790000};
    l_U519[10] = -0.01070000;
    l_U545[10] = 0.02070000;
    l_U571[10] = 0.71950000;
    l_U597[10] = 0.69410000;
    l_U1011[10] = 848;
    l_U623[10] = 48000.00000000;
    l_U649[10] = 1.00000000;
    l_U1233[10] = 2046537925;
    l_U1561[11] = {13.82570000, -411.44500000, 14.35090000};
    l_U519[11] = 0.01800000;
    l_U545[11] = -0.01790000;
    l_U571[11] = 0.70770000;
    l_U597[11] = 0.70610000;
    l_U1011[11] = 849;
    l_U623[11] = 1397.00000000;
    l_U649[11] = 1.00000000;
    l_U1233[11] = 2046537925;
    return;
}

void sub_31067(boolean bParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U221 = 1;
    l_U231 = 0;
    l_U1114 = 0;
    l_U1115 = 0;
    l_U1116 = 0;
    l_U1117 = 0;
    l_U1118 = 1;
    l_U1119 = 0;
    l_U1120 = 0;
    l_U1121 = 0;
    l_U1122 = 0;
    l_U1123 = -1;
    l_U1124 = 0;
    l_U1125 = 0;
    l_U1126 = 0;
    l_U1127 = 0;
    l_U889 = 0.00000000;
    l_U234 = 0;
    if (IS_PLAYER_PLAYING( sub_3376() ))
    {
        GET_CHAR_COORDINATES( sub_3804(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U1643._fU0 = uVar4._fU0 - 100.00000000;
        l_U1643._fU4 = uVar4._fU4 - 100.00000000;
        l_U1643._fU8 = uVar4._fU8 - 100.00000000;
        l_U1646._fU0 = uVar4._fU0 + 100.00000000;
        l_U1646._fU4 = uVar4._fU4 + 100.00000000;
        l_U1646._fU8 = uVar4._fU8 + 100.00000000;
        SWITCH_ROADS_OFF( l_U1643._fU0, l_U1643._fU4, l_U1643._fU8, l_U1646._fU0, l_U1646._fU4, l_U1646._fU8 );
        if (bParam0)
        {
            CLEAR_AREA_OF_CARS( uVar4._fU0, uVar4._fU4, uVar4._fU8, 500.00000000 );
        }
    }
    sub_16345();
    l_U233 = 0;
    if (IS_PLAYER_PLAYING( sub_3376() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3376(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_5056();
    return;
}

int sub_34898()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}
