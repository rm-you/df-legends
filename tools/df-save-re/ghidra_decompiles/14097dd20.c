// FUN_14097dd20 @ 14097dd20
// callees:
//   -> 14097d5a0 FUN_14097d5a0
//   -> 140b80fb0 FUN_140b80fb0
//   -> 140dfb5b4 free
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140938360 FUN_140938360
//   -> 1405d5390 FUN_1405d5390
//   -> 14027ff00 FUN_14027ff00
//   -> 1405d54b0 FUN_1405d54b0
//   -> 1405d5860 FUN_1405d5860
//   -> 1405d55a0 FUN_1405d55a0
//   -> 14000d840 FUN_14000d840
//   -> 140670fe0 FUN_140670fe0
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 1401b2f70 FUN_1401b2f70


void FUN_14097dd20(longlong param_1)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  short sVar12;
  int iVar13;
  undefined4 uVar14;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  char local_res18;
  char local_res19;
  char local_res1a;
  char local_res1b;
  undefined4 local_res20 [2];
  
  FUN_14097d5a0();
  FUN_140b80fb0(param_1 + 0x218);
  iVar8 = (int)(*(longlong *)(param_1 + 0x2358) - *(longlong *)(param_1 + 0x2350) >> 3) + -1;
  lVar10 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x2350) + lVar10 * 8));
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  iVar8 = 0;
  *(undefined8 *)(param_1 + 0x2358) = *(undefined8 *)(param_1 + 0x2350);
  *(undefined4 *)(param_1 + 0x2368) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  sVar12 = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 10000;
  *(undefined4 *)(param_1 + 0xbc) = 5000;
  uVar9 = FUN_1409fc0c0();
  uVar9 = uVar9 + (int)((longlong)((ulonglong)uVar9 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e;
  if (uVar9 == 0) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 5000;
  }
  else if (uVar9 == 1) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 0x9c4;
  }
  FUN_140938360(param_1 + 0x8bd8);
  FUN_1405d5390(param_1 + 0x6560);
  *(undefined1 *)(param_1 + 0x6585) = 0;
  *(undefined4 *)(param_1 + 0x657c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6580) = 0xffffffff;
  *(undefined8 *)(param_1 + 26000) = *(undefined8 *)(param_1 + 0x6588);
  FUN_14027ff00(param_1 + 0x65a0);
  *(undefined4 *)(param_1 + 0x65c0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x65cc) = 1;
  *(undefined1 *)(param_1 + 0x6584) = 0;
  *(undefined4 *)(param_1 + 0x65c4) = 0x8ad00000;
  *(undefined1 *)(param_1 + 0x65ce) = 0;
  FUN_1405d54b0(param_1 + 0x65d8);
  *(undefined8 *)(param_1 + 0x65f0) = 0;
  FUN_1405d5860(param_1 + 0x65f8);
  *(undefined4 *)(param_1 + 0x8578) = 0;
  FUN_1405d55a0(param_1 + 0x8610);
  iVar13 = (int)(DAT_141d6dc18 - DAT_141d6dc10 >> 3);
  lVar10 = DAT_141d6dc10;
  if (iVar13 < 1) {
    *(undefined8 *)(param_1 + 0x8b50) = 0;
    *(undefined8 *)(param_1 + 0x8b58) = 0;
  }
  else {
    do {
      uVar14 = 0xffffffff;
      if (-1 < iVar8) {
        uVar11 = DAT_141d6dc18 - lVar10 >> 3;
        if ((((ulonglong)(longlong)iVar8 < uVar11) &&
            (cVar7 = FUN_14000d840(*(longlong *)(lVar10 + (longlong)iVar8 * 8) + 0x40,5),
            cVar7 != '\0')) &&
           ((FUN_140670fe0(sVar12,&local_res18), local_res18 != '\0' ||
            (((local_res19 != '\0' || (local_res1a != '\0')) || (local_res1b != '\0')))))) {
          if ((iVar8 < 0) || (uVar11 <= (ulonglong)(longlong)iVar8)) {
            local_res8[0] = 0xffff;
          }
          else {
            lVar10 = *(longlong *)(lVar10 + (longlong)iVar8 * 8);
            local_res8[0] = *(undefined2 *)(lVar10 + 0x26e);
            uVar14 = *(undefined4 *)(lVar10 + 0x288);
          }
          uVar6 = local_res8[0];
          puVar1 = (ulonglong *)(param_1 + 0x23e8);
          local_res20[0] = uVar14;
          puVar2 = *(undefined2 **)(param_1 + 0x23f0);
          local_res10[0] = 0x34;
          if ((local_res10 < puVar2) && (puVar3 = (undefined2 *)*puVar1, puVar3 <= local_res10)) {
            if (puVar2 == *(undefined2 **)(param_1 + 0x23f8)) {
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x23f0) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x23f0) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res10 - (longlong)puVar3 >> 1) * 2);
            }
          }
          else {
            if (puVar2 == *(undefined2 **)(param_1 + 0x23f8)) {
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x23f0) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x23f0) = 0x34;
            }
          }
          *(longlong *)(param_1 + 0x23f0) = *(longlong *)(param_1 + 0x23f0) + 2;
          puVar1 = (ulonglong *)(param_1 + 0x2400);
          puVar2 = *(undefined2 **)(param_1 + 0x2408);
          local_res10[0] = 0xffff;
          if ((local_res10 < puVar2) && (puVar3 = (undefined2 *)*puVar1, puVar3 <= local_res10)) {
            if (puVar2 == *(undefined2 **)(param_1 + 0x2410)) {
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x2408) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x2408) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res10 - (longlong)puVar3 >> 1) * 2);
            }
          }
          else {
            if (puVar2 == *(undefined2 **)(param_1 + 0x2410)) {
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x2408) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x2408) = 0xffff;
            }
          }
          *(longlong *)(param_1 + 0x2408) = *(longlong *)(param_1 + 0x2408) + 2;
          puVar1 = (ulonglong *)(param_1 + 0x2418);
          puVar2 = *(undefined2 **)(param_1 + 0x2420);
          if ((local_res8 < puVar2) && (puVar3 = (undefined2 *)*puVar1, puVar3 <= local_res8)) {
            if (puVar2 == *(undefined2 **)(param_1 + 0x2428)) {
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x2420) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x2420) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)puVar3 >> 1) * 2);
            }
          }
          else {
            if (puVar2 == *(undefined2 **)(param_1 + 0x2428)) {
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x2420) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x2420) = uVar6;
            }
          }
          *(longlong *)(param_1 + 0x2420) = *(longlong *)(param_1 + 0x2420) + 2;
          puVar1 = (ulonglong *)(param_1 + 0x2430);
          puVar4 = *(undefined4 **)(param_1 + 0x2438);
          if ((local_res20 < puVar4) && (puVar5 = (undefined4 *)*puVar1, puVar5 <= local_res20)) {
            if (puVar4 == *(undefined4 **)(param_1 + 0x2440)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0x2438) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x2438) =
                   *(undefined4 *)(*puVar1 + ((longlong)local_res20 - (longlong)puVar5 >> 2) * 4);
            }
          }
          else {
            if (puVar4 == *(undefined4 **)(param_1 + 0x2440)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0x2438) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x2438) = uVar14;
            }
          }
          *(longlong *)(param_1 + 0x2438) = *(longlong *)(param_1 + 0x2438) + 4;
          puVar1 = (ulonglong *)(param_1 + 0x2448);
          local_res8[0] = CONCAT11(local_res8[0]._1_1_,1);
          puVar2 = *(undefined2 **)(param_1 + 0x2450);
          if ((local_res8 < puVar2) && (puVar3 = (undefined2 *)*puVar1, puVar3 <= local_res8)) {
            if (puVar2 == *(undefined2 **)(param_1 + 0x2458)) {
              FUN_1401b2f70(puVar1,1);
            }
            if (*(undefined1 **)(param_1 + 0x2450) != (undefined1 *)0x0) {
              **(undefined1 **)(param_1 + 0x2450) =
                   *(undefined1 *)((longlong)local_res8 + (*puVar1 - (longlong)puVar3));
            }
          }
          else {
            if (puVar2 == *(undefined2 **)(param_1 + 0x2458)) {
              FUN_1401b2f70(puVar1,1);
            }
            if (*(undefined1 **)(param_1 + 0x2450) != (undefined1 *)0x0) {
              **(undefined1 **)(param_1 + 0x2450) = 1;
            }
          }
          *(longlong *)(param_1 + 0x2450) = *(longlong *)(param_1 + 0x2450) + 1;
          lVar10 = DAT_141d6dc10;
        }
      }
      sVar12 = sVar12 + 1;
      iVar8 = (int)sVar12;
    } while (iVar8 < iVar13);
    *(undefined8 *)(param_1 + 0x8b50) = 0;
    *(undefined8 *)(param_1 + 0x8b58) = 0;
  }
  return;
}

