void main()
{
    boolean bVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U178 = 0;
    l_U182 = 0.00000000;
    l_U184 = 0;
    l_U185 = 0;
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 1;
    l_U190 = 0;
    l_U191 = 0;
    l_U192 = 0;
    l_U194 = 0;
    l_U195 = 0;
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 1;
    l_U199 = 0;
    l_U226 = 0;
    l_U230 = 0;
    l_U231 = -1;
    l_U232 = 1;
    l_U233 = "NONE";
    l_U260 = 0;
    l_U261 = 0;
    l_U262 = {0.00000000, 0.00000000, 0.00000000};
    l_U265 = 0.00000000;
    l_U266 = nil;
    l_U267 = 0;
    l_U268 = nil;
    l_U269 = 34;
    l_U270 = 0;
    l_U271 = 0;
    l_U272 = 0;
    l_U273 = 0;
    l_U274 = 0;
    l_U275 = 0;
    l_U276 = 0;
    l_U277 = 0;
    l_U278 = 1;
    l_U279 = 3;
    l_U286 = 0;
    l_U287 = 0;
    l_U288 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U291 = 0;
    l_U316 = {0.22300000, 1.04500000, 0.95300000};
    l_U319 = {84.50000000, 0.00000000, 198.50000000};
    l_U329 = sub_388();
    l_U323 = l_U330;
    if (sub_430( l_U323 ))
    {
        g_U10552 = 0;
    }
    while (DOES_OBJECT_EXIST( l_U330 ))
    {
        if (NOT l_U291)
        {
            l_U329 = sub_557( l_U330 );
            l_U326 = sub_1292( l_U330 );
            l_U291 = 1;
        }
        if (g_U2667)
        {
            sub_1802();
            PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 1 \n" );
            sub_1936();
        }
        if (IS_PLAYER_PLAYING( sub_2290() ))
        {
            GET_OBJECT_COORDINATES( l_U330, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2429(), uVar4._fU0, uVar4._fU4, uVar4._fU8, 50.00000000, 50.00000000, 20.00000000, 0 )))
            {
                PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 2 \n" );
                sub_1936();
            }
        }
        if ((NOT (l_U296 == 4)) AND (NOT (l_U296 == 3)))
        {
            if (g_U12379)
            {
                if (NOT IS_MINIGAME_IN_PROGRESS())
                {
                    if (NOT (sub_2603( 10 )))
                    {
                        if (NOT g_U28807._fU48)
                        {
                            PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 3 \n" );
                            sub_1936();
                        }
                    }
                }
            }
        }
        if (IS_OBJECT_IN_AREA_3D( l_U330, 931.43210000, -497.12180000, 13.96470000, 936.43210000, -493.79680000, 17.48970000, 0 ))
        {
            PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 4 \n" );
            sub_1936();
        }
        GET_FRAME_TIME( ref fVar3 );
        fVar3 *= 1000.00000000;
        if (IS_PLAYER_PLAYING( sub_2290() ))
        {
            if (NOT (IS_CHAR_INJURED( l_U313 )))
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2290(), l_U313 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2290(), l_U313 )))
                {
                    l_U322 += fVar3;
                }
                else
                {
                    l_U322 -= fVar3;
                    if (l_U322 < 0.00000000)
                    {
                        l_U322 = 0.00000000;
                    }
                }
            }
        }
        switch (l_U296)
        {
            case 0:
            switch (l_U297)
            {
                case 0:
                l_U295 = 0;
                l_U297++;
                break;
                case 1:
                GET_ROOM_KEY_FROM_OBJECT( l_U330, ref l_U295 );
                GET_OBJECT_COORDINATES( l_U330, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                GET_INTERIOR_AT_COORDS( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U294 );
                if (NOT (l_U295 == 0))
                {
                    l_U297++;
                }
                break;
                case 2:
                if (IS_OBJECT_IN_AREA_3D( l_U330, -421.52720000, 1457.43900000, 36.69650000, -415.52720000, 1463.83900000, 40.97150000, 0 ))
                {
                    l_U301._fU28 = 0;
                }
                else
                {
                    l_U301._fU28 = 1;
                }
                PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_CREATE)\n" );
                sub_3491( 1 );
                break;
            }
            break;
            case 1:
            switch (l_U301._fU28)
            {
                case 0:
                sub_3491( 2 );
                break;
                case 1:
                if (l_U291)
                {
                    if (HAS_MODEL_LOADED( l_U329 ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U330, -1.70000000, -1.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        CREATE_CHAR( 4, l_U329, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U313, 1 );
                        if (sub_430( l_U323 ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U313, 1 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U313, 6 );
                        }
                        if (NOT (COMPARE_STRING( l_U326, "NULL" )))
                        {
                            SET_AMBIENT_VOICE_NAME( l_U313, l_U326 );
                        }
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U330, 0.00000000, 0.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        TASK_TURN_CHAR_TO_FACE_COORD( l_U313, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
                        if (IS_PLAYER_PLAYING( sub_2290() ))
                        {
                            TASK_LOOK_AT_CHAR( l_U313, sub_2429(), -2, 0 );
                        }
                        SET_ROOM_FOR_CHAR_BY_KEY( l_U313, l_U295 );
                        l_U292 = 0;
                        if (NOT (sub_430( l_U330 )))
                        {
                            l_U293 = 1;
                        }
                        PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_TRIGGER)\n" );
                        sub_3491( 2 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U329 );
                    }
                    else
                    {
                        REQUEST_MODEL( l_U329 );
                    }
                }
                break;
            }
            break;
            case 2:
            if (l_U293)
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U330, l_U316._fU0, l_U316._fU4, l_U316._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                GET_OBJECT_HEADING( l_U330, ref fVar3 );
                uVar7 = {l_U319};
                uVar7._fU8 += fVar3;
                l_U293 = 0;
            }
            GET_OBJECT_COORDINATES( l_U330, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            switch (l_U297)
            {
                case 0:
                if (l_U290)
                {
                    if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U290 = 0;
                    }
                }
                if (IS_PLAYER_PLAYING( sub_2290() ))
                {
                    if (sub_430( l_U323 ))
                    {
                        if (g_U10552)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U313 )))
                            {
                                GIVE_WEAPON_TO_CHAR( l_U313, 7, 99, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U313 )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U313, 0 );
                                    SET_CHAR_RELATIONSHIP( l_U313, 5, 0 );
                                }
                            }
                        }
                    }
                }
                if (NOT l_U292)
                {
                    if ((sub_4290()) AND (sub_5508( 2, 0 )))
                    {
                        l_U289 = 0;
                        iVar10 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U314 )))
                        {
                            iVar10++;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U315 )))
                        {
                            iVar10++;
                        }
                        if (iVar10 == 0)
                        {
                            l_U324 = "PLH_01";
                        }
                        else if (iVar10 == 1)
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U314 ))) AND (IS_CHAR_INJURED( l_U315 )))
                            {
                                l_U324 = "PLH_01O";
                                l_U312 = l_U314;
                                l_U289 = 1;
                            }
                            if ((IS_CHAR_INJURED( l_U314 )) AND (NOT (IS_CHAR_INJURED( l_U315 ))))
                            {
                                l_U324 = "PLH_01P";
                                l_U312 = l_U315;
                                l_U289 = 1;
                            }
                        }
                        else
                        {
                            l_U324 = "PLH_01";
                        }
                        if (NOT (IS_STRING_NULL( l_U325 )))
                        {
                            if (NOT (COMPARE_STRING( l_U325, l_U324 )))
                            {
                                sub_2020( 2, l_U325 );
                                l_U325 = l_U324;
                            }
                        }
                        else
                        {
                            l_U325 = l_U324;
                        }
                        if (NOT l_U290)
                        {
                            if (sub_6131( 2, l_U325, 0 ))
                            {
                                bVar2 = true;
                                if (g_U12379)
                                {
                                    if (NOT (sub_2603( 10 )))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U314 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U314, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U315 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U315, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        PRINTSTRING( "Pool not playable 10 \n" );
                                        bVar2 = false;
                                    }
                                }
                                if (bVar2)
                                {
                                    l_U290 = 1;
                                    if (iVar10 >= 2)
                                    {
                                        SET_PLAYER_CONTROL( sub_2290(), 0 );
                                        l_U292 = 1;
                                    }
                                    else if (NOT sub_6958())
                                    {
                                        sub_2020( 2, l_U325 );
                                    }
                                    else
                                    {
                                        PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_LOADING_SCRIPT)\n" );
                                        sub_3491( 3 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_2020( 2, l_U325 );
                    }
                }
                else if (NOT sub_4290())
                {
                    l_U292 = 0;
                    PRINTSTRING( "pool - menu - false 1 \n" );
                }
                l_U312 = nil;
                bVar2 = false;
                l_U289 = 1;
                if (((NOT (IS_CHAR_INJURED( l_U314 ))) AND (NOT (IS_CHAR_INJURED( l_U315 )))) AND (l_U292))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_01L" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_01L", "NULL" );
                    }
                    if ((NOT bVar2) AND (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER()))))
                    {
                        l_U312 = l_U314;
                        bVar2 = true;
                    }
                    if ((NOT bVar2) AND (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER()))))
                    {
                        l_U312 = l_U315;
                        bVar2 = true;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U314 ))) AND (IS_CHAR_INJURED( l_U315 )))
                {
                    l_U292 = 0;
                    bVar2 = false;
                }
                if ((IS_CHAR_INJURED( l_U314 )) AND (NOT (IS_CHAR_INJURED( l_U315 ))))
                {
                    l_U292 = 0;
                    bVar2 = false;
                }
                if ((IS_CHAR_INJURED( l_U314 )) AND (IS_CHAR_INJURED( l_U315 )))
                {
                    l_U292 = 0;
                    bVar2 = false;
                }
                if (bVar2)
                {
                    if (NOT sub_6958())
                    {
                        bVar2 = false;
                    }
                    else
                    {
                        sub_3491( 3 );
                    }
                }
                if (NOT bVar2)
                {
                    if ((NOT l_U290) || (NOT l_U292))
                    {
                        if ((IS_CONTROL_PRESSED( 2, 23 )) || (NOT l_U292))
                        {
                            CLEAR_HELP();
                            l_U292 = 0;
                            l_U290 = 1;
                            sub_2020( 2, l_U325 );
                            SET_PLAYER_CONTROL( sub_2290(), 1 );
                        }
                    }
                }
                break;
                default:
            }
            break;
            case 3:
            if (HAS_SCRIPT_LOADED( "pool_game" ))
            {
                bVar2 = false;
                if ((NOT (IS_CHAR_INJURED( l_U313 ))) AND (NOT l_U289))
                {
                    switch (l_U300)
                    {
                        case 0:
                        if (IS_PLAYER_PLAYING( sub_2290() ))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_2429() )))
                            {
                                SAY_AMBIENT_SPEECH( l_U313, "GENERIC_YES", 1, 1, 2 );
                                l_U300++;
                            }
                        }
                        break;
                        case 1:
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U313 )))
                        {
                            bVar2 = true;
                        }
                        break;
                    }
                }
                else
                {
                    bVar2 = true;
                }
                if (bVar2)
                {
                    if (l_U289)
                    {
                        l_U301._fU0[0] = l_U312;
                        l_U301._fU12[0] = nil;
                    }
                    else
                    {
                        l_U301._fU0[0] = l_U313;
                        l_U301._fU12[0] = nil;
                    }
                    l_U301._fU0[1] = sub_2429();
                    l_U301._fU12[1] = sub_2290();
                    l_U301._fU32[1] = 0;
                    l_U301._fU24 = l_U330;
                    l_U328 = START_NEW_SCRIPT_WITH_ARGS( "pool_game", ref l_U301, 11, 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "pool_game" );
                    PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_GAME_RUNNING)\n" );
                    sub_3491( 4 );
                }
            }
            break;
            case 4:
            if (IS_SCREEN_FADED_OUT())
            {
                ;
            }
            if (NOT (IS_THREAD_ACTIVE( l_U328 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U301._fU0[0] )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U301._fU0[0], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U301._fU0[1] )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U301._fU0[1], 0 );
                }
                if (IS_PLAYER_PLAYING( sub_2290() ))
                {
                    SET_PLAYER_CONTROL( sub_2290(), 1 );
                }
                l_U293 = 1;
                l_U290 = 1;
                sub_2020( 2, l_U325 );
                SETTIMERA( 0 );
                l_U292 = 0;
                PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_TRIGGER)2\n" );
                sub_3491( 2 );
            }
            break;
        }
        WAIT( 0 );
    }
    PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 5 \n" );
    sub_1936();
    return;
}

int sub_388()
{
    return 221246143;
}

int sub_430(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_IN_AREA_3D( uParam0, -1725.71000000, 343.84000000, 28.30000000, -1718.71000000, 350.84000000, 34.30000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_557(unknown uParam0)
{
    unknown uVar3;

    if (sub_568( uParam0 ))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            return -1500397869;
            break;
            case 1:
            return -881358690;
            break;
            case 2:
            return 1609755055;
            break;
            case 3:
            return -330497431;
            break;
        }
    }
    return sub_758( -1 );
}

int sub_568(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_IN_AREA_3D( uParam0, 1470.84700000, 55.46900000, 21.56560000, 1474.14700000, 62.29400000, 27.19060000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_758(int iParam0)
{
    int iVar3;
    int Result;

    if (iParam0 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 23, ref iVar3 );
    }
    else
    {
        iVar3 = iParam0;
    }
    switch (iVar3)
    {
        case 0:
        Result = 286007875;
        break;
        case 1:
        Result = 221246143;
        break;
        case 2:
        Result = 43005364;
        break;
        case 3:
        Result = 1609755055;
        break;
        case 4:
        Result = -330497431;
        break;
        case 5:
        Result = -1836006237;
        break;
        case 6:
        Result = 869501081;
        break;
        case 7:
        Result = 632613980;
        break;
        case 8:
        Result = -301223260;
        break;
        case 9:
        Result = 1346668127;
        break;
        case 10:
        Result = 1574850459;
        break;
        case 11:
        Result = -1953289472;
        break;
        case 12:
        Result = 280474699;
        break;
        case 13:
        Result = -19263344;
        break;
        case 14:
        Result = 1844702918;
        break;
        case 15:
        Result = -881358690;
        break;
        case 16:
        Result = 492147228;
        break;
        case 17:
        Result = -302362397;
        break;
        case 18:
        Result = -1616890832;
        break;
        case 19:
        Result = 64730935;
        break;
        case 20:
        Result = 510389335;
        break;
        case 21:
        Result = 1543404628;
        break;
        case 22:
        Result = 1976502708;
        break;
    }
    return Result;
}

string sub_1292(unknown uParam0)
{
    unknown uVar3;

    if (sub_568( uParam0 ))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            return "M_Y_GJAM_LO_01_FULL_01";
            break;
            case 1:
            return "M_Y_GJAM_LO_02_FULL_01";
            break;
            case 2:
            return "M_M_GJAM_HI_01_FULL_01";
            break;
            case 3:
            return "M_M_GJAM_HI_02_FULL_01";
            break;
        }
    }
    else if (sub_430( uParam0 ))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            return "M_Y_GLOST_01_FULL_01";
            break;
            case 1:
            return "M_Y_GLOST_02_FULL_01";
            break;
            case 2:
            return "M_Y_GLOST_03_FULL_01";
            break;
            case 3:
            return "M_Y_GLOST_04_FULL_01";
            break;
            case 4:
            return "M_Y_GLOST_05_FULL_01";
            break;
            case 5:
            return "M_Y_GLOST_06_FULL_01";
            break;
        }
    }
    return "NULL";
}

void sub_1802()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U301._fU0[I] ))
        {
            DELETE_CHAR( ref l_U301._fU0[I] );
        }
        l_U301._fU12[I] = nil;
    }
    return;
}

void sub_1936()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U329 );
    if (IS_THREAD_ACTIVE( l_U328 ))
    {
        DESTROY_THREAD( l_U328 );
    }
    if (DOES_CHAR_EXIST( l_U313 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U313 );
    }
    sub_2020( 2, l_U325 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2020(int iParam0, string sParam1)
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
                    sub_2241();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2290(), 1 );
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

void sub_2241()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_2290()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2429()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2603(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_2670( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_2670(unknown uParam0)
{
    return 0;
}

void sub_3491(unknown uParam0)
{
    l_U296 = uParam0;
    l_U297 = 0;
    return;
}

int sub_4290()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown[2] uVar5;
    unknown[2] uVar8;
    int iVar11;
    boolean bVar12;
    int iVar13;

    array(ref uVar5, 2);
    array(ref uVar8, 2);
    iVar11 = 0;
    bVar12 = true;
    while (bVar12)
    {
        bVar12 = sub_4333( ref uVar5[iVar11], iVar11 );
        if (bVar12)
        {
            uVar8[iVar11] = sub_4416( iVar11 );
            if (NOT (IS_CHAR_INJURED( uVar8[iVar11] )))
            {
                if (IS_CHAR_MODEL( uVar8[iVar11], 1370299619 ))
                {
                    l_U314 = uVar8[iVar11];
                }
                if (IS_CHAR_MODEL( uVar8[iVar11], 1905515841 ))
                {
                    l_U315 = uVar8[iVar11];
                }
            }
        }
        iVar11++;
        if (iVar11 >= 2)
        {
            bVar12 = false;
        }
    }
    if (DOES_CHAR_EXIST( l_U314 ))
    {
        if (NOT (sub_4617( sub_2429(), l_U314 )))
        {
            l_U314 = nil;
        }
    }
    if (DOES_CHAR_EXIST( l_U315 ))
    {
        if (NOT (sub_4617( sub_2429(), l_U315 )))
        {
            l_U315 = nil;
        }
    }
    if (NOT (DOES_CHAR_EXIST( l_U313 )))
    {
        if ((IS_CHAR_INJURED( l_U314 )) AND (IS_CHAR_INJURED( l_U315 )))
        {
            return 0;
        }
    }
    else if (IS_CHAR_INJURED( l_U313 ))
    {
        if (sub_430( l_U323 ))
        {
            g_U10552 = 1;
        }
        return 0;
    }
    else if (sub_430( l_U323 ))
    {
        if (IS_PLAYER_PLAYING( sub_2290() ))
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U313, sub_2429(), 0 )) || (l_U322 > 3000.00000000))
            {
                g_U10552 = 1;
                return 0;
            }
        }
    };;;
    if (DOES_OBJECT_EXIST( l_U323 ))
    {
        GET_OBJECT_COORDINATES( l_U323, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (IS_PLAYER_PLAYING( sub_2290() ))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2429(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_2290() ))
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_2290(), 0 )) AND (NOT sub_5113()))
        {
            return 0;
        }
    }
    if (NOT sub_5196())
    {
        return 0;
    }
    if (TIMERA() < 1000)
    {
        return 0;
    }
    if (sub_2603( 10 ))
    {
        if (sub_4333( ref iVar13, 0 ))
        {
            if ((iVar13 == 3) || (iVar13 == 7))
            {
                if ((NOT (DOES_CHAR_EXIST( l_U314 ))) AND (NOT (DOES_CHAR_EXIST( l_U315 ))))
                {
                    return 0;
                }
            }
        }
    }
    else if (NOT g_U12379)
    {
        if (sub_4333( ref iVar13, 0 ))
        {
            if ((NOT (iVar13 == 3)) AND (NOT (iVar13 == 7)))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U313 )))
    {
        if (IS_PED_IN_COMBAT( l_U313 ))
        {
            if (sub_430( l_U323 ))
            {
                g_U10552 = 1;
            }
            return 0;
        }
    }
    if (sub_430( l_U323 ))
    {
        if (g_U10552)
        {
            return 0;
        }
    }
    return 1;
}

int sub_4333(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_4416(int iParam0)
{
    if (iParam0 >= 2)
    {
        return nil;
    }
    return g_U28807._fU12[iParam0];
}

int sub_4617(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_5113()
{
    if (DOES_SCRIPT_EXIST( "michelle1" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "michelle1" )) > 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_5196()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_5508(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_2290() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_2290() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2290() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_5604())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2429() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_5689())
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

int sub_5604()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_5689()
{
    return sub_5700( 0, 0 );
}

int sub_5700(boolean bParam0, unknown uParam1)
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

int sub_6131(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_5508( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2290(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_6406();
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

void sub_6406()
{
    return sub_5700( 1, 1 );
}

int sub_6958()
{
    boolean bVar2;

    if (g_U12379)
    {
        if (NOT (sub_6978( 10 )))
        {
            return 0;
        }
    }
    if (NOT l_U289)
    {
        if (DOES_CHAR_EXIST( l_U313 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U313 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U313 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U313, sub_2429() );
                TASK_LOOK_AT_CHAR( l_U313, sub_2429(), 3000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2429(), l_U313 );
            }
        }
    }
    else if (DOES_CHAR_EXIST( l_U313 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U313 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U313 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U313 );
    }
    if ((NOT (IS_CHAR_INJURED( sub_2429() ))) AND (NOT l_U289))
    {
        bVar2 = IS_AMBIENT_SPEECH_DISABLED( sub_2429() );
        if (bVar2)
        {
            STOP_PED_SPEAKING( sub_2429(), 1 );
        }
        SAY_AMBIENT_SPEECH( sub_2429(), "LETS_PLAY_POOL", 1, 1, 2 );
        if (bVar2)
        {
            STOP_PED_SPEAKING( sub_2429(), 1 );
        }
        l_U300 = 0;
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2290(), 0 );
    REQUEST_SCRIPT( "pool_game" );
    return 1;
}

int sub_6978(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_2670( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}
