// FUN_140910cc0 @ 140910cc0
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000c460 FUN_14000c460
//   -> 14000be20 FUN_14000be20
//   -> 14000d7e0 FUN_14000d7e0
//   -> 140051f10 FUN_140051f10
//   -> 1400b29f0 FUN_1400b29f0
//   -> 14000d840 FUN_14000d840
//   -> 140dfb5c4 operator_new
//   -> 140364df0 FUN_140364df0
//   -> 140050070 FUN_140050070
//   -> 140002620 FUN_140002620


void FUN_140910cc0(longlong param_1,undefined2 param_2,undefined2 param_3,undefined8 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 uVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  short *local_res20;
  undefined8 uVar15;
  longlong local_60;
  undefined2 *puStack_58;
  undefined8 local_50;
  longlong local_48;
  undefined2 *puStack_40;
  undefined8 local_38;
  
  uVar15 = 0xfffffffffffffffe;
  local_48 = 0;
  puStack_40 = (undefined2 *)0x0;
  local_38 = 0;
  local_60 = 0;
  puStack_58 = (undefined2 *)0x0;
  local_50 = 0;
  uVar6 = FUN_1409fc0c0();
  if ((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) / 0x1999999a
      != 0) goto switchD_140910da3_default;
  uVar6 = FUN_1409fc0c0();
  uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0xaaaaaab;
  switch(uVar6) {
  case 0:
    FUN_14000c460(&local_48,1);
    if (puStack_40 != (undefined2 *)0x0) {
      *puStack_40 = 0;
    }
    puStack_40 = puStack_40 + 1;
    uVar6 = FUN_1409fc0c0();
    uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x1999999a;
    if (uVar6 == 0) {
switchD_140910f95_caseD_0:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 0;
      }
      puStack_58 = puStack_58 + 1;
    }
    else {
      if (uVar6 == 1) goto LAB_140910e89;
      uVar6 = uVar6 - 2;
      if (uVar6 == 0) goto switchD_140910f95_caseD_1;
LAB_140910e07:
      if (uVar6 == 1) {
        FUN_14000c460(&local_60,1);
        if (puStack_58 != (undefined2 *)0x0) {
          *puStack_58 = 5;
        }
        puStack_58 = puStack_58 + 1;
      }
      else if (uVar6 == 2) goto switchD_140910f95_caseD_7;
    }
    break;
  case 1:
    FUN_14000c460(&local_48,1);
    if (puStack_40 != (undefined2 *)0x0) {
      *puStack_40 = 1;
    }
    puStack_40 = puStack_40 + 1;
    uVar6 = FUN_1409fc0c0();
    uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x2aaaaaab;
    if (uVar6 == 0) goto switchD_140910f95_caseD_0;
    if (uVar6 == 1) goto switchD_140910f95_caseD_1;
    if (uVar6 == 2) {
      FUN_14000c460(&local_60,1);
      puVar9 = (undefined2 *)0x0;
      if (puStack_58 == (undefined2 *)0x0) goto LAB_140910e2c;
      *puStack_58 = 0xffff;
      puStack_58 = puStack_58 + 1;
    }
    break;
  case 2:
    FUN_14000c460(&local_48,1);
    if (puStack_40 != (undefined2 *)0x0) {
      *puStack_40 = 2;
    }
    puStack_40 = puStack_40 + 1;
    uVar6 = FUN_1409fc0c0();
    switch(uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1c) {
    case 0:
      goto switchD_140910f95_caseD_0;
    case 1:
switchD_140910f95_caseD_1:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 2;
      }
      puStack_58 = puStack_58 + 1;
      break;
    case 2:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 3;
      }
      puStack_58 = puStack_58 + 1;
      break;
    case 3:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 4;
      }
      puStack_58 = puStack_58 + 1;
      break;
    case 4:
switchD_140910f95_caseD_4:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 6;
      }
      puStack_58 = puStack_58 + 1;
      break;
    case 5:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 10;
      }
      puStack_58 = puStack_58 + 1;
      break;
    case 6:
switchD_140910f95_caseD_6:
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 0xc;
      }
      puStack_58 = puStack_58 + 1;
      break;
    case 7:
switchD_140910f95_caseD_7:
      FUN_14000c460(&local_60,1);
      puVar9 = puStack_58;
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 0xffff;
      }
LAB_140910e2c:
      puStack_58 = puVar9 + 1;
    }
    break;
  case 3:
    FUN_14000c460(&local_48,1);
    if (puStack_40 != (undefined2 *)0x0) {
      *puStack_40 = 3;
    }
    puStack_40 = puStack_40 + 1;
    uVar6 = FUN_1409fc0c0();
    uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x1999999a;
    if (uVar6 == 0) goto switchD_140910f95_caseD_0;
    if (uVar6 == 1) goto switchD_140910f95_caseD_4;
    if (uVar6 == 2) {
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 0xb;
      }
      puStack_58 = puStack_58 + 1;
    }
    else {
      if (uVar6 == 3) goto switchD_140910f95_caseD_6;
      if (uVar6 == 4) {
        FUN_14000c460(&local_60,1);
        puVar9 = (undefined2 *)0x0;
        if (puStack_58 == (undefined2 *)0x0) goto LAB_140910e2c;
        *puStack_58 = 0xffff;
        puStack_58 = puStack_58 + 1;
      }
    }
    break;
  case 4:
    FUN_14000c460(&local_48,1);
    if (puStack_40 != (undefined2 *)0x0) {
      *puStack_40 = 4;
    }
    puStack_40 = puStack_40 + 1;
    uVar6 = FUN_1409fc0c0();
    uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x2aaaaaab;
    if (uVar6 != 0) goto LAB_140910e07;
LAB_140910e89:
    FUN_14000c460(&local_60,1);
    if (puStack_58 != (undefined2 *)0x0) {
      *puStack_58 = 1;
    }
    puStack_58 = puStack_58 + 1;
    break;
  case 5:
    FUN_14000c460(&local_48,1);
    if (puStack_40 != (undefined2 *)0x0) {
      *puStack_40 = 5;
    }
    puStack_40 = puStack_40 + 1;
    uVar6 = FUN_1409fc0c0();
    uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1d;
    if (uVar6 == 0) {
      FUN_14000c460(&local_60,1);
      if (puStack_58 != (undefined2 *)0x0) {
        *puStack_58 = 0;
      }
      puStack_58 = puStack_58 + 1;
    }
    else {
      if (uVar6 == 1) {
        uVar11 = 6;
      }
      else {
        if (uVar6 != 2) {
          if (uVar6 == 3) {
            local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
            FUN_14000be20(&local_60,&local_res20,1,param_4,uVar15);
          }
          break;
        }
        uVar11 = 0xc;
      }
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      FUN_14000be20(&local_60,&local_res20,0,param_4,uVar15);
    }
    break;
  case 6:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,6);
    FUN_14000be20(&local_48,&local_res20,uVar6,param_4,uVar15);
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0;
LAB_1409112d2:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
    }
    else {
      if (iVar7 == 1) {
        uVar11 = 2;
        goto LAB_1409112d2;
      }
      if (iVar7 == 2) {
        uVar11 = 3;
        goto LAB_1409112d2;
      }
      if (iVar7 == 3) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,4);
      }
      else {
        if (iVar7 != 4) break;
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
      }
    }
    FUN_14000be20(&local_60,&local_res20);
    break;
  case 7:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,7);
    FUN_14000be20(&local_48,&local_res20,uVar6,param_4,uVar15);
    iVar7 = FUN_14000d7e0(4);
    if (iVar7 == 0) {
switchD_140911462_caseD_0:
      uVar11 = 0;
LAB_140911370:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      goto LAB_140911497;
    }
    if (iVar7 == 1) goto switchD_140911462_caseD_5;
    if (iVar7 == 2) goto switchD_140911462_caseD_8;
    if (iVar7 == 3) goto switchD_140911462_caseD_9;
    break;
  case 8:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,8);
    FUN_14000be20(&local_48,&local_res20,uVar6,param_4,uVar15);
    uVar8 = FUN_14000d7e0(10);
    switch(uVar8) {
    case 0:
      goto switchD_140911462_caseD_0;
    case 1:
switchD_140911462_caseD_1:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
      break;
    case 2:
switchD_140911462_caseD_2:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
      break;
    case 3:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,3);
      break;
    case 4:
switchD_140911462_caseD_4:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,5);
      FUN_14000be20(&local_60,&local_res20);
      goto switchD_140910da3_default;
    case 5:
switchD_140911462_caseD_5:
      uVar11 = 6;
      goto LAB_140911326;
    case 6:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,7);
      break;
    case 7:
switchD_14091141e_caseD_4:
      uVar11 = 0xb;
      goto LAB_140911326;
    case 8:
switchD_140911462_caseD_8:
      uVar11 = 0xc;
LAB_140911326:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      break;
    case 9:
switchD_140911462_caseD_9:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
      break;
    default:
      goto switchD_140910da3_default;
    }
LAB_140911497:
    FUN_14000be20(&local_60,&local_res20);
    break;
  case 9:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,9);
    FUN_14000be20(&local_48,&local_res20,uVar6,param_4,uVar15);
    uVar8 = FUN_14000d7e0(7);
    switch(uVar8) {
    case 0:
      goto switchD_140911462_caseD_0;
    case 1:
      goto switchD_140911462_caseD_2;
    case 2:
switchD_140911462_caseD_3:
      uVar11 = 3;
      goto LAB_140911370;
    case 3:
      uVar11 = 4;
      goto LAB_140911326;
    case 4:
      goto switchD_140911462_caseD_5;
    case 5:
      goto switchD_140911462_caseD_8;
    case 6:
      goto switchD_140911462_caseD_9;
    }
    break;
  case 10:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,10);
    FUN_14000be20(&local_48,&local_res20,uVar6,param_4,uVar15);
    uVar8 = FUN_14000d7e0(6);
    switch(uVar8) {
    case 0:
      goto switchD_140911462_caseD_1;
    case 1:
      goto switchD_140911462_caseD_2;
    case 2:
      goto switchD_140911462_caseD_4;
    case 3:
switchD_140911462_caseD_6:
      uVar11 = 7;
      goto LAB_140911370;
    case 4:
      goto switchD_14091141e_caseD_4;
    case 5:
      goto switchD_140911462_caseD_9;
    }
    break;
  case 0xb:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xb);
    FUN_14000be20(&local_48,&local_res20,uVar6,param_4,uVar15);
    uVar8 = FUN_14000d7e0(10);
    switch(uVar8) {
    case 0:
      goto switchD_140911462_caseD_0;
    case 1:
      goto switchD_140911462_caseD_1;
    case 2:
      goto switchD_140911462_caseD_2;
    case 3:
      goto switchD_140911462_caseD_3;
    case 4:
      goto switchD_140911462_caseD_4;
    case 5:
      goto switchD_140911462_caseD_5;
    case 6:
      goto switchD_140911462_caseD_6;
    case 7:
      uVar11 = 0xb;
      goto LAB_140911370;
    case 8:
      goto switchD_140911462_caseD_8;
    case 9:
      goto switchD_140911462_caseD_9;
    }
  }
switchD_140910da3_default:
  iVar7 = FUN_14000d7e0(5);
  if (iVar7 != 0) goto switchD_1409114de_default;
  uVar8 = FUN_14000d7e0(0xf);
  switch(uVar8) {
  case 0:
    uVar11 = 0xc;
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xc);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(8);
    switch(uVar8) {
    case 0:
switchD_14091178e_caseD_0:
      uVar11 = 0;
      break;
    case 1:
switchD_14091170e_caseD_1:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
      goto LAB_1409117e8;
    case 2:
switchD_14091178e_caseD_1:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
      FUN_14000be20(&local_60,&local_res20);
      goto switchD_1409114de_default;
    case 3:
switchD_14091178e_caseD_2:
      uVar11 = 3;
      break;
    case 4:
switchD_14091170e_caseD_4:
      uVar11 = 6;
      break;
    case 5:
switchD_140911517_caseD_5:
      uVar11 = 0xb;
      break;
    case 6:
switchD_14091178e_caseD_3:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      goto LAB_1409117e8;
    case 7:
switchD_14091178e_caseD_5:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
      goto LAB_1409117e8;
    default:
      goto switchD_1409114de_default;
    }
LAB_14091151b:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
LAB_1409117e8:
    FUN_14000be20(&local_60,&local_res20);
    break;
  case 1:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xd);
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(4);
    if (iVar7 == 0) goto switchD_14091178e_caseD_1;
    if (iVar7 == 1) goto switchD_14091178e_caseD_2;
    if (iVar7 == 2) goto switchD_140911517_caseD_5;
joined_r0x00014091160f:
    if (iVar7 == 3) goto switchD_14091178e_caseD_5;
    break;
  case 2:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xe);
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(3);
    if (iVar7 == 0) goto switchD_14091178e_caseD_0;
    if (iVar7 == 1) goto switchD_14091170e_caseD_1;
    if (iVar7 == 2) goto switchD_14091178e_caseD_5;
    break;
  case 3:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xf);
LAB_1409117d6:
      FUN_14000be20(&local_48,&local_res20);
      goto switchD_14091178e_caseD_5;
    }
    break;
  case 4:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x10);
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(4);
    if (iVar7 == 0) goto switchD_14091178e_caseD_1;
    if (iVar7 == 1) goto switchD_14091178e_caseD_2;
    if (iVar7 != 2) goto joined_r0x00014091160f;
    uVar11 = 10;
    goto LAB_14091151b;
  case 5:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x11;
LAB_1409117d2:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      goto LAB_1409117d6;
    }
    break;
  case 6:
    iVar7 = FUN_14000d7e0(3);
    if (iVar7 == 0) {
      local_res20._0_2_ = 0x12;
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(2);
      if (iVar7 == 0) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
        FUN_14000be20(&local_60,&local_res20);
      }
      else {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
        FUN_14000be20(&local_60,&local_res20);
      }
    }
    break;
  case 7:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x13;
      goto LAB_1409117d2;
    }
    break;
  case 8:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x14;
      goto LAB_1409117d2;
    }
    break;
  case 9:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x15);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(7);
    switch(uVar8) {
    case 0:
      goto switchD_14091178e_caseD_0;
    case 1:
      goto switchD_14091170e_caseD_1;
    case 2:
      goto switchD_14091178e_caseD_1;
    case 3:
      goto switchD_14091178e_caseD_2;
    case 4:
      goto switchD_14091170e_caseD_4;
    case 5:
switchD_14091178e_caseD_4:
      uVar11 = 0xc;
      goto LAB_14091151b;
    case 6:
      goto switchD_14091178e_caseD_5;
    }
    break;
  case 10:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x16;
      goto LAB_1409117d2;
    }
    break;
  case 0xb:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x17;
      goto LAB_1409117d2;
    }
    break;
  case 0xc:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x18);
    FUN_14000be20(&local_48,&local_res20);
    uVar11 = 6;
    uVar8 = FUN_14000d7e0(6);
    switch(uVar8) {
    case 0:
      goto switchD_14091178e_caseD_0;
    case 1:
      goto switchD_14091178e_caseD_1;
    case 2:
      goto switchD_14091178e_caseD_2;
    case 3:
      goto switchD_14091178e_caseD_3;
    case 4:
      goto switchD_14091178e_caseD_4;
    case 5:
      goto switchD_14091178e_caseD_5;
    }
    break;
  case 0xd:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x19;
      goto LAB_1409117d2;
    }
    break;
  case 0xe:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      uVar11 = 0x1a;
      goto LAB_1409117d2;
    }
  }
switchD_1409114de_default:
  iVar7 = FUN_14000d7e0(5);
  if (iVar7 != 0) goto switchD_14091182b_default;
  uVar8 = FUN_14000d7e0(9);
  switch(uVar8) {
  case 0:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x1b);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(6);
    switch(uVar8) {
    case 0:
      goto switchD_1409119de_caseD_0;
    case 1:
      goto switchD_1409119de_caseD_1;
    case 2:
switchD_1409118b8_caseD_2:
      uVar11 = 3;
      break;
    case 3:
switchD_140911863_caseD_3:
      uVar11 = 10;
      break;
    case 4:
      goto switchD_1409119de_caseD_4;
    case 5:
      goto switchD_1409119de_caseD_6;
    default:
      goto switchD_14091182b_default;
    }
    goto LAB_140911a11;
  case 1:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x1c);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(6);
    switch(uVar8) {
    case 0:
      goto switchD_1409119de_caseD_0;
    case 1:
      goto switchD_1409119de_caseD_1;
    case 2:
      goto switchD_1409118b8_caseD_2;
    case 3:
      goto switchD_1409119de_caseD_2;
    case 4:
      uVar11 = 0xd;
      goto LAB_140911a11;
    case 5:
      goto switchD_1409119de_caseD_6;
    default:
      break;
    }
  case 2:
    uVar11 = 0x1d;
    goto LAB_1409118dd;
  case 3:
    uVar11 = 0x1e;
    goto LAB_1409118dd;
  case 4:
    uVar11 = 0x1f;
LAB_1409118dd:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
switchD_1409119de_caseD_0:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
    }
    else {
LAB_140911900:
      if (iVar7 == 1) {
switchD_1409119de_caseD_1:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
      }
      else {
        if (iVar7 == 2) {
switchD_1409119de_caseD_2:
          uVar11 = 5;
        }
        else {
          if (iVar7 != 3) {
            if (iVar7 != 4) break;
switchD_1409119de_caseD_6:
            local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
            goto LAB_140911a15;
          }
switchD_1409119de_caseD_4:
          uVar11 = 0xb;
        }
LAB_140911a11:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      }
    }
LAB_140911a15:
    FUN_14000be20(&local_60,&local_res20);
    break;
  case 5:
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x20);
      FUN_14000be20(&local_48,&local_res20);
      goto switchD_1409119de_caseD_6;
    }
    break;
  case 6:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x21);
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) {
LAB_140911a0f:
      uVar11 = 0;
      goto LAB_140911a11;
    }
    if (iVar7 == 1) goto switchD_1409119de_caseD_0;
    if (iVar7 == 2) goto switchD_1409118b8_caseD_2;
    if (iVar7 == 3) goto switchD_1409119de_caseD_3;
    if (iVar7 == 4) goto switchD_140911863_caseD_3;
    break;
  case 7:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x22);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(7);
    switch(uVar8) {
    case 0:
      goto switchD_1409119de_caseD_0;
    case 1:
      goto switchD_1409119de_caseD_1;
    case 2:
      goto switchD_1409119de_caseD_2;
    case 3:
switchD_1409119de_caseD_3:
      uVar11 = 6;
      break;
    case 4:
      goto switchD_1409119de_caseD_4;
    case 5:
      uVar11 = 0xc;
      break;
    case 6:
      goto switchD_1409119de_caseD_6;
    default:
      goto switchD_14091182b_default;
    }
    goto LAB_140911a11;
  case 8:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x23);
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(5);
    if (iVar7 == 0) goto LAB_140911a0f;
    goto LAB_140911900;
  }
switchD_14091182b_default:
  iVar7 = FUN_14000d7e0(5);
  if (iVar7 == 0) {
    uVar8 = FUN_14000d7e0(6);
    switch(uVar8) {
    case 0:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x24);
      FUN_14000be20(&local_48,&local_res20);
      uVar8 = FUN_14000d7e0(6);
      switch(uVar8) {
      case 0:
switchD_140911a8a_caseD_0:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
        break;
      case 1:
switchD_140911a8a_caseD_1:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,3);
        break;
      case 2:
switchD_140911a8a_caseD_2:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,4);
        break;
      case 3:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,6);
        break;
      case 4:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xc);
        break;
      case 5:
switchD_140911a8a_caseD_5:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
        break;
      default:
        goto switchD_140911a52_default;
      }
LAB_140911bb7:
      FUN_14000be20(&local_60,&local_res20);
      break;
    case 1:
      iVar7 = FUN_14000d7e0(3);
      if (iVar7 == 0) {
        local_res20._0_2_ = 0x25;
        FUN_14000be20(&local_48,&local_res20);
        iVar7 = FUN_14000d7e0(2);
        if (iVar7 == 0) {
          local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
        }
        else {
          local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
        }
        goto LAB_140911bb7;
      }
      break;
    case 2:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x26);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(4);
      if (iVar7 == 0) goto switchD_140911a8a_caseD_0;
      if (iVar7 == 1) goto switchD_140911a8a_caseD_1;
      if (iVar7 == 2) goto switchD_140911a8a_caseD_2;
      if (iVar7 == 3) goto switchD_140911a8a_caseD_5;
      break;
    case 3:
      iVar7 = FUN_14000d7e0(5);
      if (iVar7 == 0) {
        uVar11 = 0x27;
LAB_140911b99:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
        FUN_14000be20(&local_48,&local_res20);
        goto switchD_140911a8a_caseD_5;
      }
      break;
    case 4:
      iVar7 = FUN_14000d7e0(5);
      if (iVar7 == 0) {
        uVar11 = 0x28;
        goto LAB_140911b99;
      }
      break;
    case 5:
      iVar7 = FUN_14000d7e0(5);
      if (iVar7 == 0) {
        uVar11 = 0x29;
        goto LAB_140911b99;
      }
    }
  }
switchD_140911a52_default:
  iVar7 = FUN_14000d7e0(10);
  if (iVar7 == 0) {
    iVar7 = FUN_14000d7e0(3);
    if (iVar7 == 0) {
      iVar7 = FUN_14000d7e0(5);
      if (iVar7 == 0) {
        uVar11 = 0x2a;
LAB_140911c56:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
        FUN_14000be20(&local_48,&local_res20);
LAB_140911c67:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
        goto LAB_140911c6c;
      }
    }
    else if (iVar7 == 1) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x2b);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(3);
      if (iVar7 == 0) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,3);
      }
      else {
        if (iVar7 != 1) {
          if (iVar7 != 2) goto LAB_140911c79;
          goto LAB_140911c67;
        }
        local_res20 = (short *)CONCAT62(local_res20._2_6_,10);
      }
LAB_140911c6c:
      FUN_14000be20(&local_60,&local_res20);
    }
    else if ((iVar7 == 2) && (iVar7 = FUN_14000d7e0(5), iVar7 == 0)) {
      uVar11 = 0x2c;
      goto LAB_140911c56;
    }
  }
LAB_140911c79:
  iVar7 = FUN_14000d7e0(5);
  if (iVar7 == 0) {
    iVar7 = FUN_14000d7e0(2);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x2d);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(5);
      if (iVar7 == 0) {
        uVar11 = 0;
LAB_140911d53:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
      }
      else {
        if (iVar7 != 1) {
          if (iVar7 == 2) {
            uVar11 = 4;
          }
          else {
            if (iVar7 != 3) {
              if (iVar7 != 4) goto LAB_140911d5c;
              local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
              goto LAB_140911d57;
            }
            uVar11 = 5;
          }
          goto LAB_140911d53;
        }
        local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
      }
LAB_140911d57:
      FUN_14000be20(&local_60,&local_res20);
    }
    else if ((iVar7 == 1) && (iVar7 = FUN_14000d7e0(3), iVar7 == 0)) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x2e);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(2);
      if (iVar7 == 0) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
        goto LAB_140911d57;
      }
      uVar11 = 0xb;
      goto LAB_140911d53;
    }
  }
LAB_140911d5c:
  iVar7 = FUN_14000d7e0(10);
  if (iVar7 != 0) goto switchD_140911dc0_default;
  iVar7 = FUN_14000d7e0(3);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x30);
      FUN_14000be20(&local_48,&local_res20);
      uVar8 = FUN_14000d7e0(8);
      switch(uVar8) {
      case 0:
        goto switchD_140911e31_caseD_0;
      case 1:
        goto switchD_140911dc0_caseD_0;
      case 2:
        goto switchD_140911dc0_caseD_1;
      case 3:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,3);
        goto LAB_140911e86;
      case 4:
        goto switchD_140911dc0_caseD_2;
      case 5:
        goto switchD_140911dc0_caseD_3;
      case 6:
        goto switchD_140911dc0_caseD_4;
      case 7:
        goto switchD_140911dc0_caseD_5;
      }
    }
    else if (iVar7 == 2) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x31);
      FUN_14000be20(&local_48,&local_res20);
      uVar8 = FUN_14000d7e0(6);
      switch(uVar8) {
      case 0:
        goto switchD_140911dc0_caseD_0;
      case 1:
        goto switchD_140911dc0_caseD_1;
      case 2:
        goto switchD_140911dc0_caseD_2;
      case 3:
        goto switchD_140911dc0_caseD_3;
      case 4:
        goto switchD_140911dc0_caseD_4;
      case 5:
        goto switchD_140911dc0_caseD_5;
      }
    }
    goto switchD_140911dc0_default;
  }
  local_res20 = (short *)CONCAT62(local_res20._2_6_,0x2f);
  FUN_14000be20(&local_48,&local_res20);
  uVar8 = FUN_14000d7e0(8);
  switch(uVar8) {
  case 0:
switchD_140911e31_caseD_0:
    uVar11 = 0;
    goto LAB_140911e35;
  case 1:
switchD_140911dc0_caseD_0:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
    break;
  case 2:
switchD_140911dc0_caseD_1:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
    break;
  case 3:
    uVar11 = 3;
LAB_140911e35:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
    break;
  case 4:
switchD_140911dc0_caseD_2:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,5);
    break;
  case 5:
switchD_140911dc0_caseD_3:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xb);
    break;
  case 6:
switchD_140911dc0_caseD_4:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xc);
    break;
  case 7:
switchD_140911dc0_caseD_5:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
    break;
  default:
    goto switchD_140911dc0_default;
  }
LAB_140911e86:
  FUN_14000be20(&local_60,&local_res20);
switchD_140911dc0_default:
  iVar7 = FUN_14000d7e0(0x28);
  if (iVar7 == 0) {
    local_res20._0_2_ = 0x32;
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(2);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
    }
    else {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,10);
    }
    FUN_14000be20(&local_60,&local_res20);
  }
  iVar7 = FUN_14000d7e0(0x28);
  if (iVar7 == 0) {
    local_res20._0_2_ = 0x33;
    FUN_14000be20(&local_48,&local_res20);
    iVar7 = FUN_14000d7e0(2);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
    }
    else {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,10);
    }
    FUN_14000be20(&local_60,&local_res20);
  }
  iVar7 = FUN_14000d7e0(0x28);
  if (iVar7 == 0) {
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x34);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(6);
    switch(uVar8) {
    case 0:
      uVar11 = 0;
      break;
    case 1:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
      goto LAB_140911f97;
    case 2:
      uVar11 = 3;
      break;
    case 3:
      uVar11 = 4;
      break;
    case 4:
      uVar11 = 6;
      break;
    case 5:
      uVar11 = 9;
      break;
    default:
      goto switchD_140911f6d_default;
    }
    local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
LAB_140911f97:
    FUN_14000be20(&local_60,&local_res20);
  }
switchD_140911f6d_default:
  iVar7 = FUN_14000d7e0(0x28);
  if (iVar7 == 0) {
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x35);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(7);
    switch(uVar8) {
    case 0:
      local_res20 = (short *)((ulonglong)local_res20 & 0xffffffffffff0000);
      break;
    case 1:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
      break;
    case 2:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
      break;
    case 3:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,7);
      break;
    case 4:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xc);
      break;
    case 5:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xd);
      break;
    case 6:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
      break;
    default:
      goto switchD_140911fe4_default;
    }
    FUN_14000be20(&local_60,&local_res20);
  }
switchD_140911fe4_default:
  iVar7 = FUN_14000d7e0(10);
  if (iVar7 == 0) {
    iVar7 = FUN_14000d7e0(4);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x36);
      FUN_14000be20(&local_48,&local_res20);
      uVar8 = FUN_14000d7e0(7);
      switch(uVar8) {
      case 0:
switchD_140912187_caseD_0:
        local_res20 = (short *)((ulonglong)local_res20 & 0xffffffffffff0000);
        break;
      case 1:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
        break;
      case 2:
switchD_140912187_caseD_2:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
        break;
      case 3:
switchD_140912187_caseD_3:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,5);
        break;
      case 4:
switchD_140912187_caseD_4:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,9);
        break;
      case 5:
        goto switchD_140912187_caseD_5;
      case 6:
switchD_140912187_caseD_6:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
        break;
      default:
        goto switchD_140912187_default;
      }
LAB_1409121a0:
      FUN_14000be20(&local_60,&local_res20);
    }
    else {
      if (iVar7 == 1) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0x37);
        FUN_14000be20(&local_48,&local_res20);
        iVar7 = FUN_14000d7e0(5);
        if (iVar7 == 0) goto switchD_140912187_caseD_0;
        if (iVar7 == 1) goto switchD_140912187_caseD_3;
        if (iVar7 == 2) goto switchD_140912187_caseD_4;
        iVar7 = iVar7 + -3;
        if (iVar7 != 0) goto LAB_140912197;
switchD_140912187_caseD_5:
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0xc);
        goto LAB_1409121a0;
      }
      if (iVar7 == 2) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0x38);
        FUN_14000be20(&local_48,&local_res20);
        iVar7 = FUN_14000d7e0(4);
        if (iVar7 == 0) goto switchD_140912187_caseD_2;
        if (iVar7 == 1) goto switchD_140912187_caseD_4;
        iVar7 = iVar7 + -2;
        if (iVar7 == 0) {
          local_res20 = (short *)CONCAT62(local_res20._2_6_,10);
          goto LAB_1409121a0;
        }
LAB_140912197:
        if (iVar7 == 1) goto switchD_140912187_caseD_6;
      }
      else if (iVar7 == 3) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,0x39);
        FUN_14000be20(&local_48,&local_res20);
        iVar7 = FUN_14000d7e0(4);
        if (iVar7 == 0) {
          local_res20 = (short *)CONCAT62(local_res20._2_6_,6);
        }
        else {
          if (iVar7 == 1) goto switchD_140912187_caseD_5;
          iVar7 = iVar7 + -2;
          if (iVar7 != 0) goto LAB_140912197;
          local_res20 = (short *)CONCAT62(local_res20._2_6_,0xb);
        }
        goto LAB_1409121a0;
      }
    }
  }
switchD_140912187_default:
  iVar7 = FUN_14000d7e0(10);
  if (iVar7 == 0) {
    iVar7 = FUN_14000d7e0(2);
    if (iVar7 == 0) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x3a);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(4);
      if (iVar7 == 0) {
LAB_140912252:
        uVar11 = 0;
      }
      else if (iVar7 == 1) {
        uVar11 = 6;
      }
      else if (iVar7 == 2) {
        uVar11 = 0xb;
      }
      else {
        if (iVar7 != 3) goto LAB_140912265;
        uVar11 = 0xc;
      }
LAB_140912254:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
LAB_140912258:
      FUN_14000be20(&local_60,&local_res20);
    }
    else if (iVar7 == 1) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x3b);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(3);
      if (iVar7 == 0) goto LAB_140912252;
      if (iVar7 == 1) {
        local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
        goto LAB_140912258;
      }
      if (iVar7 == 2) {
        uVar11 = 4;
        goto LAB_140912254;
      }
    }
  }
LAB_140912265:
  iVar7 = FUN_14000d7e0(10);
  if (iVar7 != 0) goto switchD_140912360_default;
  iVar7 = FUN_14000d7e0(3);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      iVar7 = FUN_14000d7e0(3);
      if (iVar7 == 0) {
        local_res20._0_2_ = 0x3d;
        FUN_14000be20(&local_48,&local_res20);
        iVar7 = FUN_14000d7e0(2);
        if (iVar7 != 0) {
          local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
          goto LAB_1409123a6;
        }
        local_res20 = (short *)CONCAT62(local_res20._2_6_,5);
        FUN_14000be20(&local_60,&local_res20);
      }
    }
    else if (iVar7 == 2) {
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0x3e);
      FUN_14000be20(&local_48,&local_res20);
      iVar7 = FUN_14000d7e0(3);
      if (iVar7 == 0) goto switchD_140912360_caseD_1;
      if (iVar7 == 1) goto switchD_140912360_caseD_2;
      if (iVar7 == 2) goto switchD_140912360_caseD_6;
    }
    goto switchD_140912360_default;
  }
  local_res20 = (short *)CONCAT62(local_res20._2_6_,0x3c);
  FUN_14000be20(&local_48,&local_res20);
  uVar8 = FUN_14000d7e0(7);
  switch(uVar8) {
  case 0:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,1);
    break;
  case 1:
switchD_140912360_caseD_1:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
    break;
  case 2:
switchD_140912360_caseD_2:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,5);
    FUN_14000be20(&local_60,&local_res20);
    goto switchD_140912360_default;
  case 3:
    uVar11 = 6;
    goto LAB_140912385;
  case 4:
    uVar11 = 0xb;
    goto LAB_140912385;
  case 5:
    uVar11 = 0xc;
LAB_140912385:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,uVar11);
    break;
  case 6:
switchD_140912360_caseD_6:
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
    break;
  default:
    goto switchD_140912360_default;
  }
LAB_1409123a6:
  FUN_14000be20(&local_60,&local_res20);
switchD_140912360_default:
  iVar7 = FUN_14000d7e0(0x28);
  if (iVar7 == 0) {
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0x3f);
    FUN_14000be20(&local_48,&local_res20);
    uVar8 = FUN_14000d7e0(5);
    switch(uVar8) {
    case 0:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,2);
      break;
    case 1:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,5);
      break;
    case 2:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,7);
      break;
    case 3:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xb);
      break;
    case 4:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xe);
      break;
    case 5:
      local_res20 = (short *)CONCAT62(local_res20._2_6_,0xffff);
      break;
    default:
      goto switchD_1409123ed_default;
    }
    FUN_14000be20(&local_60,&local_res20);
  }
switchD_1409123ed_default:
  iVar7 = FUN_14000d7e0(200);
  if (iVar7 == 0) {
    local_res20._0_2_ = 0x40;
    FUN_14000be20(&local_48,&local_res20);
    local_res20 = (short *)CONCAT62(local_res20._2_6_,0xd);
    FUN_14000be20(&local_60,&local_res20);
  }
  lVar10 = FUN_140051f10(&DAT_141d6dd30,param_2,param_3);
  uVar14 = (longlong)puStack_40 - local_48 >> 1;
  uVar6 = (uint)uVar14;
  lVar4 = local_48;
joined_r0x00014091248f:
  do {
    local_48 = lVar4;
    if ((int)uVar6 < 1) {
      FUN_140002620(&local_60);
      FUN_140002620(&local_48);
      return;
    }
    iVar7 = FUN_14000d7e0(uVar14 & 0xffffffff);
    uVar6 = (int)uVar14 - 1;
    uVar14 = (ulonglong)uVar6;
    lVar13 = (longlong)iVar7;
    sVar1 = *(short *)(lVar4 + lVar13 * 2);
    sVar2 = *(short *)(local_60 + lVar13 * 2);
    FUN_1400b29f0(&local_48,lVar13);
    FUN_1400b29f0(&local_60);
  } while ((lVar10 != 0) &&
          ((cVar5 = FUN_14000d840(lVar10 + 0x3f68,(int)sVar1), lVar4 = local_48, cVar5 == '\0' ||
           (cVar5 = FUN_14000d840(lVar10 + 0x3f78), lVar4 = local_48, cVar5 == '\0'))));
  bVar12 = false;
  switch(sVar1) {
  case 0x10:
  case 0x19:
    if (*(short *)(param_1 + 0xd6) < 0x28) {
      bVar12 = true;
    }
    break;
  case 0x11:
    bVar12 = *(short *)(param_1 + 0x9c) < 0x28;
    if (0x3c < *(short *)(param_1 + 0x9e)) {
      bVar12 = true;
    }
    break;
  case 0x14:
    bVar12 = 0x3c < *(short *)(param_1 + 0x86) || *(short *)(param_1 + 0x9c) < 0x28;
    if (0x3c < *(short *)(param_1 + 0xcc)) {
      bVar12 = true;
    }
    break;
  case 0x15:
    if (*(short *)(param_1 + 0xd8) < 0x28) {
      bVar12 = true;
    }
    break;
  case 0x17:
    bVar12 = *(short *)(param_1 + 0xb4) < 0x28;
    if (0x3c < *(short *)(param_1 + 0xbe)) {
      bVar12 = true;
    }
    break;
  case 0x18:
    bVar12 = *(short *)(param_1 + 0xd6) < 0x28;
    if (0x3c < *(short *)(param_1 + 0xd8)) {
      bVar12 = true;
    }
    break;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x29:
    if (*(short *)(param_1 + 0xb0) < 0x19) {
      bVar12 = true;
    }
    break;
  case 0x28:
    bVar12 = *(short *)(param_1 + 0xb0) < 0x19;
    if (*(short *)(param_1 + 0x8c) < 0x28) {
      bVar12 = true;
    }
    break;
  case 0x2a:
    if (*(short *)(param_1 + 0xdc) < 0x28) {
      bVar12 = true;
    }
    break;
  case 0x2b:
    if (*(short *)(param_1 + 0x86) < 0x4c) {
      bVar12 = true;
    }
    break;
  case 0x2c:
    if (*(short *)(param_1 + 0xa6) < 0x3d) {
      bVar12 = true;
    }
    break;
  case 0x2d:
    if ((sVar2 == -1) && (*(short *)(param_1 + 0xa0) < 0x3d)) {
      bVar12 = true;
    }
    break;
  case 0x2e:
    if (0x27 < *(short *)(param_1 + 0xa0)) {
      bVar12 = true;
    }
    break;
  case 0x32:
    bVar12 = *(short *)(param_1 + 0xd6) < 0x28;
    if (*(short *)(param_1 + 0x9e) < 0x19) {
      bVar12 = true;
    }
    break;
  case 0x33:
    bVar12 = false;
    if (*(short *)(param_1 + 0x8c) < 0x28) {
      bVar12 = true;
    }
  }
  lVar4 = local_48;
  switch(sVar2) {
  case 0:
  case 6:
  case 0xc:
    if (0x18 < *(short *)(param_1 + 0x8a)) break;
    goto joined_r0x00014091248f;
  case 2:
    sVar3 = *(short *)(param_1 + 0x8c);
    goto joined_r0x000140912712;
  case 3:
    sVar3 = *(short *)(param_1 + 0xdc);
joined_r0x000140912712:
    if (sVar3 < 0x19) goto joined_r0x00014091248f;
    break;
  case 0xb:
    goto switchD_1409126ed_caseD_b;
  }
switchD_1409126ed_caseD_1:
  if (!bVar12) {
    local_res20 = operator_new(4);
    local_res20 = (short *)FUN_140364df0(local_res20);
    *local_res20 = sVar1;
    local_res20[1] = sVar2;
    FUN_140050070(param_1 + 0xf0,&local_res20);
    lVar4 = local_48;
  }
  goto joined_r0x00014091248f;
switchD_1409126ed_caseD_b:
  if (0x4b < *(short *)(param_1 + 0xda)) goto joined_r0x00014091248f;
  goto switchD_1409126ed_caseD_1;
}

