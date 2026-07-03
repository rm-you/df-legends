// FUN_1402d80b0 @ 1402d80b0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d80b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14000c110(param_1,&DAT_140eb5450);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_14000c110(param_1,"SMALLGEM");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"BLOCKS");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"ROUGH");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"STONE");
          if ((iVar1 != 0) && (iVar1 = FUN_14000c110(param_1,"BOULDER"), iVar1 != 0)) {
            iVar1 = FUN_14000c110(param_1,&DAT_140eb5448);
            if (iVar1 == 0) {
              return 5;
            }
            iVar1 = FUN_14000c110(param_1,"BRANCH");
            if (iVar1 == 0) {
              return 0x5a;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb540c);
            if (iVar1 == 0) {
              return 6;
            }
            iVar1 = FUN_14000c110(param_1,"FLOODGATE");
            if (iVar1 == 0) {
              return 7;
            }
            iVar1 = FUN_14000c110(param_1,"HATCH_COVER");
            if (iVar1 == 0) {
              return 0x4d;
            }
            iVar1 = FUN_14000c110(param_1,"GRATE");
            if (iVar1 == 0) {
              return 0x4e;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb5678);
            if (iVar1 == 0) {
              return 8;
            }
            iVar1 = FUN_14000c110(param_1,"TRACTION_BENCH");
            if (iVar1 == 0) {
              return 0x53;
            }
            iVar1 = FUN_14000c110(param_1,"CHAIR");
            if (iVar1 == 0) {
              return 9;
            }
            iVar1 = FUN_14000c110(param_1,"CHAIN");
            if (iVar1 == 0) {
              return 10;
            }
            iVar1 = FUN_14000c110(param_1,"FLASK");
            if (iVar1 == 0) {
              return 0xb;
            }
            iVar1 = FUN_14000c110(param_1,"GOBLET");
            if (iVar1 == 0) {
              return 0xc;
            }
            iVar1 = FUN_14000c110(param_1,"INSTRUMENT");
            if (iVar1 == 0) {
              return 0xd;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb5654);
            if (iVar1 == 0) {
              return 0xe;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb562c);
            if (iVar1 == 0) {
              return 0x55;
            }
            iVar1 = FUN_14000c110(param_1,"WINDOW");
            if (iVar1 == 0) {
              return 0xf;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb563c);
            if (iVar1 == 0) {
              return 0x10;
            }
            iVar1 = FUN_14000c110(param_1,"BARREL");
            if (iVar1 == 0) {
              return 0x11;
            }
            iVar1 = FUN_14000c110(param_1,"BUCKET");
            if (iVar1 == 0) {
              return 0x12;
            }
            iVar1 = FUN_14000c110(param_1,"ANIMALTRAP");
            if (iVar1 == 0) {
              return 0x13;
            }
            iVar1 = FUN_14000c110(param_1,"TABLE");
            if (iVar1 == 0) {
              return 0x14;
            }
            iVar1 = FUN_14000c110(param_1,"COFFIN");
            if (iVar1 == 0) {
              return 0x15;
            }
            iVar1 = FUN_14000c110(param_1,"STATUE");
            if (iVar1 == 0) {
              return 0x16;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb55dc);
            if (iVar1 == 0) {
              return 0x56;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb55f4);
            if (iVar1 == 0) {
              return 0x58;
            }
            iVar1 = FUN_14000c110(param_1,"QUERN");
            if (iVar1 == 0) {
              return 0x4f;
            }
            iVar1 = FUN_14000c110(param_1,"MILLSTONE");
            if (iVar1 == 0) {
              return 0x50;
            }
            iVar1 = FUN_14000c110(param_1,"CORPSE");
            if (iVar1 == 0) {
              return 0x17;
            }
            iVar1 = FUN_14000c110(param_1,"WEAPON");
            if (iVar1 == 0) {
              return 0x18;
            }
            iVar1 = FUN_14000c110(param_1,"ARMOR");
            if (iVar1 == 0) {
              return 0x19;
            }
            iVar1 = FUN_14000c110(param_1,"SHOES");
            if (iVar1 == 0) {
              return 0x1a;
            }
            iVar1 = FUN_14000c110(param_1,"SHIELD");
            if (iVar1 == 0) {
              return 0x1b;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb55a8);
            if (iVar1 == 0) {
              return 0x1c;
            }
            iVar1 = FUN_14000c110(param_1,"GLOVES");
            if (iVar1 == 0) {
              return 0x1d;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb55b4);
            if (iVar1 == 0) {
              return 0x1e;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb55b0);
            if (iVar1 == 0) {
              return 0x1f;
            }
            iVar1 = FUN_14000c110(param_1,"ARMORSTAND");
            if (iVar1 == 0) {
              return 0x20;
            }
            iVar1 = FUN_14000c110(param_1,"WEAPONRACK");
            if (iVar1 == 0) {
              return 0x21;
            }
            iVar1 = FUN_14000c110(param_1,"CABINET");
            if (iVar1 == 0) {
              return 0x22;
            }
            iVar1 = FUN_14000c110(param_1,"FIGURINE");
            if (iVar1 == 0) {
              return 0x23;
            }
            iVar1 = FUN_14000c110(param_1,"AMULET");
            if (iVar1 == 0) {
              return 0x24;
            }
            iVar1 = FUN_14000c110(param_1,"SCEPTER");
            if (iVar1 == 0) {
              return 0x25;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb5800);
            if (iVar1 == 0) {
              return 0x26;
            }
            iVar1 = FUN_14000c110(param_1,"CROWN");
            if (iVar1 == 0) {
              return 0x27;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb57c8);
            if (iVar1 == 0) {
              return 0x28;
            }
            iVar1 = FUN_14000c110(param_1,"EARRING");
            if (iVar1 == 0) {
              return 0x29;
            }
            iVar1 = FUN_14000c110(param_1,"BRACELET");
            if (iVar1 == 0) {
              return 0x2a;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb57d0);
            if (iVar1 == 0) {
              return 0x2b;
            }
            iVar1 = FUN_14000c110(param_1,"ANVIL");
            if (iVar1 == 0) {
              return 0x2c;
            }
            iVar1 = FUN_14000c110(param_1,"CORPSEPIECE");
            if (iVar1 == 0) {
              return 0x2d;
            }
            iVar1 = FUN_14000c110(param_1,"REMAINS");
            if (iVar1 == 0) {
              return 0x2e;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb57b4);
            if (iVar1 == 0) {
              return 0x2f;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb3aa0);
            if (iVar1 == 0) {
              return 0x30;
            }
            iVar1 = FUN_14000c110(param_1,"FISH_RAW");
            if (iVar1 == 0) {
              return 0x31;
            }
            iVar1 = FUN_14000c110(param_1,"VERMIN");
            if (iVar1 == 0) {
              return 0x32;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140ea95b0);
            if (iVar1 == 0) {
              return 0x33;
            }
            iVar1 = FUN_14000c110(param_1,"SEEDS");
            if (iVar1 == 0) {
              return 0x34;
            }
            iVar1 = FUN_14000c110(param_1,"PLANT");
            if (iVar1 == 0) {
              return 0x35;
            }
            iVar1 = FUN_14000c110(param_1,"SKIN_TANNED");
            if (iVar1 == 0) {
              return 0x36;
            }
            iVar1 = FUN_14000c110(param_1,"PLANT_GROWTH");
            if (iVar1 == 0) {
              return 0x37;
            }
            iVar1 = FUN_14000c110(param_1,"THREAD");
            if (iVar1 == 0) {
              return 0x38;
            }
            iVar1 = FUN_14000c110(param_1,"CLOTH");
            if (iVar1 == 0) {
              return 0x39;
            }
            iVar1 = FUN_14000c110(param_1,"SHEET");
            if (iVar1 == 0) {
              return 0x59;
            }
            iVar1 = FUN_14000c110(param_1,"TOTEM");
            if (iVar1 == 0) {
              return 0x3a;
            }
            iVar1 = FUN_14000c110(param_1,"PANTS");
            if (iVar1 == 0) {
              return 0x3b;
            }
            iVar1 = FUN_14000c110(param_1,"BACKPACK");
            if (iVar1 == 0) {
              return 0x3c;
            }
            iVar1 = FUN_14000c110(param_1,"QUIVER");
            if (iVar1 == 0) {
              return 0x3d;
            }
            iVar1 = FUN_14000c110(param_1,"SPLINT");
            if (iVar1 == 0) {
              return 0x51;
            }
            iVar1 = FUN_14000c110(param_1,"ORTHOPEDIC_CAST");
            if (iVar1 == 0) {
              return 0x54;
            }
            iVar1 = FUN_14000c110(param_1,"CRUTCH");
            if (iVar1 == 0) {
              return 0x52;
            }
            iVar1 = FUN_14000c110(param_1,"CATAPULTPARTS");
            if (iVar1 == 0) {
              return 0x3e;
            }
            iVar1 = FUN_14000c110(param_1,"BALLISTAPARTS");
            if (iVar1 == 0) {
              return 0x3f;
            }
            iVar1 = FUN_14000c110(param_1,"SIEGEAMMO");
            if (iVar1 == 0) {
              return 0x40;
            }
            iVar1 = FUN_14000c110(param_1,"BALLISTAARROWHEAD");
            if (iVar1 == 0) {
              return 0x41;
            }
            iVar1 = FUN_14000c110(param_1,"TRAPPARTS");
            if (iVar1 == 0) {
              return 0x42;
            }
            iVar1 = FUN_14000c110(param_1,"TRAPCOMP");
            if (iVar1 == 0) {
              return 0x43;
            }
            iVar1 = FUN_14000c110(param_1,"DRINK");
            if (iVar1 == 0) {
              return 0x44;
            }
            iVar1 = FUN_14000c110(param_1,"POWDER_MISC");
            if (iVar1 == 0) {
              return 0x45;
            }
            iVar1 = FUN_14000c110(param_1,"CHEESE");
            if (iVar1 == 0) {
              return 0x46;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb3ab4);
            if (iVar1 == 0) {
              return 0x47;
            }
            iVar1 = FUN_14000c110(param_1,"LIQUID_MISC");
            if (iVar1 == 0) {
              return 0x48;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb59c4);
            if (iVar1 == 0) {
              return 0x49;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb59bc);
            if (iVar1 == 0) {
              return 0x4a;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb5980);
            if (iVar1 == 0) {
              return 0x4b;
            }
            iVar1 = FUN_14000c110(param_1,"PIPE_SECTION");
            if (iVar1 == 0) {
              return 0x4c;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140eb59a4);
            if (iVar1 == 0) {
              return 0x57;
            }
            iVar1 = FUN_14000c110(param_1,&DAT_140e8cc54);
            if (iVar1 == 0) {
              return 0xffffffffffffffff;
            }
            local_18 = 0xf;
            local_20 = 0;
            local_30 = 0;
            FUN_14000c8b0(&local_30,param_2,0,0xffffffffffffffff);
            if (local_20 != 0) {
              FUN_14000c9f0(&local_30,&DAT_140e7aaf8,1);
            }
            FUN_14000c9f0(&local_30,"Unrecognized Item Token: ",0x19);
            FUN_14000cb40(&local_30,param_1,0,0xffffffffffffffff);
            FUN_14014a240(&local_30);
            if (0xf < local_18) {
              FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
            }
            return 0xffff;
          }
          uVar2 = 4;
        }
      }
    }
  }
  return uVar2;
}

