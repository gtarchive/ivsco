void main()
{
    l_U0 = 0;
    l_U286 = -1097828879;
    l_U287 = -1420592428;
    l_U293 = 0;
    sub_39();
    while (true)
    {
        WAIT( 0 );
        if (l_U288[2] == 0)
        {
            PRINT_HELP_FOREVER( "PHY_01" );
        }
        else
        {
            PRINT_HELP_FOREVER( "PHY_02" );
        }
        switch (l_U0)
        {
            case 0:
            sub_2272();
            if (IS_KEYBOARD_KEY_PRESSED( 38 ))
            {
                while (IS_KEYBOARD_KEY_PRESSED( 38 ))
                {
                    WAIT( 0 );
                }
                sub_2332();
                l_U0 = 1;
            }
            if (IS_KEYBOARD_KEY_PRESSED( 25 ))
            {
                while (IS_KEYBOARD_KEY_PRESSED( 25 ))
                {
                    WAIT( 0 );
                }
                sub_2332();
                l_U0 = 2;
            }
            if (IS_KEYBOARD_KEY_PRESSED( 24 ))
            {
                while (IS_KEYBOARD_KEY_PRESSED( 24 ))
                {
                    WAIT( 0 );
                }
                sub_2332();
                l_U0 = 3;
            }
            if (l_U288[2] == 1)
            {
                if (IS_KEYBOARD_KEY_PRESSED( 19 ))
                {
                    while (IS_KEYBOARD_KEY_PRESSED( 19 ))
                    {
                        WAIT( 0 );
                    }
                    if (l_U293 == 0)
                    {
                        sub_2790();
                        CLEAR_PRINTS();
                        PRINT_NOW( "PHY_03", 3000, 1 );
                        l_U293 = 1;
                    }
                    else
                    {
                        sub_2921();
                        CLEAR_PRINTS();
                        PRINT_NOW( "PHY_04", 3000, 1 );
                        l_U293 = 0;
                    }
                }
            }
            break;
            case 1:
            CLEAR_AREA_OF_CARS( l_U2[0]._fU0, l_U2[0]._fU4, l_U2[0]._fU8, 80.00000000 );
            sub_3074();
            l_U288[0] = 1;
            l_U0 = 0;
            break;
            case 2:
            CLEAR_AREA_OF_CARS( l_U2[0]._fU0, l_U2[0]._fU4, l_U2[0]._fU8, 80.00000000 );
            CLEAR_AREA_OF_CHARS( l_U2[0]._fU0, l_U2[0]._fU4, l_U2[0]._fU8, 80.00000000 );
            sub_3350();
            l_U288[1] = 1;
            l_U0 = 0;
            break;
            case 3:
            CLEAR_AREA_OF_CARS( l_U2[0]._fU0, l_U2[0]._fU4, l_U2[0]._fU8, 80.00000000 );
            CLEAR_AREA_OF_CHARS( l_U2[0]._fU0, l_U2[0]._fU4, l_U2[0]._fU8, 80.00000000 );
            sub_3711();
            l_U288[2] = 1;
            l_U0 = 0;
            break;
        }
    }
    return;
}

void sub_39()
{
    l_U2[0] = {837.00000000, -244.00000000, 15.40000000};
    l_U2[10] = {833.50000000, -244.00000000, 15.40000000};
    l_U2[20] = {830.00000000, -244.00000000, 15.40000000};
    l_U2[1] = {837.00000000, -250.00000000, 15.40000000};
    l_U2[11] = {833.50000000, -250.00000000, 15.40000000};
    l_U2[21] = {830.00000000, -250.00000000, 15.40000000};
    l_U2[2] = {837.00000000, -256.00000000, 15.40000000};
    l_U2[12] = {833.50000000, -256.00000000, 15.40000000};
    l_U2[22] = {830.00000000, -256.00000000, 15.40000000};
    l_U2[3] = {837.00000000, -262.00000000, 15.40000000};
    l_U2[13] = {833.50000000, -262.00000000, 15.40000000};
    l_U2[23] = {830.00000000, -262.00000000, 15.40000000};
    l_U2[4] = {837.00000000, -268.00000000, 15.40000000};
    l_U2[14] = {833.50000000, -268.00000000, 15.40000000};
    l_U2[24] = {830.00000000, -268.00000000, 15.40000000};
    l_U2[5] = {837.00000000, -274.00000000, 15.40000000};
    l_U2[15] = {833.50000000, -274.00000000, 15.40000000};
    l_U2[25] = {830.00000000, -274.00000000, 15.40000000};
    l_U2[6] = {837.00000000, -280.00000000, 15.40000000};
    l_U2[16] = {833.50000000, -280.00000000, 15.40000000};
    l_U2[26] = {830.00000000, -280.00000000, 15.40000000};
    l_U2[7] = {837.00000000, -286.00000000, 15.40000000};
    l_U2[17] = {833.50000000, -286.00000000, 15.40000000};
    l_U2[27] = {830.00000000, -286.00000000, 15.40000000};
    l_U2[8] = {837.00000000, -292.00000000, 15.40000000};
    l_U2[18] = {833.50000000, -292.00000000, 15.40000000};
    l_U2[28] = {830.00000000, -292.00000000, 15.40000000};
    l_U2[9] = {837.00000000, -298.00000000, 15.40000000};
    l_U2[19] = {833.50000000, -298.00000000, 15.40000000};
    l_U2[29] = {830.00000000, -298.00000000, 15.40000000};
    l_U124[0] = {843.74520000, -270.12340000, 15.64040000};
    l_U245[0] = 326.15120000;
    l_U124[1] = {842.45390000, -273.70260000, 15.71010000};
    l_U245[1] = 130.21390000;
    l_U124[2] = {844.60760000, -277.37000000, 15.76090000};
    l_U245[2] = 289.22710000;
    l_U124[3] = {843.95940000, -279.51030000, 15.79030000};
    l_U245[3] = 359.41960000;
    l_U124[4] = {844.43390000, -283.26460000, 15.83080000};
    l_U245[4] = 319.22050000;
    l_U124[5] = {826.03380000, -269.11170000, 15.56940000};
    l_U245[5] = 70.28500000;
    l_U124[6] = {825.40990000, -266.74810000, 15.50390000};
    l_U245[6] = 310.79430000;
    l_U124[7] = {822.69400000, -267.83140000, 15.52530000};
    l_U245[7] = 184.05010000;
    l_U124[8] = {824.66860000, -270.95120000, 15.46730000};
    l_U245[8] = 214.64940000;
    l_U124[9] = {824.51260000, -274.13840000, 15.40380000};
    l_U245[9] = 131.50190000;
    l_U124[10] = {827.05380000, -277.16170000, 15.47310000};
    l_U245[10] = 325.77170000;
    l_U124[11] = {830.23240000, -277.64140000, 15.70650000};
    l_U245[11] = 248.53840000;
    l_U124[12] = {835.46150000, -276.34570000, 15.74880000};
    l_U245[12] = 294.95210000;
    l_U124[13] = {839.89900000, -261.78780000, 15.26850000};
    l_U245[13] = 2.06840000;
    l_U124[14] = {843.39790000, -257.87660000, 15.44880000};
    l_U245[14] = 308.16730000;
    l_U124[15] = {842.26680000, -255.75400000, 15.45610000};
    l_U245[15] = 235.39340000;
    l_U124[16] = {844.92600000, -254.85380000, 15.44440000};
    l_U245[16] = 35.64070000;
    l_U124[17] = {843.35310000, -252.80570000, 15.46100000};
    l_U245[17] = 35.53270000;
    l_U124[18] = {843.35310000, -252.80570000, 15.46060000};
    l_U245[18] = 35.53270000;
    l_U124[19] = {844.07990000, -260.43110000, 15.44520000};
    l_U245[19] = 146.57040000;
    l_U124[20] = {837.00000000, -260.00000000, 15.44520000};
    l_U124[30] = {832.00000000, -260.00000000, 15.44520000};
    l_U124[21] = {837.00000000, -262.00000000, 15.44520000};
    l_U124[31] = {832.00000000, -262.00000000, 15.44520000};
    l_U124[22] = {837.00000000, -264.00000000, 15.44520000};
    l_U124[32] = {832.00000000, -264.00000000, 15.44520000};
    l_U124[23] = {837.00000000, -266.00000000, 15.44520000};
    l_U124[33] = {832.00000000, -266.00000000, 15.44520000};
    l_U124[24] = {837.00000000, -268.00000000, 15.44520000};
    l_U124[34] = {832.00000000, -268.00000000, 15.44520000};
    l_U124[25] = {837.00000000, -270.00000000, 15.44520000};
    l_U124[35] = {832.00000000, -270.00000000, 15.44520000};
    l_U124[26] = {837.00000000, -272.00000000, 15.44520000};
    l_U124[36] = {832.00000000, -272.00000000, 15.44520000};
    l_U124[27] = {837.00000000, -274.00000000, 15.44520000};
    l_U124[37] = {832.00000000, -274.00000000, 15.44520000};
    l_U124[28] = {837.00000000, -276.00000000, 15.44520000};
    l_U124[38] = {832.00000000, -276.00000000, 15.44520000};
    l_U124[29] = {837.00000000, -278.00000000, 15.44520000};
    l_U124[39] = {832.00000000, -278.00000000, 15.44520000};
    # -sub_C1FFC0-0xc214c8( 0, ref l_U385 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U386 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    l_U294 = {0.00000000, 0.00000000, 0.01000000};
    l_U297 = {0.00000000, 0.00000000, 0.00000000};
    l_U300 = {0.00000000, 180.00000000, 0.00000000};
    l_U303 = -0.04157100;
    l_U304 = 0.98984200;
    l_U305 = -0.12317300;
    l_U306 = -0.05756000;
    return;
}

void sub_2272()
{
    return;
}

void sub_2332()
{
    if (l_U288[0] == 1)
    {
        sub_2356();
        l_U288[0] = 0;
    }
    if (l_U288[1] == 1)
    {
        sub_2447();
        l_U288[1] = 0;
    }
    if (l_U288[2] == 1)
    {
        sub_2540();
        l_U288[2] = 0;
    }
    return;
}

void sub_2356()
{
    int I;

    for ( I = 0; I <= 29; I++ )
    {
        DELETE_CAR( ref l_U307[I] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U286 );
    return;
}

void sub_2447()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        DELETE_CHAR( ref l_U338[I] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U287 );
    return;
}

void sub_2540()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        DELETE_CHAR( ref l_U379[I] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U287 );
    return;
}

void sub_2790()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U379[I] )))
        {
            SWITCH_PED_TO_RAGDOLL( l_U379[I], 100000, 100000, 2, 1, 1, 0 );
        }
    }
    return;
}

void sub_2921()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U379[I] )))
        {
            SWITCH_PED_TO_ANIMATED( l_U379[I], 1 );
        }
    }
    return;
}

void sub_3074()
{
    int I;

    REQUEST_MODEL( l_U286 );
    while (NOT (HAS_MODEL_LOADED( l_U286 )))
    {
        WAIT( 0 );
    }
    for ( I = 0; I <= 29; I++ )
    {
        CREATE_CAR( l_U286, l_U2[I]._fU0, l_U2[I]._fU4, l_U2[I]._fU8, ref l_U307[I], 1 );
        if (NOT (IS_CAR_DEAD( l_U307[I] )))
        {
            APPLY_FORCE_TO_CAR( l_U307[I], 1, l_U294, l_U297, 0, 0, 0, 1 );
        }
    }
    return;
}

void sub_3350()
{
    int I;

    REQUEST_MODEL( l_U287 );
    while (NOT (HAS_MODEL_LOADED( l_U287 )))
    {
        WAIT( 0 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        CREATE_CHAR( 4, l_U287, l_U124[I]._fU0, l_U124[I]._fU4, l_U124[I]._fU8, ref l_U338[I], 1 );
        if (NOT (IS_CHAR_DEAD( l_U338[I] )))
        {
            if (I < 20)
            {
                SET_CHAR_HEADING( l_U338[I], l_U245[I] );
            }
            APPLY_FORCE_TO_PED( l_U338[I], 1, l_U294, l_U297, 7, 0, 0, 1 );
            SET_CHAR_DECISION_MAKER( l_U338[I], l_U385 );
            SET_COMBAT_DECISION_MAKER( l_U338[I], l_U386 );
        }
    }
    return;
}

void sub_3711()
{
    int I;

    REQUEST_MODEL( l_U287 );
    while (NOT (HAS_MODEL_LOADED( l_U287 )))
    {
        WAIT( 0 );
    }
    for ( I = 0; I <= 4; I++ )
    {
        CREATE_CHAR( 4, l_U287, l_U124[I]._fU0, l_U124[I]._fU4, l_U124[I]._fU8, ref l_U379[I], 1 );
        if (NOT (IS_CHAR_DEAD( l_U379[I] )))
        {
            SET_CHAR_HEADING( l_U379[I], l_U245[I] );
            APPLY_FORCE_TO_PED( l_U379[I], 1, l_U294, l_U297, 7, 0, 0, 1 );
            SET_CHAR_DECISION_MAKER( l_U379[I], l_U385 );
            SET_COMBAT_DECISION_MAKER( l_U379[I], l_U386 );
            UNLOCK_RAGDOLL( l_U379[I], 1 );
        }
    }
    return;
}
