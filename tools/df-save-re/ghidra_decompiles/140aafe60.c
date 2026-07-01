// FUN_140aafe60 @ 140aafe60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ccf0 FUN_14000ccf0
//   -> 14000cd80 FUN_14000cd80
//   -> 140812580 FUN_140812580
//   -> 1400b3c20 FUN_1400b3c20
//   -> 14000c2d0 FUN_14000c2d0
//   -> 14000c390 FUN_14000c390
//   -> 1401961d0 FUN_1401961d0
//   -> 1401b3070 FUN_1401b3070
//   -> 140dfb5c4 operator_new
//   -> 1404958d0 FUN_1404958d0
//   -> 14013b270 FUN_14013b270
//   -> 1409079f0 FUN_1409079f0
//   -> 140050d90 FUN_140050d90
//   -> 140812440 FUN_140812440
//   -> 1401b6be0 FUN_1401b6be0
//   -> 140c14ef0 FUN_140c14ef0
//   -> 14001b3e0 FUN_14001b3e0
//   -> 140050410 FUN_140050410
//   -> 1400b3970 FUN_1400b3970
//   -> 140df49e0 FUN_140df49e0
//   -> 1400026e0 FUN_1400026e0
//   -> 1407d60f0 FUN_1407d60f0
//   -> 140071810 FUN_140071810
//   -> 140140ca0 FUN_140140ca0
//   -> 1400b3770 FUN_1400b3770
//   -> 1400978f0 FUN_1400978f0
//   -> 140305410 FUN_140305410
//   -> 140301700 FUN_140301700
//   -> 140143620 FUN_140143620
//   -> 140b84c70 FUN_140b84c70
//   -> 140002090 FUN_140002090
//   -> 140304820 FUN_140304820
//   -> 14004ffe0 FUN_14004ffe0
//   -> 140302600 FUN_140302600
//   -> 1403023c0 FUN_1403023c0
//   -> 1403024e0 FUN_1403024e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aafe60(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined4 local_res20 [2];
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  DAT_141c67fe8 = DAT_141c67fe0;
  DAT_141c68000 = DAT_141c67ff8;
  local_res8 = param_1;
  FUN_1405bba90(param_2,&local_res8,4);
  uVar3 = (ulonglong)(int)local_res8;
  if ((ulonglong)((longlong)DAT_141c67ff0 - (longlong)DAT_141c67fe0 >> 3) < uVar3) {
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000ccf0(&DAT_141c67fe0,uVar3);
  }
  iVar1 = (int)local_res8;
  if ((ulonglong)((longlong)DAT_141c68008 - (longlong)DAT_141c67ff8 >> 2) <
      (ulonglong)(longlong)(int)local_res8) {
    if (0x3fffffffffffffff < (ulonglong)(longlong)(int)local_res8) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000cd80(&DAT_141c67ff8);
    iVar1 = (int)local_res8;
  }
  if ((ulonglong)(DAT_141c67378 - DAT_141c67368 >> 3) < (ulonglong)(longlong)iVar1) {
    if (0x1fffffffffffffff < (ulonglong)(longlong)iVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000ccf0(&DAT_141c67368);
    iVar1 = (int)local_res8;
  }
  if (0 < iVar1) {
    local_48 = (undefined4 *)CONCAT44(local_48._4_4_,0xffffffff);
    do {
      FUN_1405bba90(param_2,local_res20,4);
      puVar2 = (undefined4 *)FUN_140812580(param_2);
      puVar2[7] = local_res20[0];
      local_40 = puVar2;
      FUN_1400b3c20(puVar2,&DAT_141c67368);
      if ((&local_40 < DAT_141c67fe8) && (DAT_141c67fe0 <= &local_40)) {
        lVar4 = (longlong)&local_40 - (longlong)DAT_141c67fe0;
        if (DAT_141c67fe8 == DAT_141c67ff0) {
          FUN_14000c2d0(&DAT_141c67fe0,1);
        }
        if (DAT_141c67fe8 != (undefined4 **)0x0) {
          *DAT_141c67fe8 = DAT_141c67fe0[lVar4 >> 3];
        }
      }
      else {
        if (DAT_141c67fe8 == DAT_141c67ff0) {
          FUN_14000c2d0(&DAT_141c67fe0,1);
        }
        if (DAT_141c67fe8 != (undefined4 **)0x0) {
          *DAT_141c67fe8 = puVar2;
        }
      }
      DAT_141c67fe8 = DAT_141c67fe8 + 1;
      if ((&local_48 < DAT_141c68000) && (DAT_141c67ff8 <= &local_48)) {
        lVar4 = (longlong)&local_48 - (longlong)DAT_141c67ff8;
        if (DAT_141c68000 == DAT_141c68008) {
          FUN_14000c390(&DAT_141c67ff8,1);
        }
        if (DAT_141c68000 != (undefined4 **)0x0) {
          *(undefined4 *)DAT_141c68000 = *(undefined4 *)((longlong)DAT_141c67ff8 + (lVar4 >> 2) * 4)
          ;
        }
      }
      else {
        if (DAT_141c68000 == DAT_141c68008) {
          FUN_14000c390(&DAT_141c67ff8,1);
        }
        if (DAT_141c68000 != (undefined4 **)0x0) {
          *(undefined4 *)DAT_141c68000 = 0xffffffff;
        }
      }
      DAT_141c68000 = (undefined4 **)((longlong)DAT_141c68000 + 4);
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    } while (0 < iVar1);
  }
  DAT_141c70660 = DAT_141c70658;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = (undefined4 *)FUN_1401961d0(param_2);
    puVar2[0x14] = local_res20[0];
    local_40 = puVar2;
    FUN_1401b3070(puVar2,&DAT_141c6fda0);
    if ((&local_40 < DAT_141c70660) && (DAT_141c70658 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141c70658;
      if (DAT_141c70660 == DAT_141c70668) {
        FUN_14000c2d0(&DAT_141c70658,1);
      }
      if (DAT_141c70660 != (undefined4 **)0x0) {
        *DAT_141c70660 = DAT_141c70658[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141c70660 == DAT_141c70668) {
        FUN_14000c2d0(&DAT_141c70658,1);
      }
      if (DAT_141c70660 != (undefined4 **)0x0) {
        *DAT_141c70660 = puVar2;
      }
    }
    DAT_141c70660 = DAT_141c70660 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141c53738 = DAT_141c53730;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x2038);
    puVar2 = (undefined4 *)FUN_1404958d0(local_48,1);
    puVar2[1] = local_res20[0];
    local_40 = puVar2;
    FUN_14013b270(puVar2,&DAT_141c53718);
    if ((&local_40 < DAT_141c53738) && (DAT_141c53730 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141c53730;
      if (DAT_141c53738 == DAT_141c53740) {
        FUN_14000c2d0(&DAT_141c53730,1);
      }
      if (DAT_141c53738 != (undefined4 **)0x0) {
        *DAT_141c53738 = DAT_141c53730[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141c53738 == DAT_141c53740) {
        FUN_14000c2d0(&DAT_141c53730,1);
      }
      if (DAT_141c53738 != (undefined4 **)0x0) {
        *DAT_141c53738 = puVar2;
      }
    }
    DAT_141c53738 = DAT_141c53738 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141c67350 = DAT_141c67348;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x68);
    puVar2 = (undefined4 *)FUN_1409079f0(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_140050d90(puVar2,&DAT_141c67090);
    if ((&local_40 < DAT_141c67350) && (DAT_141c67348 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141c67348;
      if (DAT_141c67350 == DAT_141c67358) {
        FUN_14000c2d0(&DAT_141c67348,1);
      }
      if (DAT_141c67350 != (undefined4 **)0x0) {
        *DAT_141c67350 = DAT_141c67348[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141c67350 == DAT_141c67358) {
        FUN_14000c2d0(&DAT_141c67348,1);
      }
      if (DAT_141c67350 != (undefined4 **)0x0) {
        *DAT_141c67350 = puVar2;
      }
    }
    DAT_141c67350 = DAT_141c67350 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141c68030 = DAT_141c68028;
  FUN_1405bba90(param_2,&local_res8,4);
  uVar3 = (ulonglong)(int)local_res8;
  if ((ulonglong)((longlong)DAT_141c68038 - (longlong)DAT_141c68028 >> 3) < uVar3) {
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000ccf0(&DAT_141c68028,uVar3);
  }
  iVar1 = (int)local_res8;
  if ((ulonglong)(DAT_141c68020 - DAT_141c68010 >> 3) < (ulonglong)(longlong)(int)local_res8) {
    if (0x1fffffffffffffff < (ulonglong)(longlong)(int)local_res8) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000ccf0(&DAT_141c68010);
    iVar1 = (int)local_res8;
  }
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x128);
    puVar2 = (undefined4 *)FUN_140812440(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_140050d90(puVar2,&DAT_141c68010);
    if ((&local_40 < DAT_141c68030) && (DAT_141c68028 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141c68028;
      if (DAT_141c68030 == DAT_141c68038) {
        FUN_14000c2d0(&DAT_141c68028,1);
      }
      if (DAT_141c68030 != (undefined4 **)0x0) {
        *DAT_141c68030 = DAT_141c68028[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141c68030 == DAT_141c68038) {
        FUN_14000c2d0(&DAT_141c68028,1);
      }
      if (DAT_141c68030 != (undefined4 **)0x0) {
        *DAT_141c68030 = puVar2;
      }
    }
    DAT_141c68030 = DAT_141c68030 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    local_40 = operator_new(0x24);
    FUN_1401b6be0(local_40);
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d64d58 = DAT_141d64d50;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x1d0);
    puVar2 = (undefined4 *)FUN_140c14ef0(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_14001b3e0(&DAT_141d64d38,puVar2);
    if ((&local_40 < DAT_141d64d58) && (DAT_141d64d50 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d64d50;
      if (DAT_141d64d58 == DAT_141d64d60) {
        FUN_140050410(&DAT_141d64d50);
      }
      if (DAT_141d64d58 != (undefined4 **)0x0) {
        *DAT_141d64d58 = DAT_141d64d50[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d64d58 == DAT_141d64d60) {
        FUN_140050410(&DAT_141d64d50);
      }
      if (DAT_141d64d58 != (undefined4 **)0x0) {
        *DAT_141d64d58 = puVar2;
      }
    }
    DAT_141d64d58 = DAT_141d64d58 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d64d88 = DAT_141d64d80;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(4);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_14001b3e0(&DAT_141d64d68,puVar2);
    if ((&local_40 < DAT_141d64d88) && (DAT_141d64d80 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d64d80;
      if (DAT_141d64d88 == DAT_141d64d90) {
        FUN_140050410(&DAT_141d64d80);
      }
      if (DAT_141d64d88 != (undefined4 **)0x0) {
        *DAT_141d64d88 = DAT_141d64d80[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d64d88 == DAT_141d64d90) {
        FUN_140050410(&DAT_141d64d80);
      }
      if (DAT_141d64d88 != (undefined4 **)0x0) {
        *DAT_141d64d88 = puVar2;
      }
    }
    DAT_141d64d88 = DAT_141d64d88 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d64db8 = DAT_141d64db0;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(0x28);
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_14001b3e0(&DAT_141d64d98,puVar2);
    if ((&local_40 < DAT_141d64db8) && (DAT_141d64db0 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d64db0;
      if (DAT_141d64db8 == DAT_141d64dc0) {
        FUN_140050410(&DAT_141d64db0);
      }
      if (DAT_141d64db8 != (undefined4 **)0x0) {
        *DAT_141d64db8 = DAT_141d64db0[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d64db8 == DAT_141d64dc0) {
        FUN_140050410(&DAT_141d64db0);
      }
      if (DAT_141d64db8 != (undefined4 **)0x0) {
        *DAT_141d64db8 = puVar2;
      }
    }
    DAT_141d64db8 = DAT_141d64db8 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69138 = DAT_141d69130;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(0x28);
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d69118);
    if ((&local_40 < DAT_141d69138) && (DAT_141d69130 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69130;
      if (DAT_141d69138 == DAT_141d69140) {
        FUN_140050410(&DAT_141d69130);
      }
      if (DAT_141d69138 != (undefined4 **)0x0) {
        *DAT_141d69138 = DAT_141d69130[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69138 == DAT_141d69140) {
        FUN_140050410(&DAT_141d69130);
      }
      if (DAT_141d69138 != (undefined4 **)0x0) {
        *DAT_141d69138 = puVar2;
      }
    }
    DAT_141d69138 = DAT_141d69138 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69168 = DAT_141d69160;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0xa8);
    puVar2 = (undefined4 *)FUN_140df49e0(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d69148);
    if ((&local_40 < DAT_141d69168) && (DAT_141d69160 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69160;
      if (DAT_141d69168 == DAT_141d69170) {
        FUN_140050410(&DAT_141d69160);
      }
      if (DAT_141d69168 != (undefined4 **)0x0) {
        *DAT_141d69168 = DAT_141d69160[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69168 == DAT_141d69170) {
        FUN_140050410(&DAT_141d69160);
      }
      if (DAT_141d69168 != (undefined4 **)0x0) {
        *DAT_141d69168 = puVar2;
      }
    }
    DAT_141d69168 = DAT_141d69168 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69198 = DAT_141d69190;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(0xe8);
    local_48 = puVar2;
    FUN_1400026e0(puVar2 + 2);
    *(undefined8 *)(puVar2 + 0x2e) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x32) = 0;
    *(undefined8 *)(puVar2 + 0x34) = 0;
    *(undefined8 *)(puVar2 + 0x36) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d69178);
    if ((&local_40 < DAT_141d69198) && (DAT_141d69190 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69190;
      if (DAT_141d69198 == DAT_141d691a0) {
        FUN_140050410(&DAT_141d69190);
      }
      if (DAT_141d69198 != (undefined4 **)0x0) {
        *DAT_141d69198 = DAT_141d69190[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69198 == DAT_141d691a0) {
        FUN_140050410(&DAT_141d69190);
      }
      if (DAT_141d69198 != (undefined4 **)0x0) {
        *DAT_141d69198 = puVar2;
      }
    }
    DAT_141d69198 = DAT_141d69198 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d691c8 = DAT_141d691c0;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x118);
    puVar2 = (undefined4 *)FUN_1407d60f0(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_140071810(puVar2,&DAT_141d691a8);
    if ((&local_40 < DAT_141d691c8) && (DAT_141d691c0 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d691c0;
      if (DAT_141d691c8 == DAT_141d691d0) {
        FUN_14000c2d0(&DAT_141d691c0,1);
      }
      if (DAT_141d691c8 != (undefined4 **)0x0) {
        *DAT_141d691c8 = DAT_141d691c0[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d691c8 == DAT_141d691d0) {
        FUN_14000c2d0(&DAT_141d691c0,1);
      }
      if (DAT_141d691c8 != (undefined4 **)0x0) {
        *DAT_141d691c8 = puVar2;
      }
    }
    DAT_141d691c8 = DAT_141d691c8 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d691f8 = DAT_141d691f0;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x118);
    puVar2 = (undefined4 *)FUN_140140ca0(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3770(puVar2,&DAT_141d691d8);
    if ((&local_40 < DAT_141d691f8) && (DAT_141d691f0 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d691f0;
      if (DAT_141d691f8 == DAT_141d69200) {
        FUN_140050410(&DAT_141d691f0);
      }
      if (DAT_141d691f8 != (undefined4 **)0x0) {
        *DAT_141d691f8 = DAT_141d691f0[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d691f8 == DAT_141d69200) {
        FUN_140050410(&DAT_141d691f0);
      }
      if (DAT_141d691f8 != (undefined4 **)0x0) {
        *DAT_141d691f8 = puVar2;
      }
    }
    DAT_141d691f8 = DAT_141d691f8 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69240 = DAT_141d69238;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(0x40);
    puVar2[0xd] = 0x8ad08ad0;
    *(undefined2 *)(puVar2 + 0xe) = 0x8ad0;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d69208);
    if ((&local_40 < DAT_141d69240) && (DAT_141d69238 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69238;
      if (DAT_141d69240 == DAT_141d69248) {
        FUN_140050410(&DAT_141d69238);
      }
      if (DAT_141d69240 != (undefined4 **)0x0) {
        *DAT_141d69240 = DAT_141d69238[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69240 == DAT_141d69248) {
        FUN_140050410(&DAT_141d69238);
      }
      if (DAT_141d69240 != (undefined4 **)0x0) {
        *DAT_141d69240 = puVar2;
      }
    }
    DAT_141d69240 = DAT_141d69240 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69270 = DAT_141d69268;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    local_48 = operator_new(0x148);
    puVar2 = (undefined4 *)FUN_1400978f0(local_48,1);
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d69250);
    if ((&local_40 < DAT_141d69270) && (DAT_141d69268 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69268;
      if (DAT_141d69270 == DAT_141d69278) {
        FUN_140050410(&DAT_141d69268);
      }
      if (DAT_141d69270 != (undefined4 **)0x0) {
        *DAT_141d69270 = DAT_141d69268[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69270 == DAT_141d69278) {
        FUN_140050410(&DAT_141d69268);
      }
      if (DAT_141d69270 != (undefined4 **)0x0) {
        *DAT_141d69270 = puVar2;
      }
    }
    DAT_141d69270 = DAT_141d69270 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d692a0 = DAT_141d69298;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(200);
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined8 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x22) = 0;
    *(undefined8 *)(puVar2 + 0x24) = 0;
    *(undefined8 *)(puVar2 + 0x26) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x2a) = 0;
    *(undefined8 *)(puVar2 + 4) = 0xffffffffffffffff;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3770(puVar2,&DAT_141d69280);
    if ((&local_40 < DAT_141d692a0) && (DAT_141d69298 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69298;
      if (DAT_141d692a0 == DAT_141d692a8) {
        FUN_140050410(&DAT_141d69298);
      }
      if (DAT_141d692a0 != (undefined4 **)0x0) {
        *DAT_141d692a0 = DAT_141d69298[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d692a0 == DAT_141d692a8) {
        FUN_140050410(&DAT_141d69298);
      }
      if (DAT_141d692a0 != (undefined4 **)0x0) {
        *DAT_141d692a0 = puVar2;
      }
    }
    DAT_141d692a0 = DAT_141d692a0 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d692d0 = DAT_141d692c8;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(0x798);
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d692b0);
    if ((&local_40 < DAT_141d692d0) && (DAT_141d692c8 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d692c8;
      if (DAT_141d692d0 == DAT_141d692d8) {
        FUN_140050410(&DAT_141d692c8);
      }
      if (DAT_141d692d0 != (undefined4 **)0x0) {
        *DAT_141d692d0 = DAT_141d692c8[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d692d0 == DAT_141d692d8) {
        FUN_140050410(&DAT_141d692c8);
      }
      if (DAT_141d692d0 != (undefined4 **)0x0) {
        *DAT_141d692d0 = puVar2;
      }
    }
    DAT_141d692d0 = DAT_141d692d0 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69300 = DAT_141d692f8;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = (undefined4 *)FUN_140305410();
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_1400b3970(puVar2,&DAT_141d692e0);
    if ((&local_40 < DAT_141d69300) && (DAT_141d692f8 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d692f8;
      if (DAT_141d69300 == DAT_141d69308) {
        FUN_140050410(&DAT_141d692f8);
      }
      if (DAT_141d69300 != (undefined4 **)0x0) {
        *DAT_141d69300 = DAT_141d692f8[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69300 == DAT_141d69308) {
        FUN_140050410(&DAT_141d692f8);
      }
      if (DAT_141d69300 != (undefined4 **)0x0) {
        *DAT_141d69300 = puVar2;
      }
    }
    DAT_141d69300 = DAT_141d69300 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  DAT_141d69330 = DAT_141d69328;
  FUN_1405bba90(param_2,&local_res8,4);
  iVar1 = (int)local_res8;
  while (0 < iVar1) {
    FUN_1405bba90(param_2,local_res20,4);
    puVar2 = operator_new(0x50);
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *puVar2 = local_res20[0];
    local_40 = puVar2;
    FUN_140071810(puVar2,&DAT_141d69310);
    if ((&local_40 < DAT_141d69330) && (DAT_141d69328 <= &local_40)) {
      lVar4 = (longlong)&local_40 - (longlong)DAT_141d69328;
      if (DAT_141d69330 == DAT_141d69338) {
        FUN_14000c2d0(&DAT_141d69328,1);
      }
      if (DAT_141d69330 != (undefined4 **)0x0) {
        *DAT_141d69330 = DAT_141d69328[lVar4 >> 3];
      }
    }
    else {
      if (DAT_141d69330 == DAT_141d69338) {
        FUN_14000c2d0(&DAT_141d69328,1);
      }
      if (DAT_141d69330 != (undefined4 **)0x0) {
        *DAT_141d69330 = puVar2;
      }
    }
    DAT_141d69330 = DAT_141d69330 + 1;
    iVar1 = (int)local_res8 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
  }
  if (0x5cb < param_3) {
    DAT_141d69360 = DAT_141d69358;
    FUN_1405bba90(param_2,&local_res8,4);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_1405bba90(param_2,local_res20,4);
      puVar2 = operator_new(0x100);
      local_48 = puVar2;
      FUN_1400026e0(puVar2 + 2);
      *(undefined8 *)(puVar2 + 0x24) = 0;
      *(undefined8 *)(puVar2 + 0x26) = 0;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x2e) = 0;
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined8 *)(puVar2 + 0x32) = 0;
      *(undefined8 *)(puVar2 + 0x3a) = 0;
      *(undefined8 *)(puVar2 + 0x3c) = 0;
      *(undefined8 *)(puVar2 + 0x3e) = 0;
      *puVar2 = local_res20[0];
      local_40 = puVar2;
      FUN_1400b3970(puVar2,&DAT_141d69340);
      if ((&local_40 < DAT_141d69360) && (DAT_141d69358 <= &local_40)) {
        lVar4 = (longlong)&local_40 - (longlong)DAT_141d69358;
        if (DAT_141d69360 == DAT_141d69368) {
          FUN_140050410(&DAT_141d69358);
        }
        if (DAT_141d69360 != (undefined4 **)0x0) {
          *DAT_141d69360 = DAT_141d69358[lVar4 >> 3];
        }
      }
      else {
        if (DAT_141d69360 == DAT_141d69368) {
          FUN_140050410(&DAT_141d69358);
        }
        if (DAT_141d69360 != (undefined4 **)0x0) {
          *DAT_141d69360 = puVar2;
        }
      }
      DAT_141d69360 = DAT_141d69360 + 1;
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
    DAT_141d69390 = DAT_141d69388;
    FUN_1405bba90(param_2,&local_res8,4);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_1405bba90(param_2,local_res20,4);
      puVar2 = (undefined4 *)FUN_140301700();
      *puVar2 = local_res20[0];
      local_40 = puVar2;
      FUN_1400b3970(puVar2,&DAT_141d69370);
      if ((&local_40 < DAT_141d69390) && (DAT_141d69388 <= &local_40)) {
        lVar4 = (longlong)&local_40 - (longlong)DAT_141d69388;
        if (DAT_141d69390 == DAT_141d69398) {
          FUN_140050410(&DAT_141d69388);
        }
        if (DAT_141d69390 != (undefined4 **)0x0) {
          *DAT_141d69390 = DAT_141d69388[lVar4 >> 3];
        }
      }
      else {
        if (DAT_141d69390 == DAT_141d69398) {
          FUN_140050410(&DAT_141d69388);
        }
        if (DAT_141d69390 != (undefined4 **)0x0) {
          *DAT_141d69390 = puVar2;
        }
      }
      DAT_141d69390 = DAT_141d69390 + 1;
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
    DAT_141d693c0 = DAT_141d693b8;
    FUN_1405bba90(param_2,&local_res8,4);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_1405bba90(param_2,local_res20,4);
      local_48 = operator_new(0x178);
      puVar2 = (undefined4 *)FUN_140143620(local_48,1);
      *puVar2 = local_res20[0];
      local_40 = puVar2;
      FUN_1400b3970(puVar2,&DAT_141d693a0);
      if ((&local_40 < DAT_141d693c0) && (DAT_141d693b8 <= &local_40)) {
        lVar4 = (longlong)&local_40 - (longlong)DAT_141d693b8;
        if (DAT_141d693c0 == DAT_141d693c8) {
          FUN_140050410(&DAT_141d693b8);
        }
        if (DAT_141d693c0 != (undefined4 **)0x0) {
          *DAT_141d693c0 = DAT_141d693b8[lVar4 >> 3];
        }
      }
      else {
        if (DAT_141d693c0 == DAT_141d693c8) {
          FUN_140050410(&DAT_141d693b8);
        }
        if (DAT_141d693c0 != (undefined4 **)0x0) {
          *DAT_141d693c0 = puVar2;
        }
      }
      DAT_141d693c0 = DAT_141d693c0 + 1;
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
  }
  if (0x5cc < param_3) {
    DAT_141d693f0 = DAT_141d693e8;
    FUN_1405bba90(param_2,&local_res8,4);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_1405bba90(param_2,local_res20,4);
      puVar2 = operator_new(0x758);
      *(undefined8 *)(puVar2 + 0x1e) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      *(undefined8 *)(puVar2 + 0x22) = 0;
      *(undefined8 *)(puVar2 + 0x24) = 0;
      *(undefined8 *)(puVar2 + 0x26) = 0;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      local_48 = puVar2;
      FUN_140b84c70(puVar2 + 0x2a);
      *puVar2 = local_res20[0];
      local_40 = puVar2;
      FUN_1400b3970(puVar2,&DAT_141d693d0);
      if ((&local_40 < DAT_141d693f0) && (DAT_141d693e8 <= &local_40)) {
        lVar4 = (longlong)&local_40 - (longlong)DAT_141d693e8;
        if (DAT_141d693f0 == DAT_141d693f8) {
          FUN_140050410(&DAT_141d693e8);
        }
        if (DAT_141d693f0 != (undefined4 **)0x0) {
          *DAT_141d693f0 = DAT_141d693e8[lVar4 >> 3];
        }
      }
      else {
        if (DAT_141d693f0 == DAT_141d693f8) {
          FUN_140050410(&DAT_141d693e8);
        }
        if (DAT_141d693f0 != (undefined4 **)0x0) {
          *DAT_141d693f0 = puVar2;
        }
      }
      DAT_141d693f0 = DAT_141d693f0 + 1;
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
    DAT_141d69420 = DAT_141d69418;
    FUN_1405bba90(param_2,&local_res8,4);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_1405bba90(param_2,local_res20,4);
      puVar2 = operator_new(0x40);
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      *puVar2 = local_res20[0];
      local_40 = puVar2;
      FUN_1400b3970(puVar2,&DAT_141d69400);
      if ((&local_40 < DAT_141d69420) && (DAT_141d69418 <= &local_40)) {
        lVar4 = (longlong)&local_40 - (longlong)DAT_141d69418;
        if (DAT_141d69420 == DAT_141d69428) {
          FUN_140050410(&DAT_141d69418);
        }
        if (DAT_141d69420 != (undefined4 **)0x0) {
          *DAT_141d69420 = DAT_141d69418[lVar4 >> 3];
        }
      }
      else {
        if (DAT_141d69420 == DAT_141d69428) {
          FUN_140050410(&DAT_141d69418);
        }
        if (DAT_141d69420 != (undefined4 **)0x0) {
          *DAT_141d69420 = puVar2;
        }
      }
      DAT_141d69420 = DAT_141d69420 + 1;
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
  }
  if (0x5d4 < param_3) {
    _DAT_141d69450 = DAT_141d69448;
    FUN_140002090(param_2,&local_res8);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_140002090(param_2,local_res20);
      local_40 = (undefined4 *)FUN_140304820();
      *local_40 = local_res20[0];
      FUN_1400b3770(local_40,&DAT_141d69430);
      FUN_14004ffe0(&DAT_141d69448,&local_40);
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
  }
  if (0x622 < param_3) {
    _DAT_141d69480 = DAT_141d69478;
    FUN_140002090(param_2,&local_res8);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_140002090(param_2,local_res20);
      local_40 = (undefined4 *)FUN_140302600();
      *local_40 = local_res20[0];
      FUN_1400b3970(local_40,&DAT_141d69460);
      FUN_14004ffe0(&DAT_141d69478,&local_40);
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
  }
  if (0x67d < param_3) {
    _DAT_141d694b0 = DAT_141d694a8;
    FUN_140002090(param_2,&local_res8);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_140002090(param_2,local_res20);
      local_40 = (undefined4 *)FUN_1403023c0();
      *local_40 = local_res20[0];
      FUN_1400b3970(local_40,&DAT_141d69490);
      FUN_14004ffe0(&DAT_141d694a8,&local_40);
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
    _DAT_141d694e0 = DAT_141d694d8;
    FUN_140002090(param_2,&local_res8);
    iVar1 = (int)local_res8;
    while (0 < iVar1) {
      FUN_140002090(param_2,local_res20);
      local_40 = (undefined4 *)FUN_1403024e0();
      *local_40 = local_res20[0];
      FUN_1400b3970(local_40,&DAT_141d694c0);
      FUN_14004ffe0(&DAT_141d694d8,&local_40);
      iVar1 = (int)local_res8 + -1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    }
  }
  return;
}

