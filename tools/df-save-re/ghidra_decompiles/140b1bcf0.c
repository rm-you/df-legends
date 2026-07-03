// FUN_140b1bcf0 @ 140b1bcf0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b0d2d0 FUN_140b0d2d0
//   -> 1405b54d0 FUN_1405b54d0


void FUN_140b1bcf0(undefined1 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  short sVar9;
  short sVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *local_res8;
  undefined4 local_res18 [2];
  longlong local_res20;
  
  lVar11 = 0x11;
  puVar4 = param_1;
  local_res8 = param_1;
  do {
    lVar3 = 0x11;
    do {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*puVar4);
      FUN_1405bb7c0(param_2,local_res18,1);
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar7 = (undefined2 *)(param_1 + 0x122);
  lVar11 = 0x11;
  do {
    lVar3 = 0x11;
    do {
      local_res18[0] = CONCAT22(local_res18[0]._2_2_,*puVar7);
      FUN_1405bb7c0(param_2,local_res18,2);
      puVar7 = puVar7 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar5 = (undefined4 *)(param_1 + 0x364);
  lVar11 = 0x10;
  do {
    lVar3 = 0x10;
    do {
      local_res18[0] = *puVar5;
      FUN_1405bb7c0(param_2,local_res18,4);
      puVar5 = puVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = 0;
  sVar9 = 0;
  local_res20 = 0;
  do {
    lVar12 = 0;
    sVar10 = 0;
    lVar3 = local_res20;
    do {
      puVar4 = local_res8;
      if (sVar9 < 0x10) {
        local_res18[0]._0_2_ = *(undefined2 *)(local_res8 + (lVar3 + lVar12) * 4 + 0x764);
        FUN_1405bb7c0(param_2,local_res18,2);
        local_res18[0] =
             CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(puVar4 + (lVar3 + lVar12) * 4 + 0x766));
        FUN_1405bb7c0(param_2,local_res18,2);
      }
      puVar4 = local_res8;
      if (sVar10 < 0x10) {
        local_res18[0]._0_2_ = *(undefined2 *)(local_res8 + (lVar12 + lVar11) * 4 + 0xba4);
        FUN_1405bb7c0(param_2,local_res18,2);
        local_res18[0] =
             CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(puVar4 + (lVar12 + lVar11) * 4 + 0xba6));
        FUN_1405bb7c0(param_2,local_res18,2);
      }
      if ((sVar9 < 0x10) && (sVar10 < 0x10)) {
        plVar1 = (longlong *)(local_res8 + ((lVar12 + lVar11) * 3 + 0x45b) * 8);
        local_res18[0] =
             CONCAT22(local_res18[0]._2_2_,
                      (short)((longlong)(ulonglong)(uint)((int)plVar1[1] - (int)*plVar1) >> 3));
        FUN_1405bb7c0(param_2,local_res18,2);
        uVar8 = 0;
        sVar2 = 0;
        lVar3 = local_res20;
        if (plVar1[1] - *plVar1 >> 3 != 0) {
          do {
            FUN_140b0d2d0(*(undefined8 *)(*plVar1 + uVar8 * 8),param_2);
            sVar2 = sVar2 + 1;
            uVar8 = (ulonglong)sVar2;
            lVar3 = local_res20;
          } while (uVar8 < (ulonglong)(plVar1[1] - *plVar1 >> 3));
        }
      }
      puVar4 = local_res8;
      sVar10 = sVar10 + 1;
      lVar12 = lVar12 + 1;
    } while (sVar10 < 0x11);
    local_res20 = lVar3 + 0x11;
    sVar9 = sVar9 + 1;
    lVar11 = lVar11 + 0x10;
  } while (sVar9 < 0x11);
  lVar11 = 0x10;
  puVar6 = local_res8 + 0xfe4;
  do {
    lVar3 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar6);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar6 = puVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar6 = puVar4 + 0x10e4;
  lVar11 = 0x10;
  do {
    lVar3 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar6);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar6 = puVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar6 = puVar4 + 0x11e4;
  lVar11 = 0x10;
  do {
    lVar3 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar6);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar6 = puVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  local_res8._0_2_ = *(undefined2 *)(puVar4 + 0x12e4);
  FUN_1405bb7c0(param_2,&local_res8,2);
  local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*(undefined2 *)(puVar4 + 0x12e6));
  FUN_1405bb7c0(param_2,&local_res8,2);
  FUN_1405b54d0(puVar4 + 0x12e8,param_2);
  puVar7 = (undefined2 *)(puVar4 + 0x12f2);
  lVar11 = 0x11;
  lVar3 = 0x10;
  do {
    lVar12 = 0x11;
    do {
      local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*puVar7);
      FUN_1405bb7c0(param_2,&local_res8,2);
      puVar7 = puVar7 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar7 = (undefined2 *)(puVar4 + 0x1512);
  lVar3 = 0x10;
  do {
    lVar12 = 0x11;
    do {
      local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*puVar7);
      FUN_1405bb7c0(param_2,&local_res8,2);
      puVar7 = puVar7 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar6 = puVar4 + 0x1732;
  lVar3 = 0x10;
  do {
    lVar12 = 0x11;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar6);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar6 = puVar6 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar7 = (undefined2 *)(puVar4 + 0x1842);
  lVar3 = 0x10;
  do {
    lVar12 = 0x11;
    do {
      local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*puVar7);
      FUN_1405bb7c0(param_2,&local_res8,2);
      puVar7 = puVar7 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar7 = (undefined2 *)(puVar4 + 0x1a62);
  lVar3 = 0x11;
  do {
    lVar12 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*puVar7);
      FUN_1405bb7c0(param_2,&local_res8,2);
      puVar7 = puVar7 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar7 = (undefined2 *)(puVar4 + 0x1c82);
  lVar3 = 0x11;
  do {
    lVar12 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*puVar7);
      FUN_1405bb7c0(param_2,&local_res8,2);
      puVar7 = puVar7 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar6 = puVar4 + 0x1ea2;
  lVar3 = 0x11;
  do {
    lVar12 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar6);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar6 = puVar6 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar7 = (undefined2 *)(puVar4 + 0x1fb2);
  do {
    lVar3 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*puVar7);
      FUN_1405bb7c0(param_2,&local_res8,2);
      puVar7 = puVar7 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  local_res8 = (undefined1 *)CONCAT62(local_res8._2_6_,*(undefined2 *)(puVar4 + 0x3ad8));
  FUN_1405bb7c0(param_2,&local_res8,2);
  puVar6 = puVar4 + 0x21d2;
  lVar11 = 0x10;
  do {
    lVar3 = 0x10;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar6);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar6 = puVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar4 = puVar4 + 0x3ada;
  lVar11 = 0x30;
  do {
    lVar3 = 0x30;
    do {
      local_res8 = (undefined1 *)CONCAT71(local_res8._1_7_,*puVar4);
      FUN_1405bb7c0(param_2,&local_res8,1);
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

