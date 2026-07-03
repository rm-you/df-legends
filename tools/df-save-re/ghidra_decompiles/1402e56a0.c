// FUN_1402e56a0 @ 1402e56a0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000be20 FUN_14000be20
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 14000c460 FUN_14000c460
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402e56a0(ulonglong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined2 local_58 [4];
  undefined8 local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_78;
  iVar3 = FUN_14000c110(param_2,"MOUNTAIN");
  if ((iVar3 == 0) || (iVar3 = FUN_14000c110(param_2,"MOUNTAINS"), iVar3 == 0)) {
    local_58[0] = 0;
    puVar1 = (undefined2 *)param_1[1];
    if ((local_58 < puVar1) && (puVar2 = (undefined2 *)*param_1, puVar2 <= local_58)) {
      if (puVar1 == (undefined2 *)param_1[2]) {
        FUN_14000c460(param_1,1);
      }
      if ((undefined2 *)param_1[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_1[1] =
             *(undefined2 *)(*param_1 + ((longlong)local_58 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_1[2]) {
        FUN_14000c460(param_1,1);
      }
      if ((undefined2 *)param_1[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_1[1] = 0;
      }
    }
    param_1[1] = param_1[1] + 2;
    return;
  }
  iVar3 = FUN_14000c110(param_2,"GLACIER");
  if (iVar3 == 0) {
    local_58[0] = 1;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"TUNDRA");
  if (iVar3 == 0) {
    local_58[0] = 2;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SWAMP_TEMPERATE_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 3;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SWAMP_TEMPERATE_SALTWATER");
  if (iVar3 == 0) {
LAB_1402e6842:
    local_58[0] = 4;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"MARSH_TEMPERATE_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 5;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"MARSH_TEMPERATE_SALTWATER");
  if (iVar3 == 0) {
LAB_1402e64a0:
    local_58[0] = 6;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SWAMP_TROPICAL_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 7;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SWAMP_TROPICAL_SALTWATER");
  if (iVar3 == 0) {
    local_58[0] = 8;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SWAMP_MANGROVE");
  if (iVar3 == 0) {
LAB_1402e6810:
    local_58[0] = 9;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"MARSH_TROPICAL_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 10;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"MARSH_TROPICAL_SALTWATER");
  if (iVar3 == 0) {
LAB_1402e6593:
    local_58[0] = 0xb;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"FOREST_TAIGA");
  if ((iVar3 == 0) || (iVar3 = FUN_14000c110(param_2,"TAIGA"), iVar3 == 0)) {
    local_58[0] = 0xc;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"FOREST_TEMPERATE_CONIFER");
  if (iVar3 == 0) {
    local_58[0] = 0xd;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"FOREST_TEMPERATE_BROADLEAF");
  if (iVar3 == 0) {
LAB_1402e66cc:
    local_58[0] = 0xe;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"FOREST_TROPICAL_CONIFER");
  if (iVar3 == 0) {
    local_58[0] = 0xf;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"FOREST_TROPICAL_DRY_BROADLEAF");
  if (iVar3 == 0) {
    local_58[0] = 0x10;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"FOREST_TROPICAL_MOIST_BROADLEAF");
  if (iVar3 == 0) {
LAB_1402e6604:
    local_58[0] = 0x11;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"GRASSLAND_TEMPERATE");
  if (iVar3 == 0) {
    local_58[0] = 0x12;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SAVANNA_TEMPERATE");
  if (iVar3 == 0) {
    local_58[0] = 0x13;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SHRUBLAND_TEMPERATE");
  if (iVar3 == 0) {
    local_58[0] = 0x14;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"GRASSLAND_TROPICAL");
  if (iVar3 == 0) {
LAB_1402e6668:
    local_58[0] = 0x15;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SAVANNA_TROPICAL");
  if (iVar3 == 0) {
LAB_1402e669a:
    local_58[0] = 0x16;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"SHRUBLAND_TROPICAL");
  if (iVar3 == 0) {
LAB_1402e6636:
    local_58[0] = 0x17;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"DESERT_BADLAND");
  if (iVar3 == 0) {
    local_58[0] = 0x18;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"DESERT_ROCK");
  if (iVar3 == 0) {
    local_58[0] = 0x19;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"DESERT_SAND");
  if (iVar3 == 0) {
LAB_1402e6194:
    local_58[0] = 0x1a;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"OCEAN_TROPICAL");
  if (iVar3 == 0) {
    local_58[0] = 0x1b;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"OCEAN_TEMPERATE");
  if (iVar3 == 0) {
    local_58[0] = 0x1c;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"OCEAN_ARCTIC");
  if (iVar3 == 0) {
LAB_1402e61e1:
    local_58[0] = 0x1d;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"POOL_TEMPERATE_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x1e;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"POOL_TEMPERATE_BRACKISHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x1f;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"POOL_TEMPERATE_SALTWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x20;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"POOL_TROPICAL_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x21;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"POOL_TROPICAL_BRACKISHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x22;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"POOL_TROPICAL_SALTWATER");
  if (iVar3 == 0) {
LAB_1402e63c0:
    local_58[0] = 0x23;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"LAKE_TEMPERATE_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x24;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"LAKE_TEMPERATE_BRACKISHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x25;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"LAKE_TEMPERATE_SALTWATER");
  if (iVar3 == 0) {
LAB_1402e623f:
    local_58[0] = 0x26;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"LAKE_TROPICAL_FRESHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x27;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"LAKE_TROPICAL_BRACKISHWATER");
  if (iVar3 == 0) {
    local_58[0] = 0x28;
    goto LAB_1402e5719;
  }
  iVar3 = FUN_14000c110(param_2,"LAKE_TROPICAL_SALTWATER");
  if (iVar3 != 0) {
    iVar3 = FUN_14000c110(param_2,"RIVER_TEMPERATE_FRESHWATER");
    if (iVar3 == 0) {
      local_58[0] = 0x2a;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"RIVER_TEMPERATE_BRACKISHWATER");
    if (iVar3 == 0) {
      local_58[0] = 0x2b;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"RIVER_TEMPERATE_SALTWATER");
    if (iVar3 == 0) {
LAB_1402e6323:
      local_58[0] = 0x2c;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"RIVER_TROPICAL_FRESHWATER");
    if (iVar3 == 0) {
      local_58[0] = 0x2d;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"RIVER_TROPICAL_BRACKISHWATER");
    if (iVar3 == 0) {
      local_58[0] = 0x2e;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"RIVER_TROPICAL_SALTWATER");
    if (iVar3 == 0) {
LAB_1402e62dc:
      local_58[0] = 0x2f;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"SUBTERRANEAN_WATER");
    if (iVar3 == 0) {
      local_58[0] = 0x30;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"SUBTERRANEAN_CHASM");
    if (iVar3 == 0) {
      local_58[0] = 0x31;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"SUBTERRANEAN_LAVA");
    if (iVar3 == 0) {
      local_58[0] = 0x32;
      goto LAB_1402e5719;
    }
    iVar3 = FUN_14000c110(param_2,"ALL_MAIN");
    if (iVar3 == 0) {
      local_58[0] = 0;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 1;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 2;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 3;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 4;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 5;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 6;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 7;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 8;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 9;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 10;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0xb;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0xc;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0xd;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0xe;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0xf;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x10;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x11;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x12;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x13;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x14;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x15;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x16;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x17;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x18;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x19;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x1a;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x1b;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x1c;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x1d;
      FUN_14000be20(param_1,local_58);
LAB_1402e5eeb:
      local_58[0] = 0x24;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x25;
      FUN_14000be20(param_1,local_58);
      local_58[0] = 0x26;
      FUN_14000be20(param_1,local_58);
    }
    else {
      iVar3 = FUN_14000c110(param_2,"ANY_LAND");
      if (iVar3 == 0) {
        local_58[0] = 0;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 1;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 2;
        FUN_14000be20(param_1,local_58);
LAB_1402e5fb1:
        local_58[0] = 3;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 4;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 5;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 6;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 7;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 8;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 9;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 10;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0xb;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0xc;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0xd;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0xe;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0xf;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x10;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x11;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x12;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x13;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x14;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x15;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x16;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x17;
        FUN_14000be20(param_1,local_58);
LAB_1402e616a:
        local_58[0] = 0x18;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x19;
        FUN_14000be20(param_1,local_58);
        goto LAB_1402e6194;
      }
      iVar3 = FUN_14000c110(param_2,"ANY_OCEAN");
      if (iVar3 == 0) {
        local_58[0] = 0x1b;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x1c;
        FUN_14000be20(param_1,local_58);
        goto LAB_1402e61e1;
      }
      iVar3 = FUN_14000c110(param_2,"ANY_LAKE");
      if (iVar3 == 0) goto LAB_1402e5eeb;
      iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_LAKE");
      if (iVar3 == 0) {
        local_58[0] = 0x24;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x25;
        FUN_14000be20(param_1,local_58);
        goto LAB_1402e623f;
      }
      iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_LAKE");
      if (iVar3 != 0) {
        iVar3 = FUN_14000c110(param_2,"ANY_RIVER");
        if (iVar3 == 0) {
          local_58[0] = 0x2a;
          FUN_14000be20(param_1,local_58);
          local_58[0] = 0x2b;
          FUN_14000be20(param_1,local_58);
          local_58[0] = 0x2c;
          FUN_14000be20(param_1,local_58);
        }
        else {
          iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_RIVER");
          if (iVar3 == 0) {
            local_58[0] = 0x2a;
            FUN_14000be20(param_1,local_58);
            local_58[0] = 0x2b;
            FUN_14000be20(param_1,local_58);
            goto LAB_1402e6323;
          }
          iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_RIVER");
          if (iVar3 != 0) {
            iVar3 = FUN_14000c110(param_2,"ANY_POOL");
            if (iVar3 == 0) {
              local_58[0] = 0x1e;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x1f;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x20;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x21;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x22;
              FUN_14000be20(param_1,local_58);
              goto LAB_1402e63c0;
            }
            iVar3 = FUN_14000c110(param_2,"NOT_FREEZING");
            if (iVar3 == 0) goto LAB_1402e5fb1;
            iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE");
            if (iVar3 == 0) {
              local_58[0] = 0xd;
              FUN_14000be20(param_1,local_58);
LAB_1402e640d:
              local_58[0] = 0xe;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x12;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x13;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x14;
              FUN_14000be20(param_1,local_58);
LAB_1402e6461:
              local_58[0] = 3;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 4;
              FUN_14000be20(param_1,local_58);
LAB_1402e648b:
              local_58[0] = 5;
              FUN_14000be20(param_1,local_58);
              goto LAB_1402e64a0;
            }
            iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL");
            if (iVar3 == 0) {
              local_58[0] = 0xf;
              FUN_14000be20(param_1,local_58);
LAB_1402e64d6:
              local_58[0] = 0x10;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x11;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x15;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x16;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0x17;
LAB_1402e652f:
              FUN_14000be20(param_1,local_58);
LAB_1402e653f:
              local_58[0] = 7;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 8;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 9;
              FUN_14000be20(param_1,local_58);
LAB_1402e657e:
              local_58[0] = 10;
              FUN_14000be20(param_1,local_58);
              goto LAB_1402e6593;
            }
            iVar3 = FUN_14000c110(param_2,"ANY_FOREST");
            if (iVar3 == 0) {
              local_58[0] = 0xd;
              FUN_14000be20(param_1,local_58);
              local_58[0] = 0xe;
              FUN_14000be20(param_1,local_58);
            }
            else {
              iVar3 = FUN_14000c110(param_2,"ANY_SHRUBLAND");
              if (iVar3 == 0) {
                local_58[0] = 0x14;
                FUN_14000be20(param_1,local_58);
                goto LAB_1402e6636;
              }
              iVar3 = FUN_14000c110(param_2,"ANY_GRASSLAND");
              if (iVar3 == 0) {
                local_58[0] = 0x12;
                FUN_14000be20(param_1,local_58);
                goto LAB_1402e6668;
              }
              iVar3 = FUN_14000c110(param_2,"ANY_SAVANNA");
              if (iVar3 == 0) {
                local_58[0] = 0x13;
                FUN_14000be20(param_1,local_58);
                goto LAB_1402e669a;
              }
              iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_FOREST");
              if (iVar3 == 0) {
                local_58[0] = 0xd;
                FUN_14000be20(param_1,local_58);
                goto LAB_1402e66cc;
              }
              iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_FOREST");
              if (iVar3 != 0) {
                iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_BROADLEAF");
                if (iVar3 == 0) goto LAB_1402e640d;
                iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_BROADLEAF");
                if (iVar3 == 0) goto LAB_1402e64d6;
                iVar3 = FUN_14000c110(param_2,"ANY_WETLAND");
                if (iVar3 == 0) {
                  local_58[0] = 3;
                  FUN_14000be20(param_1,local_58);
                  local_58[0] = 4;
                  FUN_14000be20(param_1,local_58);
                  local_58[0] = 5;
                  FUN_14000be20(param_1,local_58);
                  local_58[0] = 6;
                  goto LAB_1402e652f;
                }
                iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_WETLAND");
                if (iVar3 == 0) goto LAB_1402e653f;
                iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_WETLAND");
                if (iVar3 == 0) goto LAB_1402e6461;
                iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_MARSH");
                if (iVar3 == 0) goto LAB_1402e657e;
                iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_MARSH");
                if (iVar3 != 0) {
                  iVar3 = FUN_14000c110(param_2,"ANY_TROPICAL_SWAMP");
                  if (iVar3 == 0) {
                    local_58[0] = 7;
                    FUN_14000be20(param_1,local_58);
                    local_58[0] = 8;
                    FUN_14000be20(param_1,local_58);
                    goto LAB_1402e6810;
                  }
                  iVar3 = FUN_14000c110(param_2,"ANY_TEMPERATE_SWAMP");
                  if (iVar3 == 0) {
                    local_58[0] = 3;
                    FUN_14000be20(param_1,local_58);
                    goto LAB_1402e6842;
                  }
                  iVar3 = FUN_14000c110(param_2,"ANY_DESERT");
                  if (iVar3 != 0) {
                    local_30 = 0xf;
                    local_38 = 0;
                    local_48 = 0;
                    FUN_14000c780(&local_48,"Unrecognized Biome Token: ",0x1a);
                    FUN_14000cb40(&local_48,param_2,0,0xffffffffffffffff);
                    FUN_14014a240(&local_48);
                    if (local_30 < 0x10) {
                      return;
                    }
                    FUN_140002020(CONCAT71(uStack_47,local_48),local_30 + 1,1);
                    return;
                  }
                  goto LAB_1402e616a;
                }
                goto LAB_1402e648b;
              }
            }
            local_58[0] = 0xf;
            FUN_14000be20(param_1,local_58);
            local_58[0] = 0x10;
            FUN_14000be20(param_1,local_58);
            goto LAB_1402e6604;
          }
        }
        local_58[0] = 0x2d;
        FUN_14000be20(param_1,local_58);
        local_58[0] = 0x2e;
        FUN_14000be20(param_1,local_58);
        goto LAB_1402e62dc;
      }
    }
    local_58[0] = 0x27;
    FUN_14000be20(param_1,local_58);
    local_58[0] = 0x28;
    FUN_14000be20(param_1,local_58);
  }
  local_58[0] = 0x29;
LAB_1402e5719:
  FUN_14000be20(param_1,local_58);
  return;
}

