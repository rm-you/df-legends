// FUN_140ced1b0 @ 140ced1b0
// callees:
//   -> EXTERNAL:0000006d CreateDirectoryA
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1405bc0e0 FUN_1405bc0e0
//   -> EXTERNAL:00000092 clear
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000b4 write
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140c8f6a0 FUN_140c8f6a0
//   -> 1405bb8b0 FUN_1405bb8b0
//   -> 1400bd590 FUN_1400bd590
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ced1b0(longlong *param_1)

{
  undefined8 *puVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined4 local_1e8 [2];
  int local_1e0 [2];
  char local_1d8 [8];
  undefined4 local_1d0 [2];
  undefined1 local_1c8 [8];
  longlong local_1c0 [2];
  basic_ostream<char,std::char_traits<char>_> local_1b0 [8];
  undefined1 local_1a8 [128];
  longlong local_128;
  basic_ios<char,std::char_traits<char>_> local_108 [96];
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined *local_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  longlong local_60;
  ulonglong local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_218;
  CreateDirectoryA("data",(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA("data/save",(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA("data/save/current",(LPSECURITY_ATTRIBUTES)0x0);
  local_58 = 0xf;
  uVar11 = 0;
  local_60 = 0;
  local_70 = 0;
  FUN_14000c780(&local_70,"data/save/current/unit-",0x17);
  local_38 = 0xf;
  local_40 = 0;
  local_50 = 0;
  FUN_14014a650((int)*param_1,&local_50);
  FUN_14000cb40(&local_70,&local_50,0,0xffffffffffffffff);
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  FUN_14000c9f0(&local_70);
  FUN_1405bc0e0(local_1c0);
  local_1c8[0] = 1;
  local_a8 = &DAT_1416acb50;
  local_a0 = 20000;
  uStack_9c = 0;
  local_98 = 0;
  local_90 = &DAT_1416992d0;
  local_88 = 80000;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),0,false);
  if (local_60 != 0) {
    uStack_9c = 0;
    local_98 = 0;
    local_88 = local_88 & 0xffffffff;
    if ((local_128 != 0) && (lVar3 = FUN_1400be490(local_1a8), lVar3 == 0)) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),2,false);
    }
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),0,false);
    lVar3 = FUN_14014d930(local_1a8);
    if (lVar3 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),0,false);
    }
  }
  local_1d8[0] = '\x01';
  local_1d8[1] = '\0';
  local_1d8[2] = '\0';
  local_1d8[3] = '\0';
  local_1c8[0] = 1;
  if ((DAT_141c513c8 < 1) || ((*DAT_141c513c0 & 4) == 0)) {
    local_1d8[0] = '\0';
    local_1d8[1] = '\0';
    local_1d8[2] = '\0';
    local_1d8[3] = '\0';
    local_1c8[0] = 0;
  }
  if (local_128 != 0) {
    std::basic_ostream<char,std::char_traits<char>_>::write(local_1b0,(char *)&DAT_1416992c8,4);
    std::basic_ostream<char,std::char_traits<char>_>::write(local_1b0,local_1d8,4);
  }
  local_1e8[0] = (undefined4)*param_1;
  FUN_1405bb7c0(local_1c8,local_1e8,4);
  lVar3 = 100;
  do {
    plVar7 = param_1 + 4;
    if (*plVar7 == 0) {
      local_1f8[0] = 0;
      FUN_1405bb7c0(local_1c8,local_1f8);
    }
    else {
      local_1f0[0] = 1;
      FUN_1405bb7c0(local_1c8,local_1f0);
      DAT_141c67038 = DAT_141c67030;
      DAT_141c67fe8 = DAT_141c67fe0;
      DAT_141c68000 = DAT_141c67ff8;
      local_1e8[0] = *(undefined4 *)(*plVar7 + 0x130);
      FUN_1405bb7c0(local_1c8,local_1e8,4);
      if ((plVar7 < DAT_141c67038) && (DAT_141c67030 <= plVar7)) {
        lVar6 = (longlong)plVar7 - (longlong)DAT_141c67030;
        if (DAT_141c67038 == DAT_141c67040) {
          FUN_14000c2d0(&DAT_141c67030,1);
        }
        if (DAT_141c67038 != (longlong *)0x0) {
          lVar6 = DAT_141c67030[lVar6 >> 3];
LAB_140ced57e:
          *DAT_141c67038 = lVar6;
        }
      }
      else {
        if (DAT_141c67038 == DAT_141c67040) {
          FUN_14000c2d0(&DAT_141c67030,1);
        }
        if (DAT_141c67038 != (longlong *)0x0) {
          lVar6 = *plVar7;
          goto LAB_140ced57e;
        }
      }
      DAT_141c67038 = DAT_141c67038 + 1;
      iVar5 = (int)(param_1[2] - param_1[1] >> 3);
      local_1e0[0] = iVar5;
      FUN_1405bb7c0(local_1c8,local_1e0);
      uVar9 = uVar11;
      if (0 < iVar5) {
        do {
          local_1d0[0] = *(undefined4 *)(*(longlong *)(param_1[1] + uVar9 * 8) + 0x1c);
          FUN_1405bb7c0(local_1c8,local_1d0,4);
          sVar2 = (**(code **)**(undefined8 **)(param_1[1] + uVar9 * 8))();
          local_1e0[0] = (int)sVar2;
          FUN_1405bb7c0(local_1c8,local_1e0);
          puVar1 = (undefined8 *)(param_1[1] + uVar9 * 8);
          if ((puVar1 < DAT_141c67fe8) && (DAT_141c67fe0 <= puVar1)) {
            lVar6 = (longlong)puVar1 - (longlong)DAT_141c67fe0;
            if (DAT_141c67fe8 == DAT_141c67ff0) {
              FUN_14000c2d0(&DAT_141c67fe0,1);
            }
            if (DAT_141c67fe8 != (undefined8 *)0x0) {
              uVar4 = DAT_141c67fe0[lVar6 >> 3];
LAB_140ced6a0:
              *DAT_141c67fe8 = uVar4;
            }
          }
          else {
            if (DAT_141c67fe8 == DAT_141c67ff0) {
              FUN_14000c2d0(&DAT_141c67fe0,1);
            }
            if (DAT_141c67fe8 != (undefined8 *)0x0) {
              uVar4 = *puVar1;
              goto LAB_140ced6a0;
            }
          }
          DAT_141c67fe8 = DAT_141c67fe8 + 1;
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)iVar5);
      }
      uVar9 = uVar11;
      uVar10 = uVar11;
      if ((longlong)DAT_141c67fe8 - (longlong)DAT_141c67fe0 >> 3 != 0) {
        do {
          (**(code **)(**(longlong **)(uVar9 + (longlong)DAT_141c67fe0) + 0x430))
                    (*(longlong **)(uVar9 + (longlong)DAT_141c67fe0),local_1c8);
          uVar8 = (int)uVar10 + 1;
          uVar9 = uVar9 + 8;
          uVar10 = (ulonglong)uVar8;
        } while ((ulonglong)(longlong)(int)uVar8 <
                 (ulonglong)((longlong)DAT_141c67fe8 - (longlong)DAT_141c67fe0 >> 3));
      }
      uVar9 = uVar11;
      uVar10 = uVar11;
      if ((longlong)DAT_141c67038 - (longlong)DAT_141c67030 >> 3 != 0) {
        do {
          FUN_140c8f6a0(*(undefined8 *)(uVar9 + (longlong)DAT_141c67030),local_1c8);
          uVar8 = (int)uVar10 + 1;
          uVar9 = uVar9 + 8;
          uVar10 = (ulonglong)uVar8;
        } while ((ulonglong)(longlong)(int)uVar8 <
                 (ulonglong)((longlong)DAT_141c67038 - (longlong)DAT_141c67030 >> 3));
      }
    }
    lVar3 = lVar3 + -1;
    param_1 = plVar7;
    if (lVar3 == 0) {
      FUN_1405bb8b0(local_1c8);
      if ((local_128 != 0) && (lVar3 = FUN_1400be490(local_1a8), lVar3 == 0)) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),2,false);
      }
      if ((local_128 != 0) && (lVar3 = FUN_1400be490(local_1a8), lVar3 == 0)) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)),2,false);
      }
      FUN_1400bd590(local_108);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_108);
      if (0xf < local_58) {
        FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
      }
      return;
    }
  } while( true );
}

