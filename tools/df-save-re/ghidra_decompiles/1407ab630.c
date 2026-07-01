// FUN_1407ab630 @ 1407ab630
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 14000bd10 FUN_14000bd10
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cd80 FUN_14000cd80
//   -> 140050b50 FUN_140050b50
//   -> 140002020 FUN_140002020
//   -> 140dfb5c4 operator_new
//   -> 1406f7be0 FUN_1406f7be0
//   -> 140141fe0 FUN_140141fe0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140002250 FUN_140002250
//   -> 1406f9750 FUN_1406f9750
//   -> 140002a30 FUN_140002a30


void FUN_1407ab630(ulonglong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res18 [2];
  int local_res20 [2];
  int local_68 [2];
  ulonglong *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  longlong local_40;
  
  local_58 = 0xfffffffffffffffe;
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_68,4);
  FUN_14000b9d0(param_1,(longlong)local_68[0]);
  puVar6 = (undefined8 *)*param_1;
  uVar10 = 0;
  uVar7 = (param_1[1] - (longlong)puVar6) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar6) {
    uVar7 = uVar10;
  }
  if (uVar7 != 0) {
    do {
      FUN_1405bba90(param_2,&local_60,4);
      *puVar6 = *(undefined8 *)(DAT_141d779c0 + (longlong)(int)local_60 * 8);
      puVar6 = puVar6 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  FUN_1405bba90(param_2,param_1 + 3,4);
  if (param_3 < 0x5d7) {
    local_50 = (undefined4 *)0x0;
    puStack_48 = (undefined4 *)0x0;
    local_40 = 0;
    FUN_1405bba90(param_2,&local_60,4);
    FUN_14000bd10(&local_50,(longlong)(int)local_60);
    puVar4 = puStack_48;
    puVar3 = local_50;
    for (puVar9 = local_50; puVar9 < puVar4; puVar9 = puVar9 + 1) {
      FUN_1405bba90(param_2,puVar9,4);
    }
    uVar7 = (longlong)puVar4 - (longlong)puVar3 >> 2;
    if (uVar7 != 0) {
      local_60 = param_1 + 4;
      if ((ulonglong)((longlong)(param_1[6] - *local_60) >> 2) < uVar7) {
        if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        FUN_14000cd80();
      }
      puVar2 = local_60;
      uVar10 = 0;
      uVar7 = ((longlong)puVar4 - (longlong)puVar3) + 3U >> 2;
      if (puVar4 < puVar3) {
        uVar7 = uVar10;
      }
      puVar9 = puVar3;
      if (uVar7 != 0) {
        do {
          FUN_140050b50(*puVar9,puVar2);
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 < uVar7);
      }
    }
    param_3 = local_res18[0];
    if (puVar3 != (undefined4 *)0x0) {
      FUN_140002020(puVar3,local_40 - (longlong)puVar3 >> 2,4);
      param_3 = local_res18[0];
    }
  }
  else {
    FUN_1405bba90(param_2,&local_60,4);
    FUN_14000bd10(param_1 + 4,(longlong)(int)local_60);
    uVar7 = param_1[5];
    for (uVar10 = param_1[4]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
      FUN_1405bba90(param_2,uVar10,4);
    }
  }
  FUN_1405bba90(param_2,&local_60,4);
  FUN_14000bd10(param_1 + 7,(longlong)(int)local_60);
  uVar7 = param_1[8];
  for (uVar10 = param_1[7]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
    FUN_1405bba90(param_2,uVar10,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 10,(longlong)local_res20[0]);
  puVar1 = (undefined8 *)param_1[0xb];
  for (puVar6 = (undefined8 *)param_1[10]; puVar6 < puVar1; puVar6 = puVar6 + 1) {
    local_60 = operator_new(0x40);
    *local_60 = 0xffffffffffffffff;
    *(undefined4 *)(local_60 + 1) = 0xffffffff;
    *(undefined8 *)((longlong)local_60 + 0xc) = 0;
    *(undefined4 *)((longlong)local_60 + 0x14) = 0;
    local_60[3] = 0xffffffffffffffff;
    local_60[4] = 0xffffffffffffffff;
    local_60[5] = 0xffffffffffffffff;
    local_60[6] = 0xffffffffffffffff;
    *(undefined4 *)(local_60 + 7) = 0x8ad08ad0;
    *(undefined2 *)((longlong)local_60 + 0x3c) = 0x8ad0;
    *puVar6 = local_60;
    FUN_1406f7be0(local_60,param_2,param_3);
  }
  FUN_140141fe0(param_1 + 0xd,param_2);
  if ((param_3 < 0x6b2) &&
     (iVar8 = (int)((longlong)(param_1[0xe] - param_1[0xd]) >> 3) + -1, -1 < iVar8)) {
    lVar11 = (longlong)iVar8 * 8;
    lVar12 = lVar11;
    do {
      if (0x21 < *(uint *)((longlong)*(void **)(lVar12 + param_1[0xd]) + 0x24)) {
        free(*(void **)(lVar12 + param_1[0xd]));
        pvVar5 = (void *)((longlong)(param_1[0xd] + lVar11) + 8);
        memmove((void *)(param_1[0xd] + lVar11),pvVar5,param_1[0xe] - (longlong)pvVar5);
        param_1[0xe] = param_1[0xe] - 8;
      }
      lVar11 = lVar11 + -8;
      lVar12 = lVar12 + -8;
      iVar8 = iVar8 + -1;
      param_3 = local_res18[0];
    } while (-1 < iVar8);
  }
  FUN_1405bba90(param_2,&local_60,4);
  FUN_14000bd10(param_1 + 0x10,(longlong)(int)local_60);
  uVar7 = param_1[0x11];
  for (uVar10 = param_1[0x10]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
    FUN_1405bba90(param_2,uVar10,4);
  }
  FUN_1405bba90(param_2,&local_60,4);
  FUN_14000bd10(param_1 + 0x13,(longlong)(int)local_60);
  uVar7 = param_1[0x14];
  for (uVar10 = param_1[0x13]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
    FUN_1405bba90(param_2,uVar10,4);
  }
  FUN_140002250(param_2,param_1 + 0x16);
  FUN_140002250(param_2,param_1 + 0x19);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0x1c);
  puVar1 = (undefined8 *)param_1[0x1d];
  for (puVar6 = (undefined8 *)param_1[0x1c]; puVar6 < puVar1; puVar6 = puVar6 + 1) {
    pvVar5 = operator_new(0x58);
    *(undefined8 *)((longlong)pvVar5 + 8) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x18) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x20) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x28) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x30) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x38) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x40) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x48) = 0;
    *(undefined4 *)((longlong)pvVar5 + 4) = 0;
    local_60 = (ulonglong *)((longlong)pvVar5 + 0x50);
    *(undefined4 *)local_60 = 0;
    *puVar6 = pvVar5;
    FUN_1405bba90(param_2,pvVar5,4);
    FUN_1405bba90(param_2,(undefined4 *)((longlong)pvVar5 + 4),4);
    FUN_140002250(param_2,(undefined8 *)((longlong)pvVar5 + 8));
    FUN_140002250(param_2,(undefined8 *)((longlong)pvVar5 + 0x20));
    FUN_140002250(param_2);
    param_3 = local_res18[0];
    if (0x5cf < local_res18[0]) {
      FUN_1405bba90(param_2,local_60,4);
    }
  }
  if (0x5cb < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x1f,(longlong)local_res18[0]);
    uVar7 = param_1[0x20];
    for (uVar10 = param_1[0x1f]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
      FUN_1405bba90(param_2,uVar10,4);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x22,(longlong)local_res18[0]);
    uVar7 = param_1[0x23];
    for (uVar10 = param_1[0x22]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
      FUN_1405bba90(param_2,uVar10,4);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x25,(longlong)local_res18[0]);
    uVar7 = param_1[0x26];
    for (uVar10 = param_1[0x25]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
      FUN_1405bba90(param_2,uVar10,4);
    }
  }
  if (0x5cf < param_3) {
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] != '\0') {
      puVar6 = operator_new(0x54);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0xffffffffffffffff;
      puVar6[8] = 0xffffffffffffffff;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      param_1[0x28] = (ulonglong)puVar6;
      FUN_1406f9750(puVar6,param_2);
    }
  }
  if (0x621 < param_3) {
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] != '\0') {
      puVar6 = operator_new(0x18);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      param_1[0x29] = (ulonglong)puVar6;
      FUN_140002250(param_2,puVar6);
    }
  }
  if (0x5f9 < param_3) {
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] != '\0') {
      puVar6 = operator_new(0x18);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      param_1[0x2a] = (ulonglong)puVar6;
      FUN_140002a30(puVar6,param_2);
    }
  }
  if (0x6ac < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x2b,(longlong)local_res18[0]);
    uVar7 = param_1[0x2c];
    for (uVar10 = param_1[0x2b]; uVar10 < uVar7; uVar10 = uVar10 + 4) {
      FUN_1405bba90(param_2,uVar10,4);
    }
  }
  return;
}

