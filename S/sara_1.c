void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 0;
    l_U200 = 0;
    l_U201 = 0;
    l_U202 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U231 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U323 = 0;
    l_U324 = 1;
    l_U325 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U339 = 0;
    l_U358 = 51;
    if (sub_431( l_U358, l_U324 ))
    {
        if (IS_PLAYER_PLAYING( sub_1132() ))
        {
            sub_1179( ref l_U342 );
            if ((l_U342._fU8._fU0 >= 21) || (l_U342._fU8._fU0 <= 5))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1132(), 0 )))
                {
                    if (HAS_DEATHARREST_EXECUTED())
                    {
                        sub_1310();
                    }
                    while (true)
                    {
                        WAIT( 0 );
                        if (NOT l_U215)
                        {
                            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                            {
                                if (NOT l_U231)
                                {
                                    if (g_U10978)
                                    {
                                        sub_1310();
                                    }
                                }
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1132(), 0 )))
                                {
                                    sub_2696();
                                    if ((sub_3099( ref l_U238 )) || (sub_3191( ref l_U238, 22.00000000 )))
                                    {
                                        sub_3368();
                                    }
                                    sub_3755( ref l_U241 );
                                    switch (l_U196)
                                    {
                                        case 0:
                                        sub_3861();
                                        break;
                                        case 1:
                                        sub_5058();
                                        break;
                                    }
                                }
                                else if ((sub_2731( ref l_U238 )) < 7.00000000)
                                {
                                    if (NOT g_U65019)
                                    {
                                        g_U65019 = 1;
                                        l_U225 = 1;
                                    }
                                }
                                sub_1310();;
                            }
                            else
                            {
                                sub_1310();
                            }
                        }
                        if (l_U215)
                        {
                            if (NOT l_U223)
                            {
                                if (sub_11078( ref l_U238 ))
                                {
                                    CLEAR_PRINTS();
                                    PRINT_NOW( "SAR1_GOD2", 7500, 1 );
                                    sub_3368();
                                }
                                if ((sub_2731( ref l_U238 )) > 150.00000000)
                                {
                                    CLEAR_PRINTS();
                                    PRINT( "SAR1_GOD3", 7500, 1 );
                                    sub_3368();
                                }
                            }
                            sub_3755( ref l_U241 );
                            switch (l_U200)
                            {
                                case 0:
                                sub_11264();
                                break;
                                case 1:
                                sub_17938();
                                break;
                                case 2:
                                sub_23992();
                                break;
                            }
                            if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (NOT l_U210))
                            {
                                l_U210 = 1;
                                sub_24502();
                            }
                            if ((IS_KEYBOARD_KEY_PRESSED( 30 )) AND (NOT l_U217))
                            {
                                BEGIN_CAM_COMMANDS( ref l_U325 );
                                CREATE_CAM( 14, ref l_U305 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1930(), 0.00000000, 0.00000000, 0.00000000, ref l_U261._fU0, ref l_U261._fU4, ref l_U261._fU8 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_CAM_PROPAGATE( l_U305, 1 );
                                SET_CAM_ACTIVE( l_U305, 1 );
                                l_U217 = 1;
                            }
                            if (l_U217)
                            {
                                SET_CAM_POS( l_U305, l_U261._fU0, l_U261._fU4, l_U261._fU8 );
                                SET_CAM_ROT( l_U305, l_U264._fU0, 0.00000000, l_U264._fU8 );
                            }
                        }
                    }
                }
                else
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
            else
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_431(unknown uParam0, unknown uParam1)
{
    if (sub_440())
    {
        return 0;
    }
    return sub_487( uParam0, uParam1 );
}

int sub_440()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_487(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (NOT g_U34175._fU0)
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    uVar4 = sub_531( uParam0 );
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU4)
    {
        return 0;
    }
    if (g_U9893._fU4)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        if (sub_808( g_U34048[uVar4]._fU8 ))
        {
            g_U34048[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        return 0;
    }
    return g_U34048[uVar4]._fU28 == iParam1;
}

int sub_531(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_542( uParam0 )))
    {
        sub_651( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_542(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_651(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_808(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_977( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_977(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1132()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1179(int iParam0)
{
    sub_1192( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_1192(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_1310()
{
    if (sub_1329( l_U358, l_U324 ))
    {
        sub_1425( l_U358, l_U324 );
        if (IS_PLAYER_PLAYING( sub_1132() ))
        {
            SET_PLAYER_CONTROL( sub_1132(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U238, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_1930() );
        }
        sub_1978();
        sub_2025( 0 );
        if (DOES_BLIP_EXIST( l_U244 ))
        {
            REMOVE_BLIP( l_U244 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpsar1" );
    SWITCH_PED_PATHS_ON( -301.08000000, -226.77000000, 100.00000000, -306.73000000, -169.48000000, -100.00000000 );
    if (l_U227)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -580.25700000, 1084.21300000, 50.00000000, -466.61580000, 1094.85000000, -1.00000000 );
    }
    if (l_U336[1] == 1)
    {
        SWITCH_PED_PATHS_ON( -466.49000000, 1100.89900000, 8.96240000, -578.38800000, 1096.42400000, 8.96240000 );
    }
    if (l_U225)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U333[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    else if (l_U333[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1930(), 1 );
    sub_2504( ref l_U238 );
    sub_2562();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1329(int iParam0, int iParam1)
{
    if (NOT g_U34175._fU4)
    {
        return 0;
    }
    if (NOT (g_U34175._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U34175._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1425(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1329( uParam0, uParam1 )))
    {
        sub_651( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1521();
    if (g_U813)
    {
        sub_1613();
    }
    else
    {
        sub_1731();
    }
    g_U10978 = 0;
    return;
}

void sub_1521()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_1613()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1659();
    return;
}

void sub_1659()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1731()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1777();
    return;
}

void sub_1777()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1930()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1978()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2025(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_2504(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
    }
    return;
}

void sub_2562()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_2696()
{
    if (l_U216)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_2731( ref l_U238 )) > 18.00000000) || (sub_2896()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U238, 0, 0, 0 );
                l_U216 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_2731(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_1930(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_2896()
{
    if (sub_2909( ref l_U241 ))
    {
        GET_CAR_SPEED( l_U241, ref l_U302 );
        if (l_U302 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2909(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1930() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1930(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_3099(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1930(), 0 ))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_3191(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2731( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_1930() ))
                {
                    if (IS_CHAR_ARMED( sub_1930(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1132(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1132(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_1930() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3368()
{
    sub_3381( ref l_U238 );
    if (g_U65031 < 2)
    {
        g_U65031++;
    }
    g_U65032++;
    if (g_U65032 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1132(), 150 );
        SAY_AMBIENT_SPEECH( sub_1930(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        SCRIPT_ASSERT( "rage" );
    }
    sub_3568( ref l_U238 );
    sub_1310();
    return;
}

void sub_3381(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_3568(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                if (sub_3627( ref uVar3, (uParam0^) ))
                {
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                    TASK_LEAVE_CAR_IMMEDIATELY( (uParam0^), uVar3 );
                }
            }
        }
    }
    return;
}

int sub_3627(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (NOT (IS_CAR_DEAD( (uParam0^) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3755(unknown uParam0)
{
    int iVar3;

    if (sub_2909( ref iVar3 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            if ((uParam0^) != iVar3)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
                (uParam0^) = iVar3;
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
            }
        }
    }
    return;
}

void sub_3861()
{
    switch (l_U197)
    {
        case 0:
        l_U255 = {-301.67940000, -195.10520000, 13.65260000};
        l_U301 = 245.73050000;
        l_U273 = {-549.86300000, 1094.63000000, 11.25800000};
        l_U279 = {-549.90550000, 1101.10500000, 8.96210000};
        l_U304 = 200.22000000;
        for ( l_U323 = 0; l_U323 <= 1; l_U323++ )
        {
            l_U336[l_U323] = 0;
        }
        l_U320 = -17823883;
        l_U321 = -636579119;
        REQUEST_ANIMS( "misssara_1" );
        REQUEST_MODEL( l_U320 );
        sub_4094( "PISAUD" );
        sub_4213( 0, sub_1930(), "NIKO", 0 );
        l_U197 = 1;
        break;
        case 1:
        PRINTSTRING( "load data" );
        PRINTNL();
        if (NOT l_U213)
        {
            if (HAS_MODEL_LOADED( l_U320 ))
            {
                CLEAR_AREA( l_U255._fU0, l_U255._fU4, l_U255._fU8, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U320, l_U255._fU0, l_U255._fU4, l_U255._fU8, ref l_U238, 1 );
                SET_CHAR_HEADING( l_U238, l_U301 );
                SET_CHAR_HEALTH( l_U238, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U238, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U238, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U238, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U238, 1 );
                TASK_STAND_GUARD( l_U238, l_U255, l_U301, 0.00000000, 0, -1 );
                sub_4624( ref l_U238, 20.00000000, 10.00000000 );
                sub_4705( ref l_U238, ref l_U242, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U238, 1 );
                sub_4213( 1, l_U238, "sara", 0 );
                SET_PED_DIES_WHEN_INJURED( l_U238, 1 );
                TASK_LOOK_AT_CHAR( l_U238, sub_1930(), -2, 0 );
                l_U213 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((NOT l_U214) AND (l_U213))
        {
            if (HAVE_ANIMS_LOADED( "misssara_1" ))
            {
                TASK_PLAY_ANIM( l_U238, "female_ilde2", "misssara_1", 8.00000000, 1, 0, 0, 0, -2 );
                l_U196 = 1;
                l_U214 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        break;
    }
    return;
}

void sub_4094(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4111();
    return;
}

void sub_4111()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_4213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4293( "\n PED NUMBER ", uParam0 );
    sub_4333( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4293(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4333(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4624(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), uParam1 );
            SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), uParam2 );
        }
    }
    return;
}

void sub_4705(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            if (bParam2)
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 63 );
            }
            else
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 64 );
            }
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CHANGE_BLIP_SCALE( (uParam1^), 1.00000000 );
            CHANGE_BLIP_DISPLAY( (uParam1^), 2 );
        }
    }
    return;
}

void sub_5058()
{
    switch (l_U198)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U238 )))
        {
            if (NOT l_U218)
            {
                if (sub_2909( ref l_U241 ))
                {
                    if ((sub_2731( ref l_U238 )) < 10.00000000)
                    {
                        sub_5158();
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_1930() ))
                {
                    if ((sub_2731( ref l_U238 )) < 10.00000000)
                    {
                        sub_5158();
                    }
                }
            }
        }
        break;
        case 1:
        if ((sub_2731( ref l_U238 )) > (10.00000000 + 2.00000000))
        {
            l_U218 = 0;
            l_U198 = 0;
        }
        if (sub_6346( ref l_U340, 10000 ))
        {
            sub_2025( 1 );
            sub_5257( "PIS_STREET", ref l_U359[0], 4, 1 );
            GET_GAME_TIMER( ref l_U340 );
        }
        break;
    }
    if (IS_CHAR_ON_FOOT( sub_1930() ))
    {
        sub_6523( ref l_U238, ref l_U353, ref l_U255, ref l_U301, ref l_U229, 0.50000000, "female_ilde2", "misssara_1", 0, 1 );
        switch (l_U199)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U238, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U267._fU0, ref l_U267._fU4, ref l_U267._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U238, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U270._fU0, ref l_U270._fU4, ref l_U270._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1930(), l_U267._fU0, l_U267._fU4, l_U267._fU8, l_U270._fU0, l_U270._fU4, l_U270._fU8, 6.00000000, 0 ))
            {
                if (sub_7041())
                {
                    CLEAR_PRINTS();
                    sub_2025( 0 );
                    SET_PLAYER_CONTROL( sub_1132(), 0 );
                    SET_MISSION_FLAG( 1 );
                    sub_7136( l_U358, l_U324 );
                    l_U231 = 1;
                    DO_SCREEN_FADE_OUT( 500 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    SWITCH_PED_PATHS_OFF( -301.08000000, -226.77000000, 100.00000000, -306.73000000, -169.48000000, -100.00000000 );
                    l_U336[0] = 1;
                    GET_CHAR_COORDINATES( sub_1930(), ref l_U246._fU0, ref l_U246._fU4, ref l_U246._fU8 );
                    CLEAR_AREA_OF_CHARS( l_U255._fU0, l_U255._fU4, l_U255._fU8, 100.00000000 );
                    LOAD_ADDITIONAL_TEXT( "PISAUD", 6 );
                    CLEAR_NAMED_CUTSCENE( "rpSar1" );
                    START_CUTSCENE_NOW( "rpSar1" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    PRINTSTRING( "BEFORE LOAD" );
                    PRINTNL();
                    sub_9717();
                    sub_10762( 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "SAR1_GOD7", 7500, 1 );
                    l_U200 = 0;
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_5158()
{
    if (IS_CHAR_ON_FOOT( sub_1930() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U238, 0, 0, 6000 );
        l_U216 = 1;
    }
    CLEAR_PRINTS();
    sub_2025( 1 );
    sub_5257( "PIS_STREET", ref l_U359[0], 4, 1 );
    l_U218 = 1;
    GET_GAME_TIMER( ref l_U340 );
    l_U198 = 1;
    return;
}

void sub_5257(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_5278( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_5278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_5332( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_5332(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_5354( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_6042( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_5354(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5431( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_5431( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_5431( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_5431(unknown uParam0)
{
    return;
}

void sub_6042(int iParam0, int iParam1)
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

int sub_6346(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_6523(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    int iVar12;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8 );
                OPEN_SEQUENCE_TASK( uParam1 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, (uParam3^) );
                CLOSE_SEQUENCE_TASK( (uParam1^) );
                TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
                CLEAR_SEQUENCE_TASK( (uParam1^) );
                (uParam4^) = 1;
            }
        }
        else
        {
            PRINTSTRING( "fail 0" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar12 );
            if (iVar12 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                if (bParam9)
                {
                    TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                }
                (uParam4^) = 0;
                if (bParam8)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
                }
            }
        }
    }
    return;
}

int sub_7041()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_7136(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_651( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_531( uParam0 );
    if (g_U34175._fU4)
    {
        sub_651( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U34048[uVar4]._fU0 = 1;
        g_U34048[uVar4]._fU4 = 1;
        g_U34048[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        sub_651( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7499();
    sub_8270( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8414( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7499()
{
    sub_7508();
    sub_7611( ref g_U9893._fU68 );
    sub_7660();
    return;
}

void sub_7508()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_7611(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7660()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7698( 1, g_U569[I] )) == 0)
        {
            sub_7949( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8127())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7698(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7949(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_8034( g_U569 - 1 );
    return;
}

void sub_8034(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8127()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7698( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8270(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8304();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8304()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_8414(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 38:
        StrCopy( ref cVar4, "BADMAN", 16 );
        iVar8 = 1;
        break;
        case 39:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 3;
        break;
        case 40:
        StrCopy( ref cVar4, "CHERISE", 16 );
        iVar8 = 1;
        break;
        case 41:
        StrCopy( ref cVar4, "EDDIE", 16 );
        iVar8 = 2;
        break;
        case 42:
        StrCopy( ref cVar4, "GRACIE", 16 );
        iVar8 = 1;
        break;
        case 43:
        StrCopy( ref cVar4, "HOSSAN", 16 );
        iVar8 = 1;
        break;
        case 44:
        StrCopy( ref cVar4, "ILYENA", 16 );
        iVar8 = 1;
        break;
        case 45:
        StrCopy( ref cVar4, "IVAN", 16 );
        iVar8 = 1;
        break;
        case 46:
        StrCopy( ref cVar4, "JEFF", 16 );
        iVar8 = 3;
        break;
        case 47:
        StrCopy( ref cVar4, "MARNIE", 16 );
        iVar8 = 2;
        break;
        case 48:
        StrCopy( ref cVar4, "CLARENCE", 16 );
        iVar8 = 1;
        break;
        case 49:
        StrCopy( ref cVar4, "MEL", 16 );
        iVar8 = 1;
        break;
        case 50:
        StrCopy( ref cVar4, "PATHOS", 16 );
        iVar8 = 2;
        break;
        case 51:
        StrCopy( ref cVar4, "SARA", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_9260( cVar4 );
    return;
}

void sub_9260(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

void sub_9717()
{
    SWITCH_PED_PATHS_ON( -301.08000000, -226.77000000, 100.00000000, -306.73000000, -169.48000000, -100.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1930(), 0 );
    CLEAR_WANTED_LEVEL( sub_1132() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    REQUEST_MODEL( l_U321 );
    REQUEST_MODEL( 1758564455 );
    REQUEST_ANIMS( "gestures@niko" );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U346 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U347 );
    PRINTSTRING( "fail 0" );
    PRINTNL();
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U347, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U347, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U347, 25 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U349 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U350 );
    LOAD_ADDITIONAL_TEXT( "WI_SAR1", 0 );
    sub_9989( "sara_1" );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( l_U255._fU0, l_U255._fU4, l_U255._fU8 );
    l_U215 = 1;
    if (NOT (IS_CHAR_INJURED( l_U238 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U238 );
        SET_CHAR_COORDINATES( l_U238, l_U255._fU0, l_U255._fU4, l_U255._fU8 );
        SET_CHAR_HEADING( l_U238, l_U301 );
        TASK_PLAY_ANIM( l_U238, "female_ilde2", "misssara_1", 8.00000000, 1, 0, 0, 0, -2 );
        SET_CHAR_COORDINATES( sub_1930(), -301.57470000, -196.93680000, 13.65580000 );
        SET_CHAR_HEADING( sub_1930(), 314.73170000 );
        sub_10388( ref l_U238, ref l_U349, ref l_U350 );
    }
    REMOVE_BLIP( l_U242 );
    GET_GAME_TIMER( ref l_U341 );
    return;
}

void sub_9989(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_10388(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam2^) );
            N_1061756705( (uParam1^), 12 );
            N_1061756705( (uParam1^), 9 );
            N_1061756705( (uParam1^), 7 );
            N_1061756705( (uParam1^), 15 );
            N_1061756705( (uParam1^), 31 );
            N_1061756705( (uParam1^), 43 );
            N_1061756705( (uParam1^), 36 );
            N_1061756705( (uParam1^), 37 );
            N_1061756705( (uParam1^), 13 );
            N_1061756705( (uParam1^), 56 );
            N_1061756705( (uParam1^), 79 );
            N_1061756705( (uParam1^), 11 );
            N_1061756705( (uParam1^), 20 );
            N_1061756705( (uParam1^), 46 );
            N_1061756705( (uParam1^), 44 );
            N_1061756705( (uParam1^), 125 );
            N_1061756705( (uParam1^), 17 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 413, 0, 100, 100, 100, 0, 1 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 412, 0, 10, 10, 10, 0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_10762(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2025( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1132() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1930() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1930() );
        }
        SET_PLAYER_CONTROL( sub_1132(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1930(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

int sub_11078(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_11264()
{
    switch (l_U203)
    {
        case 0:
        if (sub_11308( ref l_U238, 200 ))
        {
            sub_2025( 0 );
            CLEAR_PRINTS();
            PRINT_NOW( "SARA1_PROMPT_2", 7500, 1 );
            sub_3368();
        }
        sub_6523( ref l_U238, ref l_U353, ref l_U255, ref l_U301, ref l_U229, 0.50000000, "female_ilde2", "misssara_1", 1, 1 );
        sub_11543( ref l_U238, ref l_U242, "SAR1_GOD8", "SAR1_GOD7" );
        if (NOT l_U234)
        {
            if (sub_6346( ref l_U341, 500 ))
            {
                SAY_AMBIENT_SPEECH( l_U238, "NEED_A_VEHICLE", 1, 0, 2 );
                l_U234 = 1;
            }
        }
        if (sub_11775( l_U238 ))
        {
            if (DOES_BLIP_EXIST( l_U242 ))
            {
                CLEAR_AREA( l_U273._fU0, l_U273._fU4, l_U273._fU8, 100.00000000, 1 );
                CLEAR_CHAR_TASKS( l_U238 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U238, 0 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                sub_11956( ref l_U238, ref l_U351, ref l_U348, 0 );
                REMOVE_BLIP( l_U242 );
                CLEAR_PRINTS();
                ADD_BLIP_FOR_COORD( l_U273._fU0, l_U273._fU4, l_U273._fU8, ref l_U244 );
                SET_ROUTE( l_U244, 1 );
                GET_GAME_TIMER( ref l_U328 );
                l_U203 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U233)
        {
            if (NOT (sub_6346( ref l_U328, 7000 )))
            {
                MODIFY_CHAR_MOVE_STATE( l_U238, 2 );
            }
            else
            {
                l_U233 = 1;
            }
        }
        sub_12454();
        sub_14527( ref l_U238, ref l_U242, ref l_U273, ref l_U244, "SAR1_GOD6", "SAR1_GOD1", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U351, ref l_U348 );
        if (DOES_BLIP_EXIST( l_U244 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1930(), l_U273._fU0, l_U273._fU4, l_U273._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((sub_2731( ref l_U238 )) < 10.00000000)
                {
                    if (sub_14923())
                    {
                        sub_15340( ref l_U238, ref l_U241 );
                        if (sub_15796( ref l_U241 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_1930(), l_U241, 6, 100 );
                            l_U222 = 1;
                            GET_GAME_TIMER( ref l_U328 );
                            l_U200 = 1;
                        }
                        else
                        {
                            sub_15904();
                        }
                    }
                }
                else if (NOT g_U65018)
                {
                    PRINT( "SAR1_GOD9", 7500, 1 );
                    PRINTNL();
                    g_U65018 = 1;
                }
            }
            else if (g_U65018)
            {
                CLEAR_THIS_PRINT( "SAR1_GOD9" );
                g_U65018 = 0;
            }
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT l_U206))
        {
            SET_CHAR_COORDINATES( sub_1930(), -570.79690000, 1093.88000000, 8.88130000 );
            SET_CHAR_HEADING( sub_1930(), 268.09530000 );
            l_U206 = 1;
        }
        break;
    }
    return;
}

int sub_11308(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar4 );
            iVar5 = ROUND( uParam1 * 0.80000000 );
            if (iVar4 < iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_11543(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1930() ))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1930() )))
    {
        if (DOES_BLIP_EXIST( (uParam1^) ))
        {
            REMOVE_BLIP( (uParam1^) );
        }
        CLEAR_PRINTS();
        PRINT_NOW( uParam3, 7500, 1 );
    }
    return;
}

int sub_11775(unknown uParam0)
{
    if ((sub_2731( ref uParam0 )) < 10.00000000)
    {
        return 1;
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_1132() )) AND ((sub_2731( ref uParam0 )) < (10.00000000 * 2.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_11956(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam3)
    {
        case 0:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_12069( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
        case 1:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_12069( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_12069(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_PLAYER_GROUP( sub_1132(), uParam1 );
            SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            return 1;
        }
    }
    return 0;
}

void sub_12454()
{
    switch (l_U201)
    {
        case 0:
        if (sub_12548( ref l_U238, ref l_U241, 0 ))
        {
            sub_5257( "PIS_GO", ref l_U359[0], 8, 1 );
            l_U201 = 1;
        }
        break;
        case 1:
        if (sub_12548( ref l_U238, ref l_U241, 0 ))
        {
            if (l_U226)
            {
                sub_12846( "PIS_GO", ref l_U359[0], 8, 1 );
                l_U226 = 0;
            }
            if (NOT (sub_12972( l_U359[0] )))
            {
                CLEAR_PRINTS();
                PRINT( "SAR1_GOD1", 7500, 1 );
                GET_GAME_TIMER( ref l_U328 );
                l_U201 = 2;
            }
        }
        else if (NOT l_U226)
        {
            sub_13210( ref l_U359[0] );
            l_U226 = 1;
        }
        break;
        case 2:
        if (sub_12548( ref l_U238, ref l_U241, 0 ))
        {
            switch (g_U65031)
            {
                case 0:
                if (sub_6346( ref l_U328, 7500 ))
                {
                    CLEAR_PRINTS();
                    if (sub_5257( "PIS_BANT1", ref l_U359[0], 8, 1 ))
                    {
                        l_U201 = 3;
                    }
                }
                break;
                case 1:
                if (sub_6346( ref l_U328, 7500 ))
                {
                    CLEAR_PRINTS();
                    if (sub_5257( "PIS_BANT2", ref l_U359[0], 8, 1 ))
                    {
                        l_U201 = 3;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 3:
        switch (g_U65031)
        {
            case 0:
            if (sub_12548( ref l_U238, ref l_U241, 0 ))
            {
                if (l_U226)
                {
                    sub_12846( "PIS_BANT1", ref l_U359[0], 8, 1 );
                    l_U226 = 0;
                }
                if (NOT (sub_12972( l_U359[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U238, sub_1930(), 50, 0 );
                    l_U201 = 9;
                }
            }
            else if (NOT l_U226)
            {
                sub_13210( ref l_U359[0] );
                l_U226 = 1;
            }
            break;
            case 1:
            if (sub_12548( ref l_U238, ref l_U241, 0 ))
            {
                if (l_U226)
                {
                    sub_12846( "PIS_BANT2", ref l_U359[0], 8, 1 );
                    l_U226 = 0;
                }
                if (NOT (sub_12972( l_U359[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U238, sub_1930(), 50, 0 );
                    l_U201 = 9;
                }
            }
            else if (NOT l_U226)
            {
                sub_13210( ref l_U359[0] );
                l_U226 = 1;
            }
            break;
            case 2:
            TASK_LOOK_AT_CHAR( l_U238, sub_1930(), 50, 0 );
            l_U201 = 9;
            break;
        }
        break;
        case 6:
        if (sub_12548( ref l_U238, ref l_U241, 0 ))
        {
            if (sub_5257( "PIS_ARR", ref l_U359[0], 8, 1 ))
            {
                l_U201 = 7;
            }
        }
        break;
        case 7:
        if (sub_12548( ref l_U238, ref l_U241, 0 ))
        {
            if (l_U226)
            {
                sub_12846( "PIS_ARR", ref l_U359[0], 8, 1 );
                l_U226 = 0;
            }
            if (NOT (sub_12972( l_U359[0] )))
            {
                l_U201 = 8;
            }
        }
        else if (NOT l_U226)
        {
            sub_13210( ref l_U359[0] );
            l_U226 = 1;
        }
        break;
        case 8:
        sub_5257( "PIS_RUNS", ref l_U359[0], 8, 1 );
        l_U201 = 9;
        break;
        case 9: break;
    }
    return;
}

int sub_12548(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            if (bParam2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1132(), 0 ))
                {
                    GET_GAME_TIMER( ref l_U118 );
                    return 0;
                }
                if (NOT (sub_6346( ref l_U118, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( (uParam0^) )) AND (IS_CHAR_ON_FOOT( sub_1930() )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( sub_1930(), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_12846(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12867( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_12867(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_5332( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_12972(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_5431( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5431( "\n speech is not playing" );
    }
    return 0;
}

int sub_13210(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_5431( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_5431( "\n CONVERSATION PAUSED AT LINE " );
            sub_13366( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_5431( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_5431( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_5431( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_13366(unknown uParam0)
{
    return;
}

void sub_14527(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (DOES_BLIP_EXIST( (uParam3^) ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                REMOVE_BLIP( (uParam3^) );
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 7500, 1 );
            }
        }
        else if ((sub_2731( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_11956( uParam0, uParam11, uParam12, 0 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam6)
                {
                    sub_14748( uParam3, uParam7, uParam10 );
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

void sub_14748(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_14923()
{
    if (sub_14934( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_2025( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_1132(), 0 );
        CLEAR_CHAR_TASKS( sub_1930() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1930(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_14934(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1930() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1930(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1930() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1930(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1930()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1930() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1930() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1132() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1132() )))
    {
        return 0;
    }
    return 1;
}

void sub_15340(unknown uParam0, unknown uParam1)
{
    sub_15358( 1, 1 );
    sub_15427( uParam0 );
    sub_15526( 1, ref l_U179, 1, 1 );
    sub_15634( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U115;
    2;
    1;
    ref l_U178;
    2;
    1;
    ref l_U179;
    1;
    ref l_U178;
    1;
    1;
    ref l_U115;
    uParam1;
    2;
    1;
    ref l_U114;
    ref l_U114;
    uParam0;
    break;
}

void sub_15358(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), uParam1 );
        }
    }
    return;
}

void sub_15427(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEALTH( (uParam0^), 200 );
            SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_15526(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

void sub_15634(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

int sub_15796(unknown uParam0)
{
    if (sub_2909( uParam0 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_1930(), (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_15904()
{
    l_U200 = 1;
    REMOVE_BLIP( l_U244 );
    sub_15931();
    sub_16154();
    CREATE_CHAR( 26, l_U321, -540.91950000, 1098.19000000, 8.96710000, ref l_U239, 1 );
    SET_CHAR_HEADING( l_U239, 102.77870000 );
    sub_4213( 2, l_U239, "HUSBAND", 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U239, 1 );
    TASK_FLUSH_ROUTE();
    TASK_EXTEND_ROUTE( l_U279._fU0, l_U279._fU4, l_U279._fU8 );
    OPEN_SEQUENCE_TASK( ref l_U354 );
    TASK_LOOK_AT_CHAR( 0, sub_1930(), -2, 0 );
    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1930() );
    CLOSE_SEQUENCE_TASK( l_U354 );
    TASK_PERFORM_SEQUENCE( l_U239, l_U354 );
    CLEAR_SEQUENCE_TASK( l_U354 );
    if (NOT l_U222)
    {
        if (DOES_VEHICLE_EXIST( l_U241 ))
        {
            if (IS_VEH_DRIVEABLE( l_U241 ))
            {
                if (LOCATE_CAR_3D( l_U241, -549.72560000, 1096.89200000, 8.96250000, 9.00000000, 9.00000000, 9.00000000, 0 ))
                {
                    SET_CAR_HEADING( l_U241, 268.89340000 );
                    SET_CAR_COORDINATES( l_U241, -571.26460000, 1094.48500000, 8.84970000 );
                }
            }
        }
        REMOVE_CHAR_FROM_GROUP( l_U238 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U238 );
        SET_CHAR_COORDINATES( l_U238, -552.19180000, 1097.01500000, 8.96340000 );
        SET_CHAR_HEADING( l_U238, 290.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1930() );
        SET_CHAR_COORDINATES( sub_1930(), -550.72560000, 1096.89200000, 8.96250000 );
        SET_CHAR_HEADING( sub_1930(), 110.58410000 );
        l_U202 = 2;
    }
    else if (NOT (IS_CHAR_SITTING_IN_CAR( l_U238, l_U241 )))
    {
        CLEAR_CHAR_TASKS( l_U238 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U238, l_U241, 0 );
    }
    if (IS_BIG_VEHICLE( l_U241 ))
    {
        l_U112 = 1;
        SET_CAM_POS( l_U316, -559.87170000, 1080.64000000, 18.95524000 );
        SET_CAM_ROT( l_U316, -30.69726000, 10.38569000, -46.66827000 );
        SET_CAM_FOV( l_U316, 33.30004000 );
        SET_CAM_POS( l_U317, -559.87170000, 1080.64000000, 18.95524000 );
        SET_CAM_ROT( l_U317, -30.69726000, 10.38569000, -46.66827000 );
        SET_CAM_FOV( l_U317, 31.30004000 );
        SET_CAR_COORDINATES( l_U241, -549.23710000, 1088.75000000, 9.00900000 );
    }
    else
    {
        SET_CAR_COORDINATES( l_U241, -551.71700000, 1093.92400000, 8.87900000 );
    }
    l_U202 = 4;;
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U318, l_U316, l_U317, 4000, 0 );
    SET_CAM_ACTIVE( l_U318, 1 );
    SET_CAM_PROPAGATE( l_U318, 1 );
    l_U339 = 1;
    GET_GAME_TIMER( ref l_U329 );
    sub_2025( 0 );
    sub_17596( "PIS_ARR", 0, 1, ref l_U359[0], 8, 1 );
    TASK_LOOK_AT_CHAR( sub_1930(), l_U238, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U238, sub_1930(), -2, 0 );
    return;
}

void sub_15931()
{
    l_U128 = {-0.99465700, -2.12410000, -0.38183600};
    l_U131 = {-0.99465700, 2.43009000, 0.68398300};
    l_U134[0] = {-1.30000000, 4.00000000, 0.70000000};
    l_U134[1] = {-1.30000000, 4.00000000, 0.50000000};
    l_U134[2] = {3.60000000, 3.10000000, 0.50000000};
    l_U150[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U150[1] = {-0.60000000, 0.00000000, 0.40000000};
    l_U172[0] = 32;
    l_U172[1] = 32;
    l_U172[2] = 34.70000000;
    return;
}

void sub_16154()
{
    sub_16168( l_U241 );
    CLEAR_AREA( l_U273._fU0, l_U273._fU4, l_U273._fU8, 100.00000000, 1 );
    SWITCH_ROADS_OFF( -580.25700000, 1084.21300000, 50.00000000, -466.61580000, 1094.85000000, -1.00000000 );
    l_U227 = 1;
    SWITCH_PED_PATHS_OFF( -466.49000000, 1100.89900000, 50.96240000, -578.38800000, 1096.42400000, -1.96240000 );
    l_U336[1] = 1;
    BEGIN_CAM_COMMANDS( ref l_U325 );
    CREATE_CAM( 14, ref l_U305 );
    CREATE_CAM( 14, ref l_U306 );
    CREATE_CAM( 14, ref l_U307 );
    CREATE_CAM( 14, ref l_U308 );
    CREATE_CAM( 14, ref l_U309 );
    CREATE_CAM( 14, ref l_U310 );
    CREATE_CAM( 14, ref l_U311 );
    CREATE_CAM( 14, ref l_U312 );
    CREATE_CAM( 14, ref l_U313 );
    CREATE_CAM( 14, ref l_U314 );
    CREATE_CAM( 14, ref l_U315 );
    CREATE_CAM( 14, ref l_U316 );
    CREATE_CAM( 14, ref l_U317 );
    CREATE_CAM( 3, ref l_U318 );
    SET_CAM_POS( l_U316, -562.04390000, 1081.57800000, 17.68784000 );
    SET_CAM_ROT( l_U316, -19.11198000, -8.14996800, -40.15344000 );
    SET_CAM_FOV( l_U316, 30.30004000 );
    SET_CAM_POS( l_U317, -562.04390000, 1081.57800000, 17.68784000 );
    SET_CAM_ROT( l_U317, -19.11198000, -8.14996800, -40.15344000 );
    SET_CAM_FOV( l_U317, 28.30004000 );
    GET_GAME_TIMER( ref l_U329 );
    l_U339 = 1;
    return;
}

void sub_16168(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( uParam0 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
            DELETE_CAR( ref uParam0 );
        }
    }
    return;
}

void sub_17596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_17621( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_17621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_5332( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_17938()
{
    if (l_U339 == 1)
    {
        if (NOT (l_U330[0] == 1))
        {
            if (sub_17982( ref l_U329, 1000 ))
            {
                l_U330[0] = 1;
                sub_18077();
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U238 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U238, 1 );
    }
    BLOCK_CHAR_AMBIENT_ANIMS( sub_1930(), 1 );
    switch (l_U202)
    {
        case 0:
        if (sub_6346( ref l_U328, 1000 ))
        {
            sub_15904();
        }
        break;
        case 1:
        if (NOT (sub_12972( l_U359[0] )))
        {
            GET_GAME_TIMER( ref l_U328 );
            l_U202 = 4;
        }
        break;
        case 2:
        if (NOT (sub_12972( l_U359[0] )))
        {
            sub_17596( "PIS_ARR", 1, 1, ref l_U359[0], 8, 1 );
            l_U202 = 3;
        }
        break;
        case 3:
        if (NOT (sub_12972( l_U359[0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U239 )))
            {
                SET_CAM_ACTIVE( l_U318, 0 );
                SET_CAM_PROPAGATE( l_U318, 0 );
                SET_CAM_ACTIVE( l_U316, 0 );
                SET_CAM_PROPAGATE( l_U316, 0 );
                SET_CAM_ACTIVE( l_U317, 0 );
                SET_CAM_PROPAGATE( l_U317, 0 );
                CLEAR_AREA( l_U279._fU0, l_U279._fU4, l_U279._fU8, 4.00000000, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U239 );
                SET_CHAR_COORDINATES( l_U239, -549.61380000, 1101.01600000, 8.96030000 );
                SET_CHAR_HEADING( l_U239, 170.06920000 );
                SET_CHAR_HEADING( l_U238, 0.00000000 );
                SET_CHAR_HEADING( sub_1930(), 0.00000000 );
                TASK_LOOK_AT_CHAR( sub_1930(), l_U239, -1, 0 );
                TASK_LOOK_AT_CHAR( l_U238, l_U239, -1, 0 );
                TASK_LOOK_AT_CHAR( l_U239, sub_1930(), -1, 0 );
                SET_CAM_POS( l_U306, -545.54680000, 1092.94400000, 9.28090500 );
                SET_CAM_ROT( l_U306, 8.10474300, 0.00000000, 40.07575000 );
                SET_CAM_FOV( l_U306, 33.60003000 );
                SET_CAM_PROPAGATE( l_U306, 1 );
                SET_CAM_ACTIVE( l_U306, 1 );
                GET_GAME_TIMER( ref l_U328 );
                l_U202 = 8;
            }
        }
        break;
        case 4:
        if (NOT (sub_12972( l_U359[0] )))
        {
            sub_17596( "PIS_ARR", 1, 1, ref l_U359[0], 8, 1 );
            l_U202 = 5;
        }
        break;
        case 5:
        if (NOT (sub_12972( l_U359[0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U239 )))
            {
                sub_2025( 0 );
                REMOVE_CHAR_FROM_GROUP( l_U238 );
                OPEN_SEQUENCE_TASK( ref l_U353 );
                TASK_LEAVE_CAR( 0, l_U241 );
                TASK_LOOK_AT_CHAR( 0, l_U239, -2, 0 );
                CLOSE_SEQUENCE_TASK( l_U353 );
                TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                CLEAR_SEQUENCE_TASK( l_U353 );
                l_U202 = 6;
            }
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U239 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U238, 29, ref l_U356 );
            if (l_U356 == 7)
            {
                SET_CAM_ACTIVE( l_U318, 0 );
                SET_CAM_PROPAGATE( l_U318, 0 );
                SET_CAM_ACTIVE( l_U316, 0 );
                SET_CAM_PROPAGATE( l_U316, 0 );
                SET_CAM_ACTIVE( l_U317, 0 );
                SET_CAM_PROPAGATE( l_U317, 0 );
                CLEAR_AREA( l_U279._fU0, l_U279._fU4, l_U279._fU8, 4.00000000, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U239 );
                SET_CHAR_COORDINATES( l_U239, -549.61380000, 1101.01600000, 8.96030000 );
                SET_CHAR_HEADING( l_U239, 170.06920000 );
                if ((l_U232) || (l_U112))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U238 );
                    SET_CHAR_HEADING( l_U238, 46.81380000 );
                    SET_CHAR_COORDINATES( l_U238, -549.82700000, 1096.42900000, 8.96560000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1930() );
                    SET_CHAR_HEADING( sub_1930(), 46.81380000 );
                    SET_CHAR_COORDINATES( sub_1930(), -550.83000000, 1096.25000000, 8.96560000 );
                    TASK_LOOK_AT_CHAR( sub_1930(), l_U239, -2, 0 );
                    TASK_LOOK_AT_CHAR( l_U238, l_U239, -2, 0 );
                    SET_CAM_POS( l_U306, -551.05130000, 1102.05200000, 10.25088000 );
                    SET_CAM_ROT( l_U306, 4.11227800, 0.11429900, -154.06630000 );
                    SET_CAM_FOV( l_U306, 46.50000000 );
                }
                else
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U238 );
                    SET_CHAR_HEADING( l_U238, 0.00000000 );
                    OPEN_SEQUENCE_TASK( ref l_U353 );
                    TASK_LOOK_AT_CHAR( 0, l_U239, -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U353 );
                    TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                    CLEAR_SEQUENCE_TASK( l_U353 );
                    OPEN_SEQUENCE_TASK( ref l_U355 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U239 );
                    TASK_LOOK_AT_CHAR( 0, l_U239, 7000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U355 );
                    TASK_PERFORM_SEQUENCE( sub_1930(), l_U355 );
                    CLEAR_SEQUENCE_TASK( l_U355 );
                    SET_CAM_POS( l_U306, -543.68400000, 1088.98900000, 9.17743400 );
                    SET_CAM_ROT( l_U306, 5.01076700, 0.00000000, 45.23237000 );
                    SET_CAM_FOV( l_U306, 31.10004000 );
                }
                SET_CAM_PROPAGATE( l_U306, 1 );
                SET_CAM_ACTIVE( l_U306, 1 );
                GET_GAME_TIMER( ref l_U328 );
                l_U202 = 8;
            }
        }
        break;
        case 7:
        if (NOT (IS_CHAR_INJURED( l_U239 )))
        {
            if (sub_12972( l_U359[0] ))
            {
                if ((sub_20035( l_U359[0] )) > 1)
                {
                    sub_2025( 0 );
                    SET_CAM_PROPAGATE( l_U318, 0 );
                    SET_CAM_ACTIVE( l_U318, 0 );
                    SET_CAM_PROPAGATE( l_U305, 0 );
                    SET_CAM_ACTIVE( l_U305, 0 );
                    SET_CAM_PROPAGATE( l_U306, 0 );
                    SET_CAM_ACTIVE( l_U306, 0 );
                    SET_CAM_POS( l_U306, -550.79170000, 1100.12200000, 10.30008000 );
                    SET_CAM_ROT( l_U306, 20.86989000, 2.86448500, -11.85286000 );
                    SET_CAM_FOV( l_U306, 30.00004000 );
                    SET_CAM_POS( l_U307, -550.79170000, 1100.12200000, 10.30008000 );
                    SET_CAM_ROT( l_U307, 20.86989000, 2.86448500, -11.85286000 );
                    SET_CAM_FOV( l_U307, 28.00004000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U318, l_U306, l_U307, 2000, 0 );
                    SET_CAM_PROPAGATE( l_U318, 1 );
                    SET_CAM_ACTIVE( l_U318, 1 );
                    GET_GAME_TIMER( ref l_U328 );
                    OPEN_SEQUENCE_TASK( ref l_U353 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U239 );
                    TASK_LOOK_AT_CHAR( 0, l_U239, -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U353 );
                    TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                    CLEAR_SEQUENCE_TASK( l_U353 );
                    OPEN_SEQUENCE_TASK( ref l_U355 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U239 );
                    TASK_LOOK_AT_CHAR( 0, l_U239, 7000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U355 );
                    TASK_PERFORM_SEQUENCE( sub_1930(), l_U355 );
                    CLEAR_SEQUENCE_TASK( l_U355 );
                    l_U202 = 8;
                }
            }
        }
        break;
        case 8:
        GET_SCRIPT_TASK_STATUS( l_U238, 29, ref l_U356 );
        if (l_U356 == 7)
        {
            sub_17596( "PIS_ARR", 2, 1, ref l_U359[0], 8, 1 );
            l_U202 = 9;
        }
        break;
        case 9:
        if (NOT (sub_12972( l_U359[0] )))
        {
            SET_CAM_PROPAGATE( l_U306, 0 );
            SET_CAM_ACTIVE( l_U306, 0 );
            sub_17596( "PIS_ARR", 3, 1, ref l_U359[0], 8, 1 );
            l_U202 = 14;
        }
        break;
        case 10:
        if (NOT (IS_CHAR_INJURED( l_U239 )))
        {
            if (NOT (sub_12972( l_U359[0] )))
            {
                SET_CAM_PROPAGATE( l_U318, 0 );
                SET_CAM_ACTIVE( l_U318, 0 );
                SET_CAM_PROPAGATE( l_U313, 0 );
                SET_CAM_ACTIVE( l_U313, 0 );
                SET_CAM_PROPAGATE( l_U314, 0 );
                SET_CAM_ACTIVE( l_U314, 0 );
                SET_CHAR_HEADING( l_U239, 156.34560000 );
                SET_CHAR_COORDINATES( l_U239, -542.85240000, 1100.82800000, 8.96640000 );
                SET_CAM_POS( l_U308, -544.37760000, 1099.85700000, 10.27379000 );
                SET_CAM_ROT( l_U308, 6.23990100, 0.24729900, -57.37415000 );
                SET_CAM_FOV( l_U308, 30.00000000 );
                SET_CAM_POS( l_U309, -544.37760000, 1099.85700000, 10.27379000 );
                SET_CAM_ROT( l_U309, 6.23990100, 0.24729900, -57.37415000 );
                SET_CAM_FOV( l_U309, 31.00037000 );
                sub_5257( "PIS_SHOUT", ref l_U359[0], 8, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U318, l_U308, l_U309, 1500, 0 );
                SET_CAM_PROPAGATE( l_U318, 1 );
                SET_CAM_ACTIVE( l_U318, 1 );
                GET_GAME_TIMER( ref l_U328 );
                l_U202 = 11;
            }
        }
        break;
        case 11:
        if (NOT (sub_12972( l_U359[0] )))
        {
            if (NOT IS_CAM_INTERPOLATING())
            {
                if (NOT (IS_CHAR_INJURED( l_U239 )))
                {
                    SET_CAM_PROPAGATE( l_U318, 0 );
                    SET_CAM_ACTIVE( l_U318, 0 );
                    SET_CAM_PROPAGATE( l_U308, 0 );
                    SET_CAM_ACTIVE( l_U308, 0 );
                    SET_CAM_PROPAGATE( l_U309, 0 );
                    SET_CAM_ACTIVE( l_U309, 0 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -546.95360000, 1098.09600000, 8.96700000 );
                    OPEN_SEQUENCE_TASK( ref l_U354 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U354 );
                    TASK_PERFORM_SEQUENCE( l_U239, l_U354 );
                    CLEAR_SEQUENCE_TASK( l_U354 );
                    SET_CAM_POS( l_U310, -548.20970000, 1097.22600000, 10.29105000 );
                    SET_CAM_ROT( l_U310, 5.00273800, 5.95817800, -53.70041000 );
                    SET_CAM_FOV( l_U310, 29.30004000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U318, l_U309, l_U310, 4000, 0 );
                    SET_CAM_PROPAGATE( l_U318, 1 );
                    SET_CAM_ACTIVE( l_U318, 1 );
                    GET_GAME_TIMER( ref l_U328 );
                    l_U202 = 12;
                }
            }
        }
        break;
        case 12:
        if (NOT (IS_CHAR_INJURED( l_U239 )))
        {
            SET_CAM_PROPAGATE( l_U318, 0 );
            SET_CAM_ACTIVE( l_U318, 0 );
            SET_CAM_PROPAGATE( l_U309, 0 );
            SET_CAM_ACTIVE( l_U309, 0 );
            SET_CAM_PROPAGATE( l_U310, 0 );
            SET_CAM_ACTIVE( l_U310, 0 );
            if (l_U222)
            {
                if (IS_VEH_DRIVEABLE( l_U241 ))
                {
                    sub_5257( "PIS_RUNS", ref l_U359[0], 8, 1 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -562.64690000, 1092.79700000, 8.93770000 );
                    SET_CHAR_KEEP_TASK( l_U238, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U353 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                    CLOSE_SEQUENCE_TASK( l_U353 );
                    TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                    CLEAR_SEQUENCE_TASK( l_U353 );
                    OPEN_SEQUENCE_TASK( ref l_U355 );
                    TASK_PLAY_ANIM( 0, "Stash_lookaround", "misssara_1", 8.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U355 );
                    TASK_PERFORM_SEQUENCE( sub_1930(), l_U355 );
                    CLEAR_SEQUENCE_TASK( l_U355 );
                    if (l_U112)
                    {
                        SET_CAM_POS( l_U311, -555.51300000, 1098.29300000, 9.59024000 );
                        SET_CAM_ROT( l_U311, 3.77754900, 0.00000200, -106.79710000 );
                        SET_CAM_FOV( l_U311, 31.80003000 );
                    }
                    else if (l_U230)
                    {
                        SET_CAM_POS( l_U311, -549.86300000, 1089.61200000, 9.72602800 );
                        SET_CAM_ROT( l_U311, 3.20855700, 0.00000100, 25.78311000 );
                        SET_CAM_FOV( l_U311, 30.00004000 );
                    }
                    else if (l_U232)
                    {
                        SET_CAM_POS( l_U311, -542.44090000, 1097.45800000, 10.71263000 );
                        SET_CAM_ROT( l_U311, -0.91672300, 0.00000000, 102.94140000 );
                        SET_CAM_FOV( l_U311, 28.20004000 );
                    }
                    else
                    {
                        l_U125._fU0 = l_U119._fU0 / l_U128._fU0;
                        l_U125._fU4 = l_U122._fU4 / l_U131._fU4;
                        l_U125._fU8 = l_U122._fU8 / l_U131._fU8;
                        ATTACH_CAM_TO_VEHICLE( l_U311, l_U241 );
                        POINT_CAM_AT_VEHICLE( l_U311, l_U241 );
                        l_U166._fU0 = l_U134[2]._fU0 * l_U125._fU0;
                        l_U166._fU4 = l_U134[2]._fU4 * l_U125._fU4;
                        l_U166._fU8 = l_U134[2]._fU8 * l_U125._fU8;
                        SET_CAM_ATTACH_OFFSET( l_U311, l_U166._fU0, l_U166._fU4, l_U166._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U311, 1 );
                        SET_CAM_POINT_OFFSET( l_U311, l_U169._fU0, l_U169._fU4, l_U169._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U311, 1 );
                        SET_CAM_FOV( l_U311, l_U172[2] );
                    };;;
                    SET_CAM_PROPAGATE( l_U311, 1 );
                    SET_CAM_ACTIVE( l_U311, 1 );
                    GET_GAME_TIMER( ref l_U328 );
                    l_U202 = 13;
                }
            }
            else
            {
                sub_5257( "PIS_RUNS", ref l_U359[0], 8, 1 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -583.04500000, 1098.24000000, 8.89730000 );
                SET_CHAR_KEEP_TASK( l_U238, 1 );
                OPEN_SEQUENCE_TASK( ref l_U353 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                CLOSE_SEQUENCE_TASK( l_U353 );
                TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                CLEAR_SEQUENCE_TASK( l_U353 );
                OPEN_SEQUENCE_TASK( ref l_U355 );
                TASK_PLAY_ANIM( 0, "Stash_lookaround", "misssara_1", 8.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U355 );
                TASK_PERFORM_SEQUENCE( sub_1930(), l_U355 );
                CLEAR_SEQUENCE_TASK( l_U355 );
                SET_CAM_POS( l_U311, -544.90590000, 1103.78100000, 10.67905000 );
                SET_CAM_ROT( l_U311, -5.84927600, 0.29569200, 150.96120000 );
                SET_CAM_FOV( l_U311, 26.40005000 );
                SET_CAM_PROPAGATE( l_U311, 1 );
                SET_CAM_ACTIVE( l_U311, 1 );
                GET_GAME_TIMER( ref l_U328 );
                l_U202 = 13;
            }
        }
        break;
        case 13:
        if (NOT (IS_CHAR_INJURED( l_U238 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U238 )))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U238 );
                l_U202 = 14;
            }
        }
        break;
        case 14:
        if (NOT (sub_12972( l_U359[0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U239 )))
            {
                sub_5257( "PIS_SHOUT", ref l_U359[0], 4, 1 );
                SET_CAM_PROPAGATE( l_U311, 0 );
                SET_CAM_ACTIVE( l_U311, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U325 );
                DESTROY_ALL_CAMS();
                sub_22995( ref l_U238, ref l_U241 );
                if (l_U222)
                {
                    SET_RELATIONSHIP( 5, 0, 23 );
                    SET_RELATIONSHIP( 5, 23, 0 );
                    CLEAR_CHAR_TASKS( l_U239 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U239, 0 );
                    SET_CHAR_KEEP_TASK( l_U239, 1 );
                    SET_CHAR_DECISION_MAKER( l_U239, l_U346 );
                    SET_COMBAT_DECISION_MAKER( l_U239, l_U347 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U239, 23 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U328 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1930() );
                if (l_U222)
                {
                    if (l_U232)
                    {
                        SET_CHAR_HEADING( sub_1930(), 275.21260000 );
                        SET_CHAR_COORDINATES( sub_1930(), -551.79520000, 1097.69800000, 8.95510000 );
                    }
                    else
                    {
                        SET_CHAR_HEADING( sub_1930(), 341.71510000 );
                        SET_CHAR_COORDINATES( sub_1930(), -553.19200000, 1095.86300000, 8.96240000 );
                    }
                }
                if (l_U330[0] == 1)
                {
                    if (l_U222)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U238 );
                        SET_CHAR_COORDINATES( l_U238, -557.55510000, 1094.13800000, 8.86790000 );
                        SET_CHAR_HEADING( l_U238, 326.56920000 );
                        sub_10762( 1 );
                    }
                    else
                    {
                        SET_CHAR_HEADING( l_U238, 0 );
                        TASK_LOOK_AT_CHAR( l_U238, l_U239, -1, 0 );
                        TASK_LOOK_AT_CHAR( sub_1930(), l_U239, 7000, 0 );
                        sub_10762( 1 );
                    }
                }
                else
                {
                    sub_23802( 1 );
                }
                l_U339 = 0;
                l_U200 = 2;
            }
        }
        break;
    }
    return;
}

int sub_17982(unknown uParam0, unknown uParam1)
{
    if (sub_6346( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_18017())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_18017()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_18077()
{
    DO_SCREEN_FADE_OUT( 500 );
    CLEAR_PRINTS();
    sub_2025( 0 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (DOES_CHAR_EXIST( l_U239 )))
    {
        CLEAR_AREA( l_U279._fU0, l_U279._fU4, l_U279._fU8, 4.00000000, 1 );
        CREATE_CHAR( 26, l_U321, l_U279._fU0, l_U279._fU4, l_U279._fU8, ref l_U239, 1 );
        SET_CHAR_HEADING( l_U239, l_U304 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U239, 1 );
        sub_4213( 2, l_U239, "HUSBAND", 0 );
    }
    GET_GAME_TIMER( ref l_U328 );
    l_U202 = 14;
    return;
}

void sub_20035(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_12972( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_22995(unknown uParam0, unknown uParam1)
{
    sub_23006( uParam1 );
    sub_23267( uParam0 );
    return;
}

void sub_23006(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_23062( uParam0 );
        }
    }
    return;
}

void sub_23062(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            else
            {
                SET_CAR_HEALTH( (uParam0^), ProtectedGet(l_U115) );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_ENGINE_HEALTH( (uParam0^), ProtectedGet(l_U178) );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), ProtectedGet(l_U179) );
            }
        }
    }
    return;
}

void sub_23267(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            if (ProtectedGet(l_U114) < 110)
            {
                SET_CHAR_HEALTH( (uParam0^), 120 );
            }
            else
            {
                SET_CHAR_HEALTH( (uParam0^), ProtectedGet(l_U114) );
            }
        }
    }
    return;
}

void sub_23802(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2025( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1132() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1930() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1930() );
        }
        SET_PLAYER_CONTROL( sub_1132(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1930(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_23992()
{
    if (NOT l_U237)
    {
        if (NOT l_U222)
        {
            if (sub_6346( ref l_U328, 500 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U239 )))
                {
                    SET_RELATIONSHIP( 5, 0, 23 );
                    SET_RELATIONSHIP( 5, 23, 0 );
                    CLEAR_CHAR_TASKS( l_U239 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U239, 0 );
                    SET_CHAR_KEEP_TASK( l_U239, 1 );
                    SET_CHAR_DECISION_MAKER( l_U239, l_U346 );
                    SET_COMBAT_DECISION_MAKER( l_U239, l_U347 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U239, 23 );
                    l_U237 = 1;
                }
            }
        }
    }
    if (NOT l_U235)
    {
        if (NOT (sub_12972( l_U359[0] )))
        {
            sub_5257( "PIS_RUNS", ref l_U359[0], 4, 1 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( -583.04500000, 1098.24000000, 8.89730000 );
            SET_CHAR_KEEP_TASK( l_U238, 1 );
            if (NOT (l_U330[0] == 1))
            {
                OPEN_SEQUENCE_TASK( ref l_U353 );
                TASK_LOOK_AT_CHAR( 0, sub_1930(), 50, 0 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_1930(), 150.00000000, -1 );
                CLOSE_SEQUENCE_TASK( l_U353 );
                TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                CLEAR_SEQUENCE_TASK( l_U353 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U353 );
                TASK_LOOK_AT_CHAR( 0, sub_1930(), 50, 0 );
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_1930(), 150.00000000, -1 );
                CLOSE_SEQUENCE_TASK( l_U353 );
                TASK_PERFORM_SEQUENCE( l_U238, l_U353 );
                CLEAR_SEQUENCE_TASK( l_U353 );
            }
            l_U235 = 1;
        }
    }
    if ((sub_2731( ref l_U238 )) > 50.00000000)
    {
        sub_24502();
        l_U223 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U239 )))
    {
        if (NOT l_U236)
        {
            if (sub_3191( ref l_U239, 10.00000000 ))
            {
                CLEAR_CHAR_TASKS( l_U239 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U239, 1 );
                SET_CHAR_KEEP_TASK( l_U239, 1 );
                OPEN_SEQUENCE_TASK( ref l_U354 );
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_1930(), 150.00000000, -1 );
                CLOSE_SEQUENCE_TASK( l_U354 );
                TASK_PERFORM_SEQUENCE( l_U239, l_U354 );
                CLEAR_SEQUENCE_TASK( l_U354 );
                l_U236 = 1;
            }
        }
        if ((sub_2731( ref l_U239 )) > 30.00000000)
        {
            sub_24502();
        }
    }
    else
    {
        sub_24502();
    }
    return;
}

void sub_24502()
{
    sub_24516( l_U358 );
    CLEAR_WANTED_LEVEL( sub_1132() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1310();
    return;
}

void sub_24516(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_531( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_651( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_24638( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_24638(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_24768();
        break;
        case 39:
        sub_25730();
        break;
        case 40:
        sub_25989();
        break;
        case 48:
        sub_26172();
        break;
        case 41:
        sub_26357();
        break;
        case 42:
        sub_26553();
        break;
        case 43:
        sub_26734();
        break;
        case 44:
        sub_26917();
        break;
        case 45:
        sub_27098();
        break;
        case 46:
        sub_27277();
        break;
        case 47:
        sub_27521();
        break;
        case 49:
        sub_27721();
        break;
        case 50:
        sub_27898();
        break;
        case 51:
        sub_28096();
        break;
        default: sub_651( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_28371();
    sub_28444();
    return;
}

void sub_24768()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 500 );
        break;
        default: sub_651( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_24808(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_24861( iParam0, uParam1, uParam2 );
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
        sub_24993( iParam0 + 0 );
    }
    return;
}

void sub_24861(int iParam0, int iParam1, int iParam2)
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
        sub_24993( iParam0 + 0 );
    }
    return;
}

void sub_24993(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_25024( iParam0->_fU4 )))
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

int sub_25024(unknown uParam0)
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

void sub_25454(unknown uParam0)
{
    sub_25465( uParam0 );
    return;
}

void sub_25465(unknown uParam0)
{
    ADD_SCORE( sub_1132(), uParam0 );
    sub_25490( uParam0 );
    return;
}

void sub_25490(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_651( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_25730()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_531( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 100 );
        sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_25454( 200 );
        sub_24808( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_25454( 500 );
        break;
        default: sub_651( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_25989()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_26172()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_26357()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        case 2:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_26553()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_26734()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 500 );
        break;
        default: sub_651( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_26917()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_27098()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 1000 );
        break;
        default: sub_651( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_27277()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_531( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 1000 );
        sub_1179( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_25454( 5000 );
        sub_24808( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_651( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_27521()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        case 2:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_27721()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 500 );
        break;
        default: sub_651( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_27898()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        case 2:
        sub_25454( 0 );
        break;
        default: sub_651( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_28096()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_531( iVar2 );
    sub_24808( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25454( 0 );
        break;
        case 2:
        sub_25454( 1000 );
        break;
        default: sub_651( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_28371()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

void sub_28444()
{
    sub_28453();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_28453()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}
