void main()
{
    l_U0 = 0;
    l_U1 = 86.00000000;
    l_U2 = 274.00000000;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U8 = -1;
    l_U120 = 15.00000000;
    l_U121 = 35.00000000;
    l_U122 = 16.00000000;
    l_U123 = 0.00000000;
    l_U129 = 1000.00000000;
    l_U130 = 7500.00000000;
    l_U139 = 1;
    l_U140 = 30.00000000;
    l_U141 = 30.00000000;
    l_U142 = 2.00000000;
    l_U152 = 0.00000000;
    l_U153 = 0.00000000;
    l_U165 = 1;
    l_U166 = 0;
    l_U167 = -1;
    l_U168 = 1;
    l_U169 = -1;
    l_U170 = -1;
    l_U171 = 15.00000000;
    l_U198 = 0;
    l_U199 = -1949702649;
    l_U200 = 2075870698;
    l_U205 = 0.12000000;
    l_U220 = 0;
    l_U221 = 1;
    l_U222 = 3;
    l_U224 = 0;
    l_U225 = -1;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U355 = 0;
    l_U417 = 0;
    l_U449 = {-1475.50000000, 492.45000000, 18.48550000};
    l_U452 = {-123.12180000, -256.30450000, 11.68550000};
    l_U455 = 1376298265;
    l_U528 = 0;
    l_U529 = 0;
    l_U530 = 60;
    l_U531 = 40;
    l_U532 = 0;
    l_U537 = {-1521.45800000, 1098.34800000, 25.34080000};
    l_U542 = 0;
    l_U543 = 0;
    l_U544 = 0;
    l_U545 = 0;
    l_U546 = 1;
    l_U547 = 0;
    l_U548 = 1;
    l_U549 = 0;
    l_U563 = 0;
    l_U584 = {-1534.79500000, 1108.93600000, 25.69060000};
    l_U587 = {-1718.46400000, 366.26070000, 24.28650000};
    l_U592 = 0;
    l_U607 = 1;
    l_U611 = 1;
    SET_MISSION_FLAG( 1 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_578();
        sub_2840();
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U608 );
    if (IS_VEH_DRIVEABLE( l_U608 ))
    {
        if (LOCATE_CAR_3D( l_U608, l_U452._fU0, l_U452._fU4, l_U452._fU8, 10.00000000, 10.00000000, 5.00000000, 0 ))
        {
            if (NOT (sub_3241( l_U608 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U608 );
            }
            else if (NOT (sub_3349( l_U608 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U608 );
            }
            else
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U608 );
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U608 );
        }
    }
    g_U10460 = 0;
    g_U11220 = 1;
    REQUEST_MODEL( l_U455 );
    REQUEST_MODEL( -302362397 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U448 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U448, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE( l_U448, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_MOVEMENT_STYLE( l_U448, 0 );
    sub_3547( "E1R3AUD" );
    LOAD_ADDITIONAL_TEXT( "E1RAY3", 0 );
    sub_3721( 0, sub_3670(), "JOHNNY", 0 );
    LOAD_ADDITIONAL_TEXT( "E1R3AUD", 6 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U447 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U447, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U447, 2 );
    SUPPRESS_CAR_MODEL( 1376298265 );
    while (true)
    {
        WAIT( 0 );
        sub_3948();
        sub_4618();
        if (l_U354 == 4)
        {
            if (g_U39149[18] == 3)
            {
                if (l_U545)
                {
                    if (NOT l_U544)
                    {
                        if ((NOT (IS_CHAR_INJURED( g_U11081[0] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[1] ))))
                        {
                            if ((IS_VEH_DRIVEABLE( g_U11087[0] )) AND (IS_VEH_DRIVEABLE( g_U11087[1] )))
                            {
                                CLEAR_AREA( -1534.22800000, 1085.33700000, 25.61870000, 70.00000000, 1 );
                                TASK_SET_COMBAT_DECISION_MAKER( g_U11081[0], l_U448 );
                                TASK_SET_COMBAT_DECISION_MAKER( g_U11081[1], l_U448 );
                                GIVE_WEAPON_TO_CHAR( g_U11081[0], 14, 30000, 1 );
                                GIVE_WEAPON_TO_CHAR( g_U11081[1], 14, 30000, 1 );
                                sub_3721( 3, g_U11081[0], "TERRY", 0 );
                                sub_3721( 2, g_U11081[1], "CLAY", 0 );
                                l_U544 = 1;
                                l_U543 = 1;
                                DO_SCREEN_FADE_IN( 250 );
                                while (NOT IS_SCREEN_FADED_IN())
                                {
                                    WAIT( 0 );
                                }
                                SET_PLAYER_CONTROL( sub_631(), 1 );
                            }
                        }
                    }
                }
                else if (NOT sub_4650())
                {
                    sub_7407( l_U571[0], l_U581[0], 1, l_U564[0], l_U578[0], l_U571[1], l_U581[1], 1, l_U564[1], l_U578[1], 1 );
                    sub_8128();
                    l_U545 = 1;
                }
            }
        }
        sub_8270();
        switch (l_U354)
        {
            case 0:
            if (IS_SCREEN_FADED_OUT())
            {
                if (IS_BIT_SET( g_U10959._fU0, 7 ))
                {
                    SET_CUTSCENE_EXTRA_ROOM_POS( 65437, 65270, 0 );
                    LOAD_ADDITIONAL_TEXT( "E1R3AUD", 6 );
                    START_CUTSCENE_NOW( "RB03_AA" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    CLEAR_NAMED_CUTSCENE( "RB03_AA" );
                    while ((NOT sub_8563()) || (NOT sub_9058()))
                    {
                        WAIT( 0 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U608 ))
                    {
                        CLEAR_AREA( -127.33220000, -253.67180000, 11.61100000, 25.00000000, 0 );
                        SET_CHAR_HEADING( sub_3670(), 15.00000000 );
                        SET_CHAR_COORDINATES( sub_3670(), l_U452._fU0, l_U452._fU4, l_U452._fU8 );
                        SET_CAR_HEADING( l_U608, 10 );
                        SET_CAR_COORDINATES( l_U608, -126.68490000, -257.22760000, 11.52610000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U608 );
                        if ((sub_9575( l_U608 )) == 0)
                        {
                            WARP_CHAR_INTO_CAR( sub_3670(), l_U608 );
                            SET_CAR_ENGINE_ON( l_U608, 1, 1 );
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_3670(), "Get_On_Bike", "MISSRAYB_3", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if (NOT (sub_9937( l_U608 )))
                        {
                            l_U612 = 1;
                        }
                        SET_CAR_HEADING( l_U608, 0.00000000 );
                        SET_CAR_COORDINATES( l_U608, -127.12700000, -256.22930000, 11.58280000 );
                        TASK_ENTER_CAR_AS_DRIVER( sub_3670(), l_U608, -2 );;
                    }
                    else
                    {
                        CLEAR_AREA( -127.33220000, -253.67180000, 11.61100000, 25.00000000, 0 );
                        SET_CHAR_HEADING( sub_3670(), 15.00000000 );
                        SET_CHAR_COORDINATES( sub_3670(), l_U452._fU0, l_U452._fU4, l_U452._fU8 );
                    }
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    sub_10146();
                    sub_10386();
                    LOAD_SCENE( l_U452._fU0, l_U452._fU4, l_U452._fU8 );
                    DO_SCREEN_FADE_IN( 250 );
                    if (IS_VEH_DRIVEABLE( l_U608 ))
                    {
                        ;
                    }
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U601 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U601, "GET_THE_HELL_OUT_OF_HERE", 1, 1, 2 );
                    }
                    while (NOT sub_11066())
                    {
                        WAIT( 0 );
                    }
                    sub_11518();
                    sub_11640();
                    if (IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_IN( 250 );
                        while (IS_SCREEN_FADING())
                        {
                            WAIT( 0 );
                        }
                    }
                    SET_PLAYER_CONTROL( sub_631(), 1 );
                    l_U354 = 1;
                    SETTIMERB( 0 );
                }
                else
                {
                    switch (g_U39149[18])
                    {
                        case 0:
                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U608 );
                        if (IS_VEH_DRIVEABLE( l_U608 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U608 );
                            SET_CAR_HEADING( l_U608, 10 );
                            SET_CAR_COORDINATES( l_U608, -126.68490000, -257.22760000, 11.52610000 );
                            if (NOT (IS_CHAR_IN_CAR( sub_3670(), l_U608 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3670(), l_U608 );
                                SET_CAR_ENGINE_ON( l_U608, 1, 1 );
                            }
                        }
                        else
                        {
                            SET_CHAR_HEADING( sub_3670(), 10 );
                            SET_CHAR_COORDINATES( sub_3670(), -126.68490000, -257.22760000, 11.52610000 );
                        }
                        while (NOT sub_8563())
                        {
                            WAIT( 0 );
                        }
                        LOAD_SCENE( -126.68490000, -257.22760000, 11.52610000 );
                        sub_11640();
                        l_U354 = 1;
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        DO_SCREEN_FADE_IN( 250 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        SET_PLAYER_CONTROL( sub_631(), 1 );
                        break;
                        case 1:
                        while (NOT (sub_12456( ref l_U608, -954.82610000, 781.87270000, 3.21700000, 90 )))
                        {
                            WAIT( 0 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U608 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U608 );
                            SET_CAR_HEADING( l_U608, 90 );
                            SET_CAR_COORDINATES( l_U608, -954.82610000, 781.87270000, 3.21700000 );
                            if (NOT (IS_CHAR_IN_CAR( sub_3670(), l_U608 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3670(), l_U608 );
                                SET_CAR_ENGINE_ON( l_U608, 1, 1 );
                            }
                        }
                        else
                        {
                            SET_CHAR_HEADING( sub_3670(), 90 );
                            SET_CHAR_COORDINATES( sub_3670(), -954.82610000, 781.87270000, 3.21700000 );
                        }
                        while (NOT sub_8563())
                        {
                            WAIT( 0 );
                        }
                        LOAD_SCENE( -954.82610000, 781.87270000, 3.21700000 );
                        sub_11640();
                        l_U354 = 1;
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        DO_SCREEN_FADE_IN( 250 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        SET_PLAYER_CONTROL( sub_631(), 1 );
                        break;
                        case 2:
                        while (NOT (sub_12456( ref l_U608, -954.82610000, 781.87270000, 3.21700000, 90 )))
                        {
                            WAIT( 0 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U608 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U608 );
                            SET_CAR_HEADING( l_U608, 90 );
                            SET_CAR_COORDINATES( l_U608, -954.82610000, 781.87270000, 3.21700000 );
                            if (NOT (IS_CHAR_IN_CAR( sub_3670(), l_U608 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3670(), l_U608 );
                                SET_CAR_ENGINE_ON( l_U608, 1, 1 );
                            }
                        }
                        else
                        {
                            SET_CHAR_HEADING( sub_3670(), 90 );
                            SET_CHAR_COORDINATES( sub_3670(), -954.82610000, 781.87270000, 3.21700000 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U608 ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_3670(), l_U608 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3670(), l_U608 );
                                SET_CAR_ENGINE_ON( l_U608, 1, 1 );
                            }
                            SET_CAR_ON_GROUND_PROPERLY( l_U608 );
                        }
                        while (NOT sub_8563())
                        {
                            WAIT( 0 );
                        }
                        while (NOT sub_14674())
                        {
                            WAIT( 0 );
                        }
                        LOAD_SCENE( -954.82610000, 781.87270000, 3.21700000 );
                        PRINT_NOW( "KILLHELP", 7500, 1 );
                        l_U354 = 3;
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        DO_SCREEN_FADE_IN( 250 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        SET_PLAYER_CONTROL( sub_631(), 1 );
                        break;
                        case 3:
                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U608 );
                        if (IS_VEH_DRIVEABLE( l_U608 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U608 );
                            SET_CAR_HEADING( l_U608, 70 );
                            SET_CAR_COORDINATES( l_U608, -1540.26700000, 1096.37200000, 25.69060000 );
                        }
                        SET_CHAR_COORDINATES( sub_3670(), -1546.04200000, 1102.81300000, 31.57740000 );
                        SET_CHAR_HEADING( sub_3670(), 230.00000000 );
                        REQUEST_MODEL( sub_8628( 6 ) );
                        REQUEST_MODEL( sub_8628( 7 ) );
                        REQUEST_MODEL( sub_9091( 6 ) );
                        REQUEST_MODEL( sub_9091( 7 ) );
                        while ((((((NOT sub_14674()) || (NOT sub_8563())) || (NOT (HAS_MODEL_LOADED( sub_8628( 6 ) )))) || (NOT (HAS_MODEL_LOADED( sub_8628( 7 ) )))) || (NOT (HAS_MODEL_LOADED( sub_9091( 6 ) )))) || (NOT (HAS_MODEL_LOADED( sub_9091( 7 ) ))))
                        {
                            WAIT( 0 );
                        }
                        LOAD_SCENE( -1546.04200000, 1102.81300000, 31.57740000 );
                        l_U564[0] = {-1542.33500000, 1106.36700000, 31.57680000};
                        l_U578[0] = 195.29140000;
                        l_U571[0] = {-1540.71800000, 1104.27100000, 25.69060000};
                        l_U581[0] = 219.42210000;
                        l_U564[1] = {-1540.33100000, 1110.22200000, 31.57680000};
                        l_U578[1] = 228.95490000;
                        l_U571[1] = {-1538.03500000, 1107.23600000, 25.69060000};
                        l_U581[1] = 211.26510000;
                        SET_CREATE_RANDOM_COPS( 0 );
                        SET_WANTED_MULTIPLIER( 0.05000000 );
                        PRINT_NOW( "KILLHELP", 7500, 1 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        l_U354 = 4;
                        break;
                    }
                    CLEAR_AREA( l_U564[0]._fU0, l_U564[0]._fU0, l_U564[0]._fU0, 100.00000000, 1 );
                }
            }
            break;
            case 1:
            sub_11640();
            if (sub_18194())
            {
                if (sub_18362( 3, "E1R3_CALL3", "E1R3AUD", 2000, 1 ))
                {
                    g_U39149[18] = 1;
                    l_U354 = 2;
                }
                else if (NOT sub_21252())
                {
                    sub_21308();
                }
            }
            break;
            case 2:
            if (sub_21433( 0 ))
            {
                CLEAR_HELP();
                l_U354 = 3;
            }
            else if (sub_21717() > 0)
            {
                if (sub_14674())
                {
                    if (DOES_BLIP_EXIST( l_U356 ))
                    {
                        REMOVE_BLIP( l_U356 );
                    }
                }
            }
            break;
            case 3:
            if (sub_14674())
            {
                SETTIMERB( 0 );
                if (DOES_BLIP_EXIST( l_U356 ))
                {
                    REMOVE_BLIP( l_U356 );
                }
                if (sub_21839())
                {
                    if (NOT sub_4650())
                    {
                        sub_21901();
                    }
                }
                PRINT_NOW( "KILLHELP", 7500, 1 );
                l_U564[0] = {-1542.33500000, 1106.36700000, 31.57680000};
                l_U578[0] = 195.29140000;
                l_U571[0] = {-1540.71800000, 1104.27100000, 25.69060000};
                l_U581[0] = 219.42210000;
                l_U564[1] = {-1540.33100000, 1110.22200000, 31.57680000};
                l_U578[1] = 228.95490000;
                l_U571[1] = {-1538.03500000, 1107.23600000, 25.69060000};
                l_U581[1] = 211.26510000;
                SET_CREATE_RANDOM_COPS( 0 );
                SET_WANTED_MULTIPLIER( 0.05000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                l_U354 = 4;
            }
            break;
            case 4:
            if (sub_23470())
            {
                for ( l_U533 = 0; l_U533 < 4; l_U533++ )
                {
                    sub_23793( l_U533 );
                }
                if (TIMERA() > 2000)
                {
                    l_U528 = 0;
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U455 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -302362397 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1616890832 );
                    l_U354 = 5;
                }
                else if (NOT l_U529)
                {
                    sub_2859();
                    g_U11097 = 0;
                    g_U11099 = 0;
                    for ( l_U533 = 0; l_U533 < 2; l_U533++ )
                    {
                        if (NOT (IS_CHAR_INJURED( g_U11081[l_U533] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), g_U11081[l_U533], 100.00000000, 100.00000000, 100.00000000, 0 ))
                            {
                                if (IS_VEH_DRIVEABLE( g_U11087[l_U533] ))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U540 );
                                    TASK_ENTER_CAR_AS_DRIVER( 0, g_U11087[l_U533], -2 );
                                    TASK_CAR_DRIVE_WANDER( 0, g_U11087[l_U533], 30.00000000, 2 );
                                    CLOSE_SEQUENCE_TASK( l_U540 );
                                    TASK_PERFORM_SEQUENCE( g_U11081[l_U533], l_U540 );
                                    CLEAR_SEQUENCE_TASK( l_U540 );
                                }
                                else
                                {
                                    TASK_WANDER_STANDARD( g_U11081[l_U533] );
                                }
                                if (l_U546)
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                                    {
                                        sub_3721( 3, g_U11081[0], "TERRY", 0 );
                                        sub_24528( "E1R3_BYE", ref l_U594, 6, 1 );
                                    }
                                }
                                l_U546 = 0;
                            }
                        }
                    }
                    l_U529 = 1;
                }
            }
            else if (l_U548)
            {
                sub_24669();
            }
            else if (TIMERB() > 15000)
            {
                sub_24528( "E1R3_FUCK", ref l_U594, 6, 1 );
                GET_GAME_TIMER( ref l_U419 );
                l_U548 = 1;
            }
            for ( l_U533 = 0; l_U533 < 4; l_U533++ )
            {
                sub_25501( l_U533 );
            }
            sub_28389();;
            break;
            case 5:
            sub_29662();
            sub_11640();
            if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3670(), ref l_U457 );
                if (NOT (l_U457 == l_U456))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U456 );
                    l_U456 = l_U457;
                }
            }
            if (sub_32161())
            {
                if (sub_34121())
                {
                    if (sub_34507( 1, 1 ))
                    {
                        SET_PLAYER_CONTROL( sub_631(), 0 );
                        if (DOES_BLIP_EXIST( l_U356 ))
                        {
                            REMOVE_BLIP( l_U356 );
                        }
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        l_U354 = 6;
                    }
                }
            }
            break;
            case 6:
            if (IS_SCREEN_FADED_OUT())
            {
                CLEAR_AREA( -1712.91200000, 358.71610000, 24.44440000, 100.00000000, 1 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                if (NOT (IS_CHAR_INJURED( l_U591 )))
                {
                    DELETE_CHAR( ref l_U591 );
                    sub_35123( 3 );
                    REMOVE_ANIMS( "AMB_SIT_STEP_M" );
                }
                if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3670(), -1712.91200000, 358.71610000, 24.44440000 );
                    SET_CHAR_HEADING( sub_3670(), 335.00000000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_3670(), -1712.91200000, 358.71610000, 24.44440000 );
                    SET_CHAR_HEADING( sub_3670(), 335.00000000 );
                }
                if ((DOES_VEHICLE_EXIST( l_U456 )) AND (IS_VEH_DRIVEABLE( l_U456 )))
                {
                    SET_CAR_COORDINATES( l_U456, l_U587._fU0, l_U587._fU4, l_U587._fU8 );
                    SET_CAR_HEADING( l_U456, 62.50000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U456 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                LOAD_ADDITIONAL_TEXT( "E1R3AUD", 6 );
                START_CUTSCENE_NOW( "RB03_BA" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "RB03_BA" );
                DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                sub_35547();
            }
            break;
        }
    }
    return;
}

void sub_578()
{
    sub_587();
    return;
}

void sub_587()
{
    int iVar2;

    iVar2 = 5;
    sub_601( iVar2 );
    sub_1830( iVar2 );
    return;
}

void sub_601(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_631(), 150 );
    CLEAR_HELP();
    sub_681( uParam0 );
    return;
}

void sub_631()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_681(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_725();
        sub_933();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1058();
            sub_1110();
            g_U11095 = 1;
        }
    }
    sub_1203();
    sub_1342();
    uVar5 = sub_1455( uParam0 );
    sub_1731( uVar5, 0 );
    return;
}

void sub_725()
{
    if (g_U10993)
    {
        return;
    }
    sub_752( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_873();
    }
    return;
}

void sub_752(int iParam0)
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
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_873()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_933()
{
    sub_942();
    return;
}

void sub_942()
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

void sub_1058()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1110()
{
    sub_1119();
    return;
}

void sub_1119()
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

void sub_1203()
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

void sub_1342()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1364();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1364()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1455(unknown uParam0)
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
    sub_1686( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1686(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1731(int iParam0, boolean bParam1)
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

void sub_1830(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1839();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2599())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2665();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1839()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_1877( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_1877( 1, g_U572[I] )) != 0)
            {
                sub_2163( I );
            }
        }
    }
    if (NOT sub_2329())
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

int sub_1877(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2163(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2248( g_U572 - 1 );
    return;
}

void sub_2248(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2329()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1877( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2599()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2665()
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

void sub_2840()
{
    if (l_U418)
    {
        sub_2859();
    }
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1643309849, 63821, 354, 26, 0, 0.00000000 );
    g_U11097 = 0;
    g_U11099 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_2968();
    g_U11220 = 0;
    g_U10460 = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2859()
{
    g_U39126 = 0;
    return;
}

void sub_2968()
{
    for ( l_U533 = 0; l_U533 < 4; l_U533++ )
    {
        REMOVE_BLIP( l_U357[l_U533] );
        REMOVE_BLIP( l_U362[l_U533] );
        REMOVE_BLIP( l_U367[l_U533] );
        REMOVE_BLIP( l_U372[l_U533] );
        REMOVE_BLIP( l_U377[l_U533] );
    }
    REMOVE_BLIP( l_U356 );
    return;
}

int sub_3241(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

int sub_3349(unknown uParam0)
{
    unknown uVar3;

    uVar3 = nil;
    GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
    if (NOT (IS_CHAR_INJURED( uVar3 )))
    {
        return 1;
    }
    return 0;
}

void sub_3547(unknown uParam0)
{
    StrCopy( ref l_U22._fU0, uParam0, 16 );
    sub_3564();
    return;
}

void sub_3564()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U22._fU16[I]._fU0 = nil;
        StrCopy( ref l_U22._fU16[I]._fU4, "", 32 );
        l_U22._fU344[I] = 0;
    }
    return;
}

void sub_3670()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3721(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U22._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U22._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3801( "\n PED NUMBER ", uParam0 );
    sub_3841( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3801(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3841(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3948()
{
    vector vVar2;
    float fVar5;
    vector vVar6;
    float fVar9;

    vVar2 = {-1513.57700000, 1102.58200000, 25.05590000};
    fVar5 = 5.00000000;
    vVar6 = {0.00000000, 0.00000000, 0.50000000};
    switch (l_U355)
    {
        case 0:
        REQUEST_MODEL( -657414365 );
        REQUEST_MODEL( 203767144 );
        if ((HAS_MODEL_LOADED( -657414365 )) AND (HAS_MODEL_LOADED( 203767144 )))
        {
            CREATE_OBJECT_NO_OFFSET( -657414365, vVar2.x, vVar2.y, vVar2.z, ref l_U590, 1 );
            SET_OBJECT_HEADING( l_U590, fVar5 );
            FREEZE_OBJECT_POSITION( l_U590, 1 );
            SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U590, 1 );
            l_U355 = 1;
        }
        break;
        case 1:
        if (DOES_OBJECT_EXIST( l_U590 ))
        {
            GET_OBJECT_HEALTH( l_U590, ref fVar9 );
            if (fVar9 < 900.00000000)
            {
                l_U355 = 2;
            }
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U590 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U590, vVar6.x, vVar6.y, vVar6.z, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            DELETE_OBJECT( ref l_U590 );
        }
        ADD_EXPLOSION( vVar6.x, vVar6.y, vVar6.z, 0, 1.00000000, 1, 0, 1.00000000 );
        CREATE_OBJECT_NO_OFFSET( 203767144, vVar2.x, vVar2.y, vVar2.z, ref l_U590, 1 );
        SET_OBJECT_HEADING( l_U590, fVar5 );
        FREEZE_OBJECT_POSITION( l_U590, 1 );
        if (NOT (sub_4382( l_U594 )))
        {
            SAY_AMBIENT_SPEECH( sub_3670(), "GENERIC_CELEBRATION", 0, 0, 2 );
        }
        l_U355 = 3;
        break;
    }
    return;
}

int sub_4382(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_4494( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4494( "\n speech is not playing" );
    }
    return 0;
}

void sub_4494(unknown uParam0)
{
    return;
}

void sub_4618()
{
    unknown uVar2;

    if (NOT l_U542)
    {
        if (l_U354 == 4)
        {
            if (sub_4650())
            {
                if (NOT l_U543)
                {
                    if (l_U418)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), l_U584._fU0, l_U584._fU4, l_U584._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                            {
                                HINT_CAM( -1543.05100000, 1104.56500000, 31.57740000, 0, 0, 0, 3000 );
                                TASK_GUARD_CURRENT_POSITION( g_U11081[0], 0.00000000, 0.30000000, 0 );
                                l_U563 = 0;
                                sub_4885( ref l_U550, "E1R3_ARRV", ref l_U563 );
                                if (NOT (IS_CHAR_IN_ANY_HELI( sub_3670() )))
                                {
                                    if (sub_5016())
                                    {
                                        sub_4885( ref l_U550, "E1B3_SIDE", ref l_U563 );
                                    }
                                    else
                                    {
                                        sub_4885( ref l_U550, "E1B3_CLIMB", ref l_U563 );
                                    }
                                }
                                sub_5207();
                                sub_4885( ref l_U550, "E1R3_ARRV2", ref l_U563 );
                                sub_5374( ref l_U550, ref l_U563 );
                                sub_5428( ref l_U550, ref l_U594, 6, 1 );
                                sub_6355( 40.00000000 );
                            }
                            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                            {
                                TASK_GUARD_CURRENT_POSITION( g_U11081[1], 0.00000000, 0.30000000, 0 );
                            }
                            g_U39149[18] = 3;
                            l_U543 = 1;
                        }
                        else if (NOT l_U544)
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), l_U584._fU0, l_U584._fU4, l_U584._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11081[0] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[1] ))))
                                {
                                    if ((IS_VEH_DRIVEABLE( g_U11087[0] )) AND (IS_VEH_DRIVEABLE( g_U11087[1] )))
                                    {
                                        CLEAR_AREA_OF_CARS( -1534.22800000, 1085.33700000, 25.61870000, 5.00000000 );
                                        TASK_SET_COMBAT_DECISION_MAKER( g_U11081[0], l_U448 );
                                        TASK_SET_COMBAT_DECISION_MAKER( g_U11081[1], l_U448 );
                                        GIVE_WEAPON_TO_CHAR( g_U11081[0], 14, 30000, 1 );
                                        GIVE_WEAPON_TO_CHAR( g_U11081[1], 14, 30000, 1 );
                                        sub_3721( 3, g_U11081[0], "TERRY", 0 );
                                        sub_3721( 2, g_U11081[1], "CLAY", 0 );
                                        PRINT_HELP_FOREVER( "R3BBHELP" );
                                        SETTIMERA( 0 );
                                        GET_GAME_TIMER( ref l_U593 );
                                        for ( l_U533 = 0; l_U533 < 4; l_U533++ )
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U382[l_U533] )))
                                            {
                                                if (IS_CHAR_IN_ANY_CAR( l_U382[l_U533] ))
                                                {
                                                    GET_SCRIPT_TASK_STATUS( l_U382[l_U533], 49, ref l_U541 );
                                                    if (l_U541 == 1)
                                                    {
                                                        SET_DRIVE_TASK_CRUISE_SPEED( l_U382[l_U533], 30.00000000 );
                                                    }
                                                }
                                            }
                                        }
                                        sub_6355( 20.00000000 );
                                        l_U544 = 1;
                                    }
                                }
                            }
                            else
                            {
                                l_U542 = 1;
                            }
                        }
                    }
                }
            }
            else
            {
                sub_7183();
            }
        }
        else if (sub_4650())
        {
            g_U39149[18] = 3;
            l_U542 = 1;
        }
    }
    return;
}

int sub_4650()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_4885(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5016()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U458[I] ))
        {
            if (LOCATE_CAR_3D( l_U458[I], l_U584._fU0, l_U584._fU4, l_U584._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
            {
                l_U549 = 1;
            }
        }
    }
    return l_U549;
}

void sub_5207()
{
    int I;
    int iVar3;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U382[I] )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U382[I] ))
            {
                GET_SCRIPT_TASK_STATUS( l_U382[I], 49, ref iVar3 );
                if (iVar3 == 1)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( l_U382[I], 15.00000000 );
                }
            }
        }
    }
    return;
}

void sub_5374(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_5428(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_5449( uParam0, ref l_U22._fU0, uParam1, uParam2, uParam3 );
}

void sub_5449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_5476( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_5476(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_5498( iParam1 )))
    {
        return 0;
    }
    l_U22._fU384 = 0;
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
    sub_6174( ref g_U8947, ref l_U22 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_5498(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4494( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4494( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4494( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_6174(int iParam0, int iParam1)
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

void sub_6355(unknown uParam0)
{
    int I;
    unknown uVar4;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT l_U407[I])
        {
            l_U412[I] = uParam0;
            if (IS_VEH_DRIVEABLE( l_U458[I] ))
            {
                if (NOT (sub_6432( l_U458[I] )))
                {
                    GET_DRIVER_OF_CAR( l_U458[I], ref uVar4 );
                    if (NOT (IS_CHAR_INJURED( uVar4 )))
                    {
                        GET_SCRIPT_TASK_STATUS( uVar4, 15, ref l_U541 );
                        if (l_U541 == 1)
                        {
                            CLEAR_CHAR_TASKS( uVar4 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_6432(unknown uParam0)
{
    if ((((CHECK_STUCK_TIMER( uParam0, 3, 3000 )) || (CHECK_STUCK_TIMER( uParam0, 2, 3000 ))) || (CHECK_STUCK_TIMER( uParam0, 1, 3000 ))) || (CHECK_STUCK_TIMER( uParam0, 0, 3000 )))
    {
        return 1;
    }
    return 0;
}

void sub_7183()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_CHAR_COORDINATES( sub_3670(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    uVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), l_U584._fU0, l_U584._fU4, l_U584._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )) || (l_U354 != 4))
    {
        if (l_U418)
        {
            g_U11097 = 0;
            g_U11099 = 0;
            sub_2859();
            l_U418 = 0;
        }
    }
    else if (NOT l_U418)
    {
        sub_7407( l_U571[0], l_U581[0], 1, l_U564[0], l_U578[0], l_U571[1], l_U581[1], 1, l_U564[1], l_U578[1], 1 );
        sub_7588( "E1R3AUD", "E1R3_CALL5", "E1R3_CALL4" );
        l_U418 = 1;
    }
    return;
}

void sub_7407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    g_U11183[0] = {uParam0};
    g_U11159[0] = uParam3;
    g_U11120[0] = uParam4;
    g_U11190[0] = {uParam5};
    g_U11162[0] = uParam8;
    g_U11183[1] = {uParam9};
    g_U11159[1] = uParam12;
    g_U11120[1] = uParam13;
    g_U11190[1] = {uParam14};
    g_U11162[1] = uParam17;
    g_U11097 = uParam18;
    g_U11099 = 1;
    return;
}

void sub_7588(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U39126 = 1;
    StrCopy( ref g_U39127, uParam0, 16 );
    StrCopy( ref g_U39131, uParam1, 32 );
    StrCopy( ref g_U39139, uParam2, 32 );
    return;
}

void sub_8128()
{
    REQUEST_SCRIPT( "ability_backup" );
    while (NOT (HAS_SCRIPT_LOADED( "ability_backup" )))
    {
        REQUEST_SCRIPT( "ability_backup" );
        WAIT( 0 );
    }
    START_NEW_SCRIPT( "ability_backup", 1828 );
    return;
}

void sub_8270()
{
    int iVar2;

    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "R3BBHELP" ))
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 > (l_U593 + 16000))
        {
            CLEAR_HELP();
        }
    }
    return;
}

int sub_8563()
{
    REQUEST_ANIMS( "AMB_SIT_STEP_M" );
    REQUEST_ANIMS( "MISSRAYB_3" );
    sub_8617( 3 );
    if (((HAVE_ANIMS_LOADED( "AMB_SIT_STEP_M" )) AND (HAVE_ANIMS_LOADED( "MISSRAYB_3" ))) AND (sub_9007( 3 )))
    {
        return 1;
    }
    return 0;
}

void sub_8617(unknown uParam0)
{
    REQUEST_MODEL( sub_8628( uParam0 ) );
    return;
}

int sub_8628(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_1686( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_9007(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_8628( uParam0 ) );
}

int sub_9058()
{
    REQUEST_CAR_RECORDING( 2950 );
    REQUEST_MODEL( sub_8628( 1 ) );
    REQUEST_MODEL( sub_9091( 1 ) );
    REQUEST_MODEL( 841808271 );
    if ((((HAS_MODEL_LOADED( sub_8628( 1 ) )) AND (HAS_MODEL_LOADED( sub_9091( 1 ) ))) AND (HAS_MODEL_LOADED( 841808271 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 2950 )))
    {
        return 1;
    }
    return 0;
}

int sub_9091(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_9575(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_9937(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_10146()
{
    CREATE_CAR( 841808271, -144.47120000, -267.53770000, 11.67740000, ref l_U609, 1 );
    SET_CAR_HEADING( l_U609, 270.00000000 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U609 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 841808271 );
    CREATE_CAR( sub_9091( 1 ), -126.44920000, -252.47200000, 12.04140000, ref l_U600, 1 );
    CREATE_CHAR_INSIDE_CAR( l_U600, 26, sub_8628( 1 ), ref l_U601 );
    SET_CAR_HEADING( l_U600, 9.00000000 );
    SET_CHAR_PROOFS( l_U601, 1, 1, 1, 1, 1 );
    SET_CAR_PROOFS( l_U600, 1, 1, 1, 1, 1 );
    START_PLAYBACK_RECORDED_CAR( l_U600, 2950 );
    SET_PLAYBACK_SPEED( l_U600, 0.00000000 );
    SET_WIDESCREEN_BORDERS( 1 );
    return;
}

void sub_10386()
{
    int I;
    vector[2] vVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector[2] vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float[2] fVar17;

    array(ref vVar3, 2);
    array(ref vVar10, 2);
    array(ref fVar17, 2);
    if (l_U612)
    {
        vVar3[0] = {-123.00330000, -263.88530000, 12.96952000};
        vVar10[0] = {6.98728500, -0.00000000, 24.48631000};
        fVar17[0] = 35.00000000;
        vVar3[1] = {-123.00330000, -263.88530000, 12.96952000};
        vVar10[1] = {6.98728500, -0.00000000, 24.48631000};
        fVar17[1] = 40.00000000;
    }
    else
    {
        vVar3[0] = {-123.33660000, -259.37370000, 12.07688000};
        vVar10[0] = {13.62876000, 0.00000000, 38.57740000};
        fVar17[0] = 35.00000000;
        vVar3[1] = {-126.58580000, -260.60620000, 12.34111000};
        vVar10[1] = {2.70425600, 0.00000000, -9.62808100};
        fVar17[1] = 40.00000000;
    }
    BEGIN_CAM_COMMANDS( ref l_U602 );
    for ( I = 0; I < 2; I++ )
    {
        CREATE_CAM( 14, ref l_U603[I] );
        SET_CAM_POS( l_U603[I], vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8 );
        SET_CAM_ROT( l_U603[I], vVar10[I]._fU0, vVar10[I]._fU4, vVar10[I]._fU8 );
        SET_CAM_FOV( l_U603[I], fVar17[I] );
    }
    CREATE_CAM( 3, ref l_U603[2] );
    SET_CAM_INTERP_STYLE_CORE( l_U603[2], l_U603[0], l_U603[1], 2750, 0 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U603[2], 1, 0, 1, 1 );
    SET_CAM_ACTIVE( l_U603[2], 1 );
    SET_CAM_PROPAGATE( l_U603[2], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

int sub_11066()
{
    if ((IS_VEH_DRIVEABLE( l_U600 )) AND (NOT (IS_CHAR_INJURED( l_U601 ))))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U600 )))
        {
            INCREMENT_INT_STAT( 373, 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            DELETE_CHAR( ref l_U601 );
            DELETE_CAR( ref l_U600 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_9091( 1 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_8628( 1 ) );
            REMOVE_ANIMS( "MISSRAYB_3" );
            return 1;
        }
        else if ((FIND_POSITION_IN_RECORDING( l_U600 )) > 19.00000000)
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U600 );
        }
        else
        {
            SET_PLAYBACK_SPEED( l_U600, 1.40000000 );
        }
        if (sub_11277())
        {
            INCREMENT_INT_STAT( 372, 1 );
            DO_SCREEN_FADE_OUT( 250 );
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            if ((IS_VEH_DRIVEABLE( l_U600 )) AND (NOT (IS_CHAR_INJURED( l_U601 ))))
            {
                DELETE_CHAR( ref l_U601 );
                DELETE_CAR( ref l_U600 );
            }
            return 1;
        }
    }
    return 0;
}

int sub_11277()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_11518()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        SET_CAM_ACTIVE( l_U603[I], 0 );
        SET_CAM_PROPAGATE( l_U603[I], 0 );
        DESTROY_CAM( l_U603[I] );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U602 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

void sub_11640()
{
    if (IS_WANTED_LEVEL_GREATER( sub_631(), 0 ))
    {
        if (DOES_BLIP_EXIST( l_U356 ))
        {
            REMOVE_BLIP( l_U356 );
        }
        if (NOT l_U547)
        {
            if (NOT (sub_4382( l_U594 )))
            {
                PRINT_NOW( "R3Cops", 7500, 1 );
                l_U547 = 1;
            }
        }
    }
    else if (NOT (DOES_BLIP_EXIST( l_U356 )))
    {
        if (l_U592)
        {
            ADD_BLIP_FOR_CHAR( l_U591, ref l_U356 );
            SET_BLIP_AS_FRIENDLY( l_U356, 1 );
            SET_ROUTE( l_U356, 1 );
        }
        else
        {
            ADD_BLIP_FOR_COORD( l_U587._fU0, l_U587._fU4, l_U587._fU8, ref l_U356 );
            SET_ROUTE( l_U356, 1 );
        }
    }
    else if (NOT l_U528)
    {
        if (NOT (sub_4382( l_U594 )))
        {
            if (l_U592)
            {
                PRINT_NOW( "GETTOASHLEYB", 7500, 1 );
                l_U528 = 1;
            }
            else
            {
                PRINT_NOW( "GETTOASHLEY", 7500, 1 );
                l_U528 = 1;
            }
        }
    };;;
    return;
}

int sub_12456(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_12465();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_12613( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_12465()
{
    return 301427732;
}

void sub_12613(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

int sub_14674()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U463[0] = {-1769.36400000, 358.57990000, 24.44560000};
    l_U476[0] = 330.00000000;
    l_U463[1] = {-1367.71500000, -1.04760000, 5.62740000};
    l_U476[1] = 56.16790000;
    l_U463[2] = {-859.76280000, 1240.59900000, 20.26560000};
    l_U476[2] = 269.73990000;
    l_U463[3] = {-1143.96300000, 1795.56000000, 12.31220000};
    l_U476[3] = 278.88160000;
    REQUEST_MODEL( l_U455 );
    REQUEST_MODEL( -302362397 );
    REQUEST_MODEL( -1616890832 );
    if (((HAS_MODEL_LOADED( l_U455 )) AND (HAS_MODEL_LOADED( -302362397 ))) AND (HAS_MODEL_LOADED( -1616890832 )))
    {
        if ((((NOT l_U481[0]) || (NOT l_U481[1])) || (NOT l_U481[2])) || (NOT l_U481[3]))
        {
            for ( l_U533 = 0; l_U533 < 4; l_U533++ )
            {
                if (NOT l_U481[l_U533])
                {
                    GET_CHAR_COORDINATES( sub_3670(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    iVar2 = GET_MAP_AREA_FROM_COORDS( uVar3 );
                    if (iVar2 != 3)
                    {
                        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar3._fU0, uVar3._fU4, uVar3._fU8, sub_15055( 76, 92 ), ref l_U463[l_U533]._fU0, ref l_U463[l_U533]._fU4, ref l_U463[l_U533]._fU8, ref l_U476[l_U533] );
                    }
                    if (sub_15157( l_U463[l_U533] ))
                    {
                        CLEAR_AREA( l_U463[l_U533]._fU0, l_U463[l_U533]._fU4, l_U463[l_U533]._fU8, 5.00000000, 0 );
                        CREATE_CAR( l_U455, l_U463[l_U533]._fU0, l_U463[l_U533]._fU4, l_U463[l_U533]._fU8, ref l_U458[l_U533], 1 );
                        SET_CAR_HEADING( l_U458[l_U533], l_U476[l_U533] );
                        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U458[l_U533], 1 );
                        SET_VEH_HAS_STRONG_AXLES( l_U458[l_U533], 1 );
                        SET_CAR_PROOFS( l_U458[l_U533], 0, 0, 0, 1, 0 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U458[l_U533] );
                        sub_15598( l_U533 );
                        SET_RELATIONSHIP( 5, 23, 0 );
                        l_U481[l_U533] = 1;
                        if (DOES_BLIP_EXIST( l_U356 ))
                        {
                            REMOVE_BLIP( l_U356 );
                        }
                    }
                    else
                    {
                        l_U463[0] = {-1769.36400000, 358.57990000, 24.44560000};
                        l_U476[0] = 330.00000000;
                        l_U463[1] = {-1367.71500000, -1.04760000, 5.62740000};
                        l_U476[1] = 56.16790000;
                        l_U463[2] = {-859.76280000, 1240.59900000, 20.26560000};
                        l_U476[2] = 269.73990000;
                        l_U463[3] = {-1143.96300000, 1795.56000000, 12.31220000};
                        l_U476[3] = 278.88160000;
                    }
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void sub_15055(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_15157(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int Result;
    unknown uVar11;

    Result = 1;
    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    if (NOT (IS_CHAR_INJURED( sub_3670() )))
    {
        GET_CHAR_COORDINATES( sub_3670(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        iVar9 = GET_MAP_AREA_FROM_COORDS( uVar5 );
        if (iVar8 != iVar9)
        {
            Result = 0;
        }
    }
    GET_GAME_VIEWPORT_ID( ref uVar11 );
    if (CAM_IS_SPHERE_VISIBLE( uVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            Result = 0;
        }
    }
    return Result;
}

void sub_15598(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( l_U458[uParam0] ))
    {
        l_U412[uParam0] = 5.00000000;
        CREATE_CHAR_INSIDE_CAR( l_U458[uParam0], 26, -1616890832, ref l_U382[uParam0] );
        SET_PED_DIES_WHEN_INJURED( l_U382[uParam0], 1 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U382[uParam0], 23 );
        SET_COMBAT_DECISION_MAKER( l_U382[uParam0], l_U447 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U382[uParam0] );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U382[uParam0], 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U382[uParam0], 1 );
        GIVE_WEAPON_TO_CHAR( l_U382[uParam0], sub_15786(), 30000, 1 );
        SET_CHAR_ACCURACY( l_U382[uParam0], sub_15852() );
        TASK_CAR_MISSION_PED_TARGET( l_U382[uParam0], l_U458[uParam0], sub_3670(), 6, l_U412[uParam0], 3, 10, 20 );
        SET_CHAR_AS_ENEMY( l_U382[uParam0], 1 );
        ADD_BLIP_FOR_CHAR( l_U382[uParam0], ref l_U362[uParam0] );
        SET_CHAR_MONEY( l_U382[uParam0], 250 );
        ADD_ARMOUR_TO_CHAR( l_U382[uParam0], 100 );
        SET_CHAR_HEALTH( l_U382[uParam0], 250 );
        SET_CHAR_MAX_HEALTH( l_U382[uParam0], 250 );
        SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U382[uParam0], 0 );
        SET_CHAR_DROWNS_IN_WATER( l_U382[uParam0], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U458[uParam0], 26, -302362397, 0, ref l_U387[uParam0] );
        SET_PED_DIES_WHEN_INJURED( l_U387[uParam0], 1 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U387[uParam0], 23 );
        SET_COMBAT_DECISION_MAKER( l_U387[uParam0], l_U447 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U387[uParam0] );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U387[uParam0], 0 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U387[uParam0], 1 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U387[uParam0], 1 );
        GIVE_WEAPON_TO_CHAR( l_U387[uParam0], 26, 30000, 1 );
        SET_CHAR_ACCURACY( l_U387[uParam0], sub_15852() );
        TASK_COMBAT( l_U387[uParam0], sub_3670() );
        SET_CHAR_AS_ENEMY( l_U387[uParam0], 1 );
        ADD_BLIP_FOR_CHAR( l_U387[uParam0], ref l_U367[uParam0] );
        SET_CHAR_MONEY( l_U387[uParam0], 250 );
        ADD_ARMOUR_TO_CHAR( l_U387[uParam0], 100 );
        SET_CHAR_HEALTH( l_U387[uParam0], 250 );
        SET_CHAR_MAX_HEALTH( l_U387[uParam0], 250 );
        SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U387[uParam0], 0 );
        SET_CHAR_DROWNS_IN_WATER( l_U387[uParam0], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U458[uParam0], 26, -302362397, 1, ref l_U392[uParam0] );
        SET_PED_DIES_WHEN_INJURED( l_U392[uParam0], 1 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U392[uParam0], 23 );
        SET_COMBAT_DECISION_MAKER( l_U392[uParam0], l_U447 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U392[uParam0] );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U392[uParam0], 0 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U392[uParam0], 1 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U392[uParam0], 1 );
        GIVE_WEAPON_TO_CHAR( l_U392[uParam0], sub_16619(), 30000, 1 );
        SET_CHAR_ACCURACY( l_U392[uParam0], sub_15852() );
        TASK_COMBAT( l_U392[uParam0], sub_3670() );
        SET_CHAR_AS_ENEMY( l_U392[uParam0], 1 );
        ADD_BLIP_FOR_CHAR( l_U392[uParam0], ref l_U372[uParam0] );
        SET_CHAR_MONEY( l_U392[uParam0], 250 );
        ADD_ARMOUR_TO_CHAR( l_U392[uParam0], 100 );
        SET_CHAR_HEALTH( l_U392[uParam0], 250 );
        SET_CHAR_MAX_HEALTH( l_U392[uParam0], 250 );
        SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U392[uParam0], 0 );
        SET_CHAR_DROWNS_IN_WATER( l_U392[uParam0], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U458[uParam0], 26, -1616890832, 2, ref l_U397[uParam0] );
        SET_PED_DIES_WHEN_INJURED( l_U397[uParam0], 1 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U397[uParam0], 23 );
        SET_COMBAT_DECISION_MAKER( l_U397[uParam0], l_U447 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U397[uParam0] );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U397[uParam0], 0 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U397[uParam0], 1 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U397[uParam0], 1 );
        GIVE_WEAPON_TO_CHAR( l_U397[uParam0], sub_16619(), 30000, 1 );
        SET_CHAR_ACCURACY( l_U397[uParam0], sub_15852() );
        TASK_COMBAT( l_U397[uParam0], sub_3670() );
        SET_CHAR_AS_ENEMY( l_U397[uParam0], 1 );
        ADD_BLIP_FOR_CHAR( l_U397[uParam0], ref l_U377[uParam0] );
        SET_CHAR_MONEY( l_U397[uParam0], 250 );
        ADD_ARMOUR_TO_CHAR( l_U397[uParam0], 100 );
        SET_CHAR_HEALTH( l_U397[uParam0], 250 );
        SET_CHAR_MAX_HEALTH( l_U397[uParam0], 250 );
        SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U397[uParam0], 0 );
        SET_CHAR_DROWNS_IN_WATER( l_U397[uParam0], 0 );
    }
    return;
}

int sub_15786()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        return 9;
        break;
    }
    return 7;
}

void sub_15852()
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( l_U531, l_U530, ref Result );
    return Result;
}

int sub_16619()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        return 12;
        break;
    }
    return 13;
}

int sub_18194()
{
    if (LOCATE_CHAR_ANY_MEANS_2D( sub_3670(), l_U587._fU0, l_U587._fU4, 500.00000000, 500.00000000, 0 ))
    {
        return 1;
    }
    GET_CHAR_COORDINATES( sub_3670(), ref l_U534._fU0, ref l_U534._fU4, ref l_U534._fU8 );
    if (TIMERB() > 155000)
    {
        if (l_U534._fU8 > -10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_18362(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_18422( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_18422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_4494( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_4494( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_631() )))
    {
        sub_4494( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3670() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3670() ))))
    {
        sub_4494( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_4494( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_18937()) AND (NOT bParam11))
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
                sub_4494( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_18937()) AND (NOT bParam11))
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
    sub_20309( uParam0, ref g_U94._fU176 );
    sub_20705( ref g_U94._fU160 );
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
        sub_3841( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_18937()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_18994())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_18994()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_631() )))
    {
        sub_4494( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4494( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_4494( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_4494( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_631() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3670() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3670(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4494( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3670() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4494( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_4494( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_631() )))
    {
        sub_4494( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_20309(unknown uParam0, unknown uParam1)
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

void sub_20705(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

int sub_21252()
{
    if ((g_U94._fU0 == 1007) || (g_U94._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

void sub_21308()
{
    if ((g_U558 == 1) || (g_U8946 == 4))
    {
        if (g_U94._fU60 != -1)
        {
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U94._fU376 = 0;
        g_U94._fU100 = 1;
    }
    return;
}

int sub_21433(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3670(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_4494( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_21717()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

int sub_21839()
{
    if ((g_U38767 == 0) || (g_U38767 == 3))
    {
        return 1;
    }
    return 0;
}

void sub_21901()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT sub_4650())
    {
        array(ref uVar4._fU0._fU0, 3);
        ref uVar4._fU0;
        ref uVar4;
        switch (g_U11134)
        {
            default:
              case 0:
            iVar2 = 1;
            iVar3 = 15;
            break;
            case 1:
            iVar2 = 1;
            iVar3 = 16;
            break;
            case 2:
            iVar2 = 1;
            iVar3 = 17;
            break;
            case 3:
            iVar2 = 1;
            iVar3 = 18;
            break;
        }
        g_U11134++;
        if (g_U11134 > 3)
        {
            g_U11134 = 0;
        }
        sub_22062( iVar2, iVar3, 16383, 16383, ref uVar4 );
        sub_22406( ref uVar4, 1 );
        sub_22434( ref uVar4, 0 );
        sub_22461( ref uVar4 );
    }
    return;
}

void sub_22062(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_22084( uParam0, 0, iParam4 + 0 );
    sub_22084( uParam1, 1, iParam4 + 0 );
    sub_22084( uParam2, 2, iParam4 + 0 );
    sub_22084( uParam3, 3, iParam4 + 0 );
    sub_22084( 0, 4, iParam4 + 0 );
    sub_22084( 1, 5, iParam4 + 0 );
    sub_22084( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_22084(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_22406(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_22434(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_22461(int iParam0)
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
        if (NOT sub_22531())
        {
            sub_2163( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_22658( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2163( iVar9 );
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
                ConcatString(ref cVar5, sub_1877( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1877( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_22531()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_1877( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_2163( I );
            return 1;
        }
    }
    return 0;
}

int sub_22658(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_22723( uParam0, g_U572[Result] ))
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

int sub_22723(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_1877( 0, uParam0 );
        if (iVar14 == (sub_1877( 0, uParam6 )))
        {
            iVar15 = sub_1877( 3, uParam0 );
            if (iVar15 == (sub_1877( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23470()
{
    if ((((((((((((((((IS_CHAR_INJURED( l_U382[0] )) AND (IS_CHAR_INJURED( l_U387[0] ))) AND (IS_CHAR_INJURED( l_U392[0] ))) AND (IS_CHAR_INJURED( l_U397[0] ))) AND (IS_CHAR_INJURED( l_U382[1] ))) AND (IS_CHAR_INJURED( l_U387[1] ))) AND (IS_CHAR_INJURED( l_U392[1] ))) AND (IS_CHAR_INJURED( l_U397[1] ))) AND (IS_CHAR_INJURED( l_U382[2] ))) AND (IS_CHAR_INJURED( l_U387[2] ))) AND (IS_CHAR_INJURED( l_U392[2] ))) AND (IS_CHAR_INJURED( l_U397[2] ))) AND (IS_CHAR_INJURED( l_U382[3] ))) AND (IS_CHAR_INJURED( l_U387[3] ))) AND (IS_CHAR_INJURED( l_U392[3] ))) AND (IS_CHAR_INJURED( l_U397[3] )))
    {
        return 1;
    }
    else
    {
        SETTIMERA( 0 );
    }
    return 0;
}

void sub_23793(unknown uParam0)
{
    if (DOES_BLIP_EXIST( l_U362[uParam0] ))
    {
        if (IS_CHAR_INJURED( l_U382[uParam0] ))
        {
            REMOVE_BLIP( l_U362[uParam0] );
        }
    }
    if (DOES_BLIP_EXIST( l_U367[uParam0] ))
    {
        if (IS_CHAR_INJURED( l_U387[uParam0] ))
        {
            REMOVE_BLIP( l_U367[uParam0] );
        }
    }
    if (DOES_BLIP_EXIST( l_U372[uParam0] ))
    {
        if (IS_CHAR_INJURED( l_U392[uParam0] ))
        {
            REMOVE_BLIP( l_U372[uParam0] );
        }
    }
    if (DOES_BLIP_EXIST( l_U377[uParam0] ))
    {
        if (IS_CHAR_INJURED( l_U397[uParam0] ))
        {
            REMOVE_BLIP( l_U377[uParam0] );
        }
    }
    if (DOES_BLIP_EXIST( l_U357[uParam0] ))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U458[uParam0] )))
        {
            REMOVE_BLIP( l_U357[uParam0] );
        }
    }
    return;
}

void sub_24528(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24549( uParam0, ref l_U22._fU0, uParam1, uParam2, uParam3 );
}

void sub_24549(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_5476( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_24669()
{
    float fVar2;
    int iVar3;
    int iVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    float fVar10;
    unknown[4] uVar11;
    float fVar16;
    int iVar17;
    int iVar18;
    int iVar19;

    fVar2 = 1.00000000;
    fVar9 = 99999.00000000;
    fVar10 = 99999.00000000;
    array(ref uVar11, 4);
    l_U412[0] = 5.00000000;
    l_U412[1] = 5.00000000;
    l_U412[2] = 5.00000000;
    l_U412[3] = 5.00000000;
    GET_GAME_TIMER( ref iVar4 );
    if (iVar4 > (l_U419 + 5000))
    {
        GET_CHAR_COORDINATES( sub_3670(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        for ( I = 0; I < 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U382[I] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U382[I], 49, ref iVar3 );
                if (iVar3 == 1)
                {
                    if (IS_VEH_DRIVEABLE( l_U458[I] ))
                    {
                        GET_CAR_COORDINATES( l_U458[I], ref l_U463[I]._fU0, ref l_U463[I]._fU4, ref l_U463[I]._fU8 );
                        uVar11[I] = VDIST( uVar6, l_U463[I] );
                        if (uVar11[I] < fVar9)
                        {
                            fVar9 = uVar11[I];
                            iVar18 = iVar17;
                            iVar17 = I;
                        }
                        if (I != iVar17)
                        {
                            if (uVar11[I] < fVar10)
                            {
                                fVar10 = uVar11[I];
                                iVar18 = I;
                            }
                        }
                    }
                }
            }
            iVar19++;
        }
        if (iVar19 == 4)
        {
            l_U412[iVar17] = 30.00000000;
            l_U412[iVar18] = 25.00000000;
            fVar16 = 20.00000000;
        }
        else if (iVar19 == 3)
        {
            l_U412[iVar17] = 35.00000000;
            l_U412[iVar18] = 30.00000000;
            fVar16 = 20.00000000;
        }
        else if (iVar19 == 2)
        {
            l_U412[iVar17] = 40.00000000;
            l_U412[iVar18] = 35.00000000;
            fVar16 = 20.00000000;
        };;;
        if (((sub_4650()) AND (NOT l_U543)) AND (NOT l_U418))
        {
            fVar2 = 0.80000000;
        }
        for ( I = 0; I < 4; I++ )
        {
            if ((I != iVar17) AND (I != iVar18))
            {
                l_U412[I] = fVar16;
            }
            if (NOT (IS_CHAR_INJURED( l_U382[I] )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U382[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U382[I], 49, ref iVar3 );
                    if (iVar3 == 1)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( l_U382[I], fVar2 * l_U412[I] );
                    }
                }
            }
        }
        GET_GAME_TIMER( ref l_U419 );
    }
    return;
}

void sub_25501(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT l_U407[uParam0])
    {
        if (IS_VEH_DRIVEABLE( l_U458[uParam0] ))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                if ((sub_25563( sub_3670() )) || (IS_CHAR_IN_MODEL( sub_3670(), 800869680 )))
                {
                    if (NOT (sub_25778( ref l_U458[uParam0] )))
                    {
                        GET_CHAR_COORDINATES( sub_3670(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, sub_15055( 8, 24 ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 );
                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar7._fU0, uVar7._fU4, uVar7._fU8, 3.00000000, 3.00000000, 3.00000000 )))
                        {
                            SET_CAR_HEADING( l_U458[uParam0], uVar10 );
                            SET_CAR_COORDINATES( l_U458[uParam0], uVar7._fU0, uVar7._fU4, uVar7._fU8 );
                        }
                    }
                }
            }
            if (NOT (sub_6432( l_U458[uParam0] )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), l_U584._fU0, l_U584._fU4, l_U584._fU8, 25.00000000, 25.00000000, 25.00000000, 0 )) AND (LOCATE_CAR_3D( l_U458[uParam0], l_U584._fU0, l_U584._fU4, l_U584._fU8, 100.00000000, 100.00000000, 10.00000000, 0 )))
                {
                    if (LOCATE_CAR_3D( l_U458[uParam0], l_U537._fU0, l_U537._fU4, l_U537._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        sub_26271( uParam0 );
                        l_U407[uParam0] = 1;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U458[uParam0], ref uVar3 );
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            GET_SCRIPT_TASK_STATUS( uVar3, 15, ref l_U541 );
                            if (l_U541 == 7)
                            {
                                CLEAR_CHAR_TASKS( uVar3 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar3, 1 );
                                TASK_CAR_DRIVE_TO_COORD( uVar3, l_U458[uParam0], l_U537._fU0, l_U537._fU4, l_U537._fU8, 25.00000000, 0, 0, 2, 1.00000000, 10 );
                            }
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U382[uParam0] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U382[uParam0], 49, ref l_U541 );
                    if (l_U541 == 7)
                    {
                        TASK_CAR_MISSION_PED_TARGET( l_U382[uParam0], l_U458[uParam0], sub_3670(), 6, l_U412[uParam0], 3, 10, 20 );
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U387[uParam0] )))
                {
                    if (l_U402[uParam0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U387[uParam0], 49, ref l_U541 );
                        if (l_U541 == 7)
                        {
                            TASK_CAR_MISSION_PED_TARGET( l_U387[uParam0], l_U458[uParam0], sub_3670(), 6, l_U412[uParam0], 3, 10, 20 );
                        }
                    }
                }
                if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_3670(), l_U458[uParam0], 25.00000000, 25.00000000, 20.00000000, 0 ))
                {
                    sub_26271( uParam0 );
                    l_U407[uParam0] = 1;
                }
                if (IS_CHAR_INJURED( l_U382[uParam0] ))
                {
                    if (NOT l_U402[uParam0])
                    {
                        if (NOT (IS_CHAR_INJURED( l_U387[uParam0] )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U387[uParam0], 29, ref l_U541 );
                            if (l_U541 == 7)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U540 );
                                TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U458[uParam0] );
                                TASK_CAR_MISSION_PED_TARGET( 0, l_U458[uParam0], sub_3670(), 6, l_U412[uParam0], 3, 10, 20 );
                                CLOSE_SEQUENCE_TASK( l_U540 );
                                TASK_PERFORM_SEQUENCE( l_U387[uParam0], l_U540 );
                                CLEAR_SEQUENCE_TASK( l_U540 );
                                l_U402[uParam0] = 1;
                            }
                        }
                    }
                }
                else if ((IS_CHAR_INJURED( l_U382[uParam0] )) AND (IS_CHAR_INJURED( l_U387[uParam0] )))
                {
                    sub_26271( uParam0 );
                    l_U407[uParam0] = 1;
                }
                else if (((IS_CHAR_INJURED( l_U387[uParam0] )) AND (IS_CHAR_INJURED( l_U392[uParam0] ))) AND (IS_CHAR_INJURED( l_U397[uParam0] )))
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U382[uParam0], 1 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U382[uParam0], 0 );
                    l_U407[uParam0] = 1;
                };;;
            }
            else if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3670(), l_U458[uParam0], 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                sub_26271( uParam0 );
                l_U407[uParam0] = 1;
            }
            else if (NOT (IS_CHAR_INJURED( l_U382[uParam0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U382[uParam0], 15, ref l_U541 );
                if (l_U541 == 7)
                {
                    l_U534 = {sub_27913( sub_3670(), 1 )};
                    TASK_CAR_DRIVE_TO_COORD( l_U382[uParam0], l_U458[uParam0], l_U534._fU0, l_U534._fU4, l_U534._fU8, 10.00000000, 2, 0, 3, 10.00000000, 10 );
                }
            };;;
        }
        else
        {
            sub_26271( uParam0 );
            l_U407[uParam0] = 1;
        }
    }
    else
    {
        sub_28106( ref l_U382[uParam0] );
        sub_28106( ref l_U387[uParam0] );
        sub_28106( ref l_U397[uParam0] );
        sub_28106( ref l_U392[uParam0] );
    }
    sub_23793( uParam0 );
    return;
}

int sub_25563(int iParam0)
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
                if (sub_3241( uVar3 ))
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

int sub_25778(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (NOT (IS_CHAR_DEAD( sub_3670() )))
    {
        GET_CHAR_COORDINATES( sub_3670(), ref l_U534._fU0, ref l_U534._fU4, ref l_U534._fU8 );
        iVar3 = GET_MAP_AREA_FROM_COORDS( l_U534 );
    }
    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        GET_CAR_COORDINATES( (uParam0^), ref l_U534._fU0, ref l_U534._fU4, ref l_U534._fU8 );
        iVar4 = GET_MAP_AREA_FROM_COORDS( l_U534 );
    }
    if (iVar3 == iVar4)
    {
        return 1;
    }
    return 0;
}

void sub_26271(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U382[uParam0] )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U382[uParam0], 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U382[uParam0], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U382[uParam0], 0 );
        if (NOT (DOES_BLIP_EXIST( l_U362[uParam0] )))
        {
            ADD_BLIP_FOR_CHAR( l_U382[uParam0], ref l_U362[uParam0] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U382[uParam0], 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U387[uParam0] )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U387[uParam0], 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U387[uParam0], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U387[uParam0], 0 );
        if (NOT (DOES_BLIP_EXIST( l_U367[uParam0] )))
        {
            ADD_BLIP_FOR_CHAR( l_U387[uParam0], ref l_U367[uParam0] );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U392[uParam0] )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U392[uParam0], 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U392[uParam0], 0 );
        if (NOT (DOES_BLIP_EXIST( l_U372[uParam0] )))
        {
            ADD_BLIP_FOR_CHAR( l_U392[uParam0], ref l_U372[uParam0] );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U397[uParam0] )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U397[uParam0], 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U397[uParam0], 0 );
        if (NOT (DOES_BLIP_EXIST( l_U377[uParam0] )))
        {
            ADD_BLIP_FOR_CHAR( l_U397[uParam0], ref l_U377[uParam0] );
        }
    }
    if (l_U543)
    {
        if (NOT (sub_4382( l_U594 )))
        {
            if ((sub_15055( 0, 20 )) > 10)
            {
                if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), g_U11081[1], 25.00000000, 25.00000000, 25.00000000, 0 ))
                    {
                        sub_24528( "E1R3_TAKE", ref l_U594, 6, 1 );
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), g_U11081[0], 25.00000000, 25.00000000, 25.00000000, 0 ))
                {
                    sub_24528( "E1R3_TAKE2", ref l_U594, 6, 1 );
                }
            }
        }
    }
    else
    {
        g_U39149[18] = 2;
    }
    return;
}

void sub_27913(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_28106(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_25563( sub_3670() )) || (IS_CHAR_IN_MODEL( sub_3670(), 800869680 )))
            {
                GET_CHAR_COORDINATES( sub_3670(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar3._fU0, uVar3._fU4, uVar3._fU8, sub_15055( 16, 24 ), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar9 );
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1.00000000, 1.00000000, 1.00000000 )))
                {
                    SET_CHAR_HEADING( (uParam0^), uVar9 );
                    SET_CHAR_COORDINATES( (uParam0^), uVar6._fU0, uVar6._fU4, uVar6._fU8 );
                }
            }
        }
    }
    return;
}

void sub_28389()
{
    int I;
    string sVar3;
    unknown uVar4;

    if (l_U543)
    {
        if (TIMERB() > 15000)
        {
            if (NOT (sub_4382( l_U594 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                {
                    if (sub_28462())
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), g_U11081[0], 25.00000000, 25.00000000, 25.00000000, 0 ))
                        {
                            sub_24528( "E1R3_COVER", ref l_U594, 6, 1 );
                            SETTIMERB( 0 );
                        }
                    }
                }
                if (l_U607 < 6)
                {
                    switch (l_U607)
                    {
                        case 1:
                        sVar3 = "E1R3_CHAT1";
                        uVar4 = g_U11081[1];
                        break;
                        case 2:
                        sVar3 = "E1R3_CHAT2";
                        uVar4 = g_U11081[0];
                        break;
                        case 3:
                        sVar3 = "E1R3_CHAT3";
                        uVar4 = g_U11081[0];
                        break;
                        case 4:
                        sVar3 = "E1R3_CHAT4";
                        uVar4 = g_U11081[1];
                        break;
                        case 5:
                        sVar3 = "E1R3_CHAT5";
                        uVar4 = g_U11081[0];
                        break;
                    }
                    if (NOT (IS_CHAR_INJURED( uVar4 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), uVar4, 25.00000000, 25.00000000, 25.00000000, 0 ))
                        {
                            sub_24528( sVar3, ref l_U594, 6, 1 );
                            l_U607++;
                            SETTIMERB( 0 );
                        }
                    }
                    else
                    {
                        l_U607++;
                    }
                }
            }
        }
        else if (TIMERB() < 14000)
        {
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_3670() );
        }
    }
    else
    {
        for ( I = 0; I < 4; I++ )
        {
            if ((((IS_CHAR_INJURED( l_U382[I] )) AND (IS_CHAR_INJURED( l_U387[I] ))) AND (IS_CHAR_INJURED( l_U392[I] ))) AND (IS_CHAR_INJURED( l_U397[I] )))
            {
                if (NOT l_U486[I])
                {
                    if (NOT (sub_4382( l_U594 )))
                    {
                        l_U563 = 0;
                        sub_4885( ref l_U550, "E1R3_CAR5", ref l_U563 );
                        sub_5374( ref l_U550, ref l_U563 );
                        sub_5428( ref l_U550, ref l_U594, 6, 1 );
                        l_U486[I] = 1;
                    }
                }
            }
            else if (NOT l_U491[I])
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), l_U382[I], 50.00000000, 50.00000000, 20.00000000, 0 ))
                {
                    if ((NOT (sub_4382( l_U594 ))) AND (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "KILLHELP", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))))
                    {
                        l_U563 = 0;
                        if (I == 0)
                        {
                            sub_4885( ref l_U550, "E1R3_CAR1", ref l_U563 );
                        }
                        else if (I == 1)
                        {
                            sub_4885( ref l_U550, "E1R3_CAR2", ref l_U563 );
                        }
                        else if (I == 2)
                        {
                            sub_4885( ref l_U550, "E1R3_CAR3", ref l_U563 );
                        }
                        else if (I == 3)
                        {
                            sub_4885( ref l_U550, "E1R3_CAR4", ref l_U563 );
                        };;;;
                        sub_5374( ref l_U550, ref l_U563 );
                        sub_5428( ref l_U550, ref l_U594, 6, 1 );
                        l_U491[I] = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_28462()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U382[I] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_3670(), l_U382[I], 0 ))
            {
                return 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U387[I] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_3670(), l_U387[I], 0 ))
            {
                return 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U392[I] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_3670(), l_U392[I], 0 ))
            {
                return 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U397[I] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_3670(), l_U397[I], 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_29662()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
    {
        GET_SCRIPT_TASK_STATUS( g_U11081[0], 29, ref l_U541 );
        if (l_U541 == 1)
        {
            if (IS_CHAR_IN_ANY_CAR( g_U11081[0] ))
            {
                iVar2 = 1;
            }
        }
        else
        {
            iVar2 = 1;
        }
    }
    else
    {
        iVar2 = 1;
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
    {
        GET_SCRIPT_TASK_STATUS( g_U11081[1], 29, ref l_U541 );
        if (l_U541 == 1)
        {
            if (IS_CHAR_IN_ANY_CAR( g_U11081[1] ))
            {
                iVar3 = 1;
            }
        }
        else
        {
            iVar3 = 1;
        }
    }
    else
    {
        iVar3 = 1;
    }
    if ((iVar2) AND (iVar3))
    {
        if (NOT l_U417)
        {
            SET_WANTED_MULTIPLIER( 0.10000000 );
            sub_29893( 1065353216 );
            sub_32005( l_U546, 0 );
            l_U417 = 1;
        }
    }
    return;
}

void sub_29893(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_29919( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_29919(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))) || (uParam2))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[0] >= 100.00000000) AND (g_U11141[1] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_30689( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_30689(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_30828( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_31482( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_31482( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_30828(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_31482(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

void sub_32005(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_32161()
{
    boolean Result;
    unknown uVar3;

    Result = false;
    if ((l_U592) || (l_U610))
    {
        Result = true;
    }
    if (NOT Result)
    {
        GET_GAME_VIEWPORT_ID( ref uVar3 );
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), l_U587._fU0, l_U587._fU4, l_U587._fU8 + 2.50000000, 100.00000000, 100.00000000, 10.00000000, 1 )))
        {
            sub_32295( 3, ref l_U591, -1714.97400000, 354.85410000, 24.63340000, 325.00000000 );
            SET_CHAR_HEALTH( l_U591, 1000 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U591, 0 );
            SET_PED_DIES_WHEN_INJURED( l_U591, 1 );
            TASK_PLAY_ANIM( l_U591, "Sit_Down_Idle_01", "AMB_SIT_STEP_M", 4.00000000, 1, 0, 0, 0, -1 );
            SET_CHAR_COORDINATES( l_U591, -1714.97400000, 354.85410000, 24.78340000 );
            FREEZE_CHAR_POSITION( l_U591, 1 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1643309849, 63821, 354, 26, 1, 0.00000000 );
            if (DOES_BLIP_EXIST( l_U356 ))
            {
                REMOVE_BLIP( l_U356 );
            }
            ADD_BLIP_FOR_CHAR( l_U591, ref l_U356 );
            SET_BLIP_AS_FRIENDLY( l_U356, 1 );
            SET_ROUTE( l_U356, 1 );
            Result = true;
            l_U592 = 1;
        }
        else if (CAM_IS_SPHERE_VISIBLE( uVar3, -1714.97400000, 354.85410000, 24.78340000, 5.00000000 ))
        {
            Result = true;
            l_U610 = 1;
        }
        else
        {
            sub_32295( 3, ref l_U591, -1714.97400000, 354.85410000, 24.63340000, 325.00000000 );
            SET_CHAR_HEALTH( l_U591, 1000 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U591, 0 );
            SET_PED_DIES_WHEN_INJURED( l_U591, 1 );
            TASK_PLAY_ANIM( l_U591, "Sit_Down_Idle_01", "AMB_SIT_STEP_M", 4.00000000, 1, 0, 0, 0, -1 );
            SET_CHAR_COORDINATES( l_U591, -1714.97400000, 354.85410000, 24.78340000 );
            FREEZE_CHAR_POSITION( l_U591, 1 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1643309849, 63821, 354, 26, 1, 0.00000000 );
            if (DOES_BLIP_EXIST( l_U356 ))
            {
                REMOVE_BLIP( l_U356 );
            }
            ADD_BLIP_FOR_CHAR( l_U591, ref l_U356 );
            SET_BLIP_AS_FRIENDLY( l_U356, 1 );
            SET_ROUTE( l_U356, 1 );
            Result = true;
            l_U592 = 1;
        }
    }
    return Result;
}

void sub_32295(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_32306( uParam0 ), sub_8628( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_32413( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_32519( uParam0, (uParam1^) );
    return;
}

int sub_32306(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_32413(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_32519(unknown uParam0, unknown uParam1)
{
    sub_32531( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_32531(unknown uParam0, int iParam1)
{
    sub_32542( uParam0 );
    if (iParam1 == 22)
    {
        sub_32642( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_33301( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_32542(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_32642(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_3670()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_33301(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_32642( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_32642( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_34121()
{
    if (l_U610)
    {
        if (DOES_BLIP_EXIST( l_U356 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3670(), l_U587._fU0, l_U587._fU4, l_U587._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                return 1;
            }
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U591, sub_3670(), 0 )) || (IS_CHAR_ON_FIRE( l_U591 )))
        {
            FREEZE_CHAR_POSITION( l_U591, 0 );
            UNLOCK_RAGDOLL( l_U591, 1 );
            SET_CHAR_HEALTH( l_U591, 0 );
            PRINT_NOW( "R3Ash", 7500, 1 );
            sub_34338();
        }
        else if (DOES_BLIP_EXIST( l_U356 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3670(), l_U591, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    else
    {
        PRINT_NOW( "R3Ash", 7500, 1 );
        sub_34338();
    }
    return 0;
}

void sub_34338()
{
    PLAY_AUDIO_EVENT( "MC_FAIL" );
    g_U38767++;
    sub_578();
    sub_2840();
    return;
}

int sub_34507(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3670(), ref uVar6 );
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
    if (sub_34631( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_34631(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3670(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3670(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3670()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3670() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_631() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_631() )))
    {
        return 0;
    }
    return 1;
}

void sub_35123(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_8628( uParam0 ) );
    return;
}

void sub_35547()
{
    UNLOCK_MISSION_NEWS_STORY( 79 );
    sub_35567( 31 );
    g_U24 = 80;
    sub_36735();
    sub_43493();
    sub_2840();
    return;
}

void sub_35567(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_35654( iParam0 ))
    {
        sub_36704( iParam0 );
    }
    return;
}

int sub_35654(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 20 )) || (IS_BIT_SET( g_U1455[uParam0], 21 )))
    {
        return 0;
    }
    sub_35711( ref uVar3, 1, 0, 0 );
    sub_36323( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_4494( "\n ----------------------------------------------------------------" );
    sub_3801( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_4494( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_35711(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_35764( iParam0, uParam1, uParam2 );
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
        sub_35896( iParam0 + 0 );
    }
    return;
}

void sub_35764(int iParam0, int iParam1, int iParam2)
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
        sub_35896( iParam0 + 0 );
    }
    return;
}

void sub_35896(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_35927( iParam0->_fU4 )))
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

int sub_35927(unknown uParam0)
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

void sub_36323(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_36704(unknown uParam0)
{
    return;
}

void sub_36735()
{
    sub_36744();
    return;
}

void sub_36744()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_36762();
    sub_36821( iVar2, iVar3, iVar4 );
    return;
}

void sub_36762()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_36821(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 5;
    sub_36853( iVar5, uParam0, uParam1, uParam2, "Contact_6" );
    return;
}

void sub_36853(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_36949( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_36949( ref cVar9 );
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
            sub_36949( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_36949( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_36949( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_36949( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_37526( uParam0, iVar7 );;;
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
    if (NOT (sub_37974( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_631() );
    sub_1839();
    bVar28 = true;
    uVar29 = sub_37526( uParam0, iVar7 );
    uVar30 = sub_1455( uParam0 );
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
                sub_42428( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_42862();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_42947( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_43026( uParam0 );
                sub_43065( 0 );
                sub_1731( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_43254();
        }
    }
    if (bParam2)
    {
        sub_42862();
        sub_43353();
        sub_43065( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_42862();
        sub_43405();
        sub_43065( 0 );
        sub_1731( uVar30, 0 );
    }
    sub_1342();
    return;
}

void sub_36949(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_37526(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1686( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_37974(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_38070( uParam1 );
        break;
        case 1:
        bVar8 = sub_38765( uParam1 );
        break;
        case 2:
        bVar8 = sub_39498( uParam1 );
        break;
        case 3:
        bVar8 = sub_39735( uParam1 );
        break;
        case 4:
        bVar8 = sub_39901( uParam1 );
        break;
        case 5:
        bVar8 = sub_40100( uParam1 );
        break;
        case 6:
        bVar8 = sub_40295( uParam1 );
        break;
        case 7:
        bVar8 = sub_40500( uParam1 );
        break;
        case 8:
        bVar8 = sub_40705( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_39113( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_37526( uParam0, uParam1 );
    if (bParam3)
    {
        sub_40991( uVar9, uParam0 );
    }
    return 1;
}

int sub_38070(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_38167( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_38167( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_38167( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_38167( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_38672( "Contact 1", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Contact 1", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_38167(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_38178( uParam1 );
    sub_38352( uParam0, 0, uParam2 );
    sub_38352( uParam0, 1, uParam3 );
    sub_38352( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_36762();
    return;
}

void sub_38178(unknown uParam0)
{
    ADD_SCORE( sub_631(), uParam0 );
    sub_38203( uParam0 );
    return;
}

void sub_38203(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1686( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_38352(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_38672(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_38765(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_38167( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_38167( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_38167( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_38167( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_38167( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_38167( iVar3, 0, sub_38991(), sub_39257(), 0, 0 );
        break;
        default:
        sub_38672( "Contact 2", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Contact 2", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38991()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_39113( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_39113(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_39257()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_39113( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_39498(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_38167( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_38167( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_38167( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_38672( "Contact 3", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Contact 3", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39735(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_38672( "Friend 4", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Friend 4", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39901(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_38167( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_38167( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_38167( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_38672( "Contact 5", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Contact 5", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40100(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_38167( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_38167( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_38672( "Contact 6", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Contact 6", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40295(unknown uParam0)
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
        sub_38167( iVar3, 0, sub_38991(), sub_39257(), 0, 0 );
        break;
        default:
        sub_38672( "Friend 7", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Friend 7", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40500(unknown uParam0)
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
        sub_38167( iVar3, 0, sub_38991(), sub_39257(), 0, 0 );
        break;
        default:
        sub_38672( "Friend 8", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Friend 8", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40705(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_38167( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_38672( "Contact 9", 1 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38672( "Contact 9", 0 );
        sub_38167( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_40991(int iParam0, int iParam1)
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
    if (sub_41052( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_41770( iParam1 );
    }
    return;
}

int sub_41052(int iParam0, int iParam1)
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
            sub_41192( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_41192(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_41362( 0 );
    return;
}

void sub_41362(boolean bParam0)
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
        sub_41607();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_41607()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_41770(int iParam0)
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
        sub_42001( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_42001( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_42001( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_42001( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_42001( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_42001( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_42001(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_42428(unknown uParam0, unknown uParam1)
{
    sub_42447( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_42447(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_42862()
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

int sub_42947(int iParam0, int iParam1)
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

void sub_43026(unknown uParam0)
{
    sub_1203();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_43065(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_43116( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_43116(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_43254()
{
    sub_43263();
    return;
}

void sub_43263()
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

void sub_43353()
{
    sub_43263();
    return;
}

void sub_43405()
{
    sub_43263();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_43493()
{
    sub_43502();
    return;
}

void sub_43502()
{
    int iVar2;

    iVar2 = 1;
    sub_43516( iVar2 );
    return;
}

void sub_43516(unknown uParam0)
{
    unknown uVar3;

    g_U12306[uParam0]._fU4 = 1;
    uVar3 = sub_1455( uParam0 );
    sub_43550( uVar3 );
    sub_43653( "****** STRAND DEACTIVATING *******\n" );
    sub_43672( uParam0 );
    g_U15862[uVar3]._fU196._fU0 = 0;
    return;
}

void sub_43550(unknown uParam0)
{
    if (NOT g_U18635[uParam0]._fU0)
    {
        return;
    }
    g_U18635[uParam0]._fU0 = 0;
    g_U20761--;
    return;
}

void sub_43653(unknown uParam0)
{
    return;
}

void sub_43672(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    int I;

    if (NOT g_U12306[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U12306[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_1455( uParam0 );
    if ((g_U14838[uParam0]._fU80._fU0 == 0) || (g_U14838[uParam0]._fU80._fU0 == 1))
    {
        sub_43783( uParam0 );
        g_U18635[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U12306[uParam0]._fU144[I]._fU0 = 0;
    }
    if (g_U14838[uParam0]._fU160._fU0)
    {
        if (g_U14838[uParam0]._fU160._fU80)
        {
            if (NOT g_U14838[uParam0]._fU160._fU96)
            {
                sub_47891( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U14838[uParam0]._fU0._fU0 == 0) || (g_U14838[uParam0]._fU0._fU0 == 1))
    {
        sub_48527( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U12306[uParam0]._fU8 = 0;
    return;
}

void sub_43783(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU80._fU0 = 0;
        sub_43904( uParam0 );
        sub_45905( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_46191( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU80._fU0 = 6;
        sub_46191( uParam0, iVar4 );
        break;
        case 6:
        sub_46191( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_46638( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_1686( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_43904(unknown uParam0)
{
    if ((NOT (g_U14838[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU80._fU0 == 1)))
    {
        sub_43961( uParam0 );
        sub_44111( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 1)
    {
        sub_43961( uParam0 );
        sub_44305( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 0)
    {
        sub_44111( uParam0 );
    }
    if ((NOT (g_U14838[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU0._fU0 == 1)))
    {
        sub_43961( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        sub_45133( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_43961( uParam0 );
    }
    return;
}

void sub_43961(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
    g_U14838[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU0._fU68;
    g_U14838[uParam0]._fU0._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_44111(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
    g_U14838[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU80._fU68;
    g_U14838[uParam0]._fU80._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_44305(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_44111( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU80._fU4;
        iVar8 = sub_37526( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1686( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U221 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14838[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U222 );
        sub_44991( g_U14838[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_44991(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    return;
}

void sub_45133(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_43961( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU0._fU4;
        iVar8 = sub_37526( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1686( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U221 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U222 );
        if (l_U229)
        {
            FLASH_BLIP( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U229 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U229 = 1;
        }
        sub_44991( g_U14838[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_45905(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
        }
    }
    g_U14838[uParam0]._fU80._fU0 = 0;
    g_U14838[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU80._fU24, "", 32 );
    g_U14838[uParam0]._fU80._fU56 = 10;
    g_U14838[uParam0]._fU80._fU60 = nil;
    g_U14838[uParam0]._fU80._fU64 = nil;
    g_U14838[uParam0]._fU80._fU68 = 17;
    g_U14838[uParam0]._fU80._fU72 = 1;
    g_U14838[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_46191(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU80._fU24 );
        sub_45905( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU0._fU24 );
    sub_46329( uParam0, 0 );;
    sub_43904( uParam0 );
    return;
}

void sub_46329(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
        }
    }
    g_U14838[uParam0]._fU0._fU0 = 0;
    g_U14838[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU0._fU24, "", 32 );
    g_U14838[uParam0]._fU0._fU56 = 10;
    g_U14838[uParam0]._fU0._fU60 = nil;
    g_U14838[uParam0]._fU0._fU64 = nil;
    g_U14838[uParam0]._fU0._fU68 = 17;
    g_U14838[uParam0]._fU0._fU72 = 1;
    g_U14838[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_46638(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14838[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14838[iParam0]._fU80._fU60 );
        }
        sub_45905( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14838[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14838[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14838[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12306[iParam0]._fU28 = 1;
    }
    sub_46329( iParam0, 0 );
    if (bVar4)
    {
        sub_46847();
    }
    g_U12306[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_46903();
        return;
    }
    sub_43904( iParam0 );
    if (bVar4)
    {
        g_U12303 = 0;
    }
    if (bVar4)
    {
        sub_47568( iParam0 );
    }
    if (g_U3)
    {
        if (g_U4)
        {
            WAIT( 1500 );
            g_U5 = 1;
        }
    }
    return;
}

void sub_46847()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_46903()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_631() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3670() ))
        {
            if (NOT (g_U15852._fU24 == -1))
            {
                uVar3 = g_U26538[g_U15852._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_3670(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15852._fU24;
    sub_47015();
    if (bVar2)
    {
        g_U15852._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3670(), ref g_U15852._fU32 );
        g_U15852._fU24 = uVar4;
    }
    l_U228 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_631(), 0 );
    sub_47170();
    if (IS_PLAYER_PLAYING( sub_631() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3670() )))
        {
            SET_PLAYER_CONTROL( sub_631(), 1 );
        }
    }
    return;
}

void sub_47015()
{
    g_U15852._fU0 = 0;
    g_U15852._fU4 = 0;
    g_U15852._fU8 = 0;
    g_U15852._fU12 = 0;
    g_U15852._fU16 = 0;
    g_U15852._fU20 = 0;
    g_U15852._fU24 = -1;
    g_U15852._fU32 = nil;
    g_U15852._fU28 = 0;
    return;
}

void sub_47170()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_631() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_3670() ))
    {
        l_U228 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_631(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_3670() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3670(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_3670(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_3670(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15852._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U228)
        {
            return;
        }
        l_U228 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_631(), 1 );
    }
    else if (NOT l_U228)
    {
        return;
    }
    l_U228 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_631(), 0 );;
    return;
}

void sub_47568(int iParam0)
{
    if (NOT (g_U20901 == iParam0))
    {
        return;
    }
    g_U20900 = 1;
    return;
}

void sub_47891(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U14838[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        g_U14838[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_1455( uParam0 );
    DESTROY_THREAD( g_U14838[uParam0]._fU160._fU104 );
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    sub_48031( uParam0 );
    if (g_U14838[uParam0]._fU160._fU8)
    {
        g_U15862[uVar3]._fU8[0]._fU0[5] = 0;
    }
    return;
}

void sub_48031(unknown uParam0)
{
    g_U14838[uParam0]._fU160._fU0 = 0;
    g_U14838[uParam0]._fU160._fU4 = 0;
    g_U14838[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U14838[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U14838[uParam0]._fU160._fU44, "", 32 );
    g_U14838[uParam0]._fU160._fU76 = -1;
    g_U14838[uParam0]._fU160._fU80 = 0;
    g_U14838[uParam0]._fU160._fU84 = 0;
    g_U14838[uParam0]._fU160._fU88 = 0;
    g_U14838[uParam0]._fU160._fU92 = 0;
    g_U14838[uParam0]._fU160._fU96 = 0;
    g_U14838[uParam0]._fU160._fU100 = 0;
    g_U14838[uParam0]._fU160._fU104 = nil;
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    g_U14838[uParam0]._fU160._fU108._fU4 = 19;
    g_U14838[uParam0]._fU160._fU108._fU12 = 0;
    g_U14838[uParam0]._fU160._fU108._fU16 = 0;
    g_U14838[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_48527(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU0._fU0 = 0;
        sub_43904( uParam0 );
        sub_46329( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_46191( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_46191( uParam0, iVar4 );
        break;
        case 6:
        sub_46191( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_46638( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_1686( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}
